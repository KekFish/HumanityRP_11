modded class Frostbite extends ModifierBase
{
	
	override bool ActivateCondition( PlayerBase player )
	{
		return false;
	}

	override bool DeactivateCondition( PlayerBase player )
	{
		return true;
	}
};
modded class PlayerBase
{

    override void UpdateColdResistance( float coldresist )
	{
		GetStatColdResistance().Set( 0 );
		m_ColdResistance = (int) ( 0 );
		SetSynchDirty();
	}

}
#ifdef DZM_VPPAdminToolsScripts
modded class ChatCommandManager
{

    
    override void OnInit()
    {
        super.OnInit();

		AddChatCommand(new NamalskEvents("/runevent", 1, "Chat:NamalskRunEvent"));
		
		
    }
}
#endif
modded class EVRStorm
{


    override vector GetEventPosition()
	{
		string world_name;
		GetGame().GetWorldName(world_name);
		world_name.ToLower();
		
		switch (world_name) {
			
			case "namalsk": return Vector(3777, 152.5, 8244);
			
			case "deerisle": return Vector(688.5, 60.5, 15488.1);			
			
			// Its like a treasure hunt :)
			case "chernarusplus": return GetRandomTeleportPosition(7500, 7500, 10000) + "0 10 0";
			
			case "enoch": return Vector(7344.993164, 286.397003, 2647.411377);
		}
		
		return vector.Zero;
	}

}
#ifdef mah_cooker
modded class vfx_the_thing: House
{	
    protected hrp_spotlight m_Light;


    void vfx_the_thing()
    {

        m_Light = hrp_spotlight.Cast(ScriptedLightBase.CreateLight(hrp_spotlight, "7344.993164 286.397003 2647.411377"));


    }
	override void UpdateFrame()
	{
		vector position = GetPosition();
		float scale = GetScale();

		if (!m_AnomalyAura)
		{
			m_AnomalyAura = ParticleManager.GetInstance().PlayOnObject(ParticleList.hrp_fire_oko, this);
		}

		vector size[2];
		ClippingInfo(size);

		vector sizeResult = GetAbsValues(size);
		float radius = (sizeResult[1] / 2 * scale) + scale * 1.5;

		if (m_Light)
		{
			m_Light.SetHeatHazeRadius(radius);
		}

		if (m_AnomalyAura)
		{
			m_AnomalyAura.ScaleParticleParamFromOriginal(EmitorParam.SIZE, scale);
		}
	}

	vector GetAbsValues(vector size[2])
	{
		vector result;
		result[0] = Math.AbsFloat(size[0][0]) + Math.AbsFloat(size[1][0]);
		result[1] = Math.AbsFloat(size[0][1]) + Math.AbsFloat(size[1][1]);
		result[2] = Math.AbsFloat(size[0][2]) + Math.AbsFloat(size[1][2]);
		return result;
	}

    void ~vfx_the_thing()
	{
		
        if (m_AnomalyAura) {
			m_AnomalyAura.Stop();
			//m_AnomalyAura.Delete();
		}

        if (m_Light) {
				m_Light.FadeOut();
			}

	}
	
	
}
#endif
modded class EVRStorm
{

    void EVRStorm()
    {

        if (m_BlowoutStaticLight) {
				m_BlowoutStaticLight.FadeOut(10);
			    }

    }

    override private void TeleportationSickness(PlayerBase player)
	{
		SymptomBase symptom = player.GetSymptomManager().QueueUpPrimarySymptom(SymptomIDs.SYMPTOM_VOMIT);
        if(symptom)
        {
            symptom.SetDuration(Math.RandomIntInclusive(4, 8));

            if (player.GetStatWater().Get() > EVRConstants.WATER_DRAIN_FROM_TELEPORTATION_SICKNESS) {
                player.GetStatWater().Add(-1 * EVRConstants.WATER_DRAIN_FROM_TELEPORTATION_SICKNESS);
            }
            
            if (player.GetStatEnergy().Get() > EVRConstants.ENERGY_DRAIN_FROM_TELEPORTATION_SICKNESS) {
                player.GetStatEnergy().Add(-1 * EVRConstants.ENERGY_DRAIN_FROM_TELEPORTATION_SICKNESS);
            }
        }
	}

	override vector GetRandomTeleportPosition(float x = 6500, float z = 6500, float radius = 6300)
	{				
		vector position;
		position[0] = Math.RandomInt(x - radius, x + radius);
		position[2] = Math.RandomInt(z - radius, z + radius);
		position[1] = GetGame().SurfaceY(position[0], position[2]) + 1;
		
		if (GetGame().SurfaceIsSea(position[0], position[2]) || GetGame().SurfaceIsPond(position[0], position[2])) {
			// try again
			EventDebug("Landed in water, trying again");
			return GetRandomTeleportPosition(x, z, radius); 
		}
		
		array<Object> position_objects = {};
		array<CargoBase> position_cargos = {};
		GetGame().GetObjectsAtPosition(position, 25, position_objects, position_cargos);
		if (position_objects.Count() > 0) {
			// try again
			EventDebug("Landed in object, trying again");
			return GetRandomTeleportPosition(x, z, radius);
		}
		
		return position;
	}

}