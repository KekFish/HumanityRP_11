class ExtremeHeat: NamWeatherEvent
{

    protected float m_TempDrop;
	protected int m_PPE_ExtremeHeat;

	override void EventInit()
	{
		super.EventInit();

		if (GetGame().IsServer())
		{
			m_InitPhaseLength = 100.0;
			m_MidPhaseLength = Math.RandomFloat(800, 1200);
			m_EndPhaseLength = m_InitPhaseLength;
			m_TempDrop = Math.RandomFloat(20.0, 30.0);
			m_NeededOvercast = 0.15;
		}

		if (GetGame().IsClient())
		{		
			m_PPE_ExtremeHeat = PPERequesterBank.GetRequester( PPERequester_ExtremeHeat ).GetRequesterIDX();
		}
	}
	
	override void InitPhaseServer()
	{
		EventInfo("init: " + m_InitPhaseLength + " (sec), mid: " + m_MidPhaseLength + " (sec), end: " + m_EndPhaseLength + " (sec), TempRise: " + m_TempDrop + " (C)");

		// add effect to WorldData
		GetGame().GetMission().GetWorldData().SetTemperatureEvent(m_TempDrop);
	}

	override void EndPhaseClient(float phase_time)
	{
		if ( m_PPE_ExtremeHeat != -1 )
			PPERequesterBank.GetRequester( m_PPE_ExtremeHeat ).Stop( new Param1<bool>( true ) );
	}

	override void UpdateClient()
	{
		super.UpdateClient();
		
		// Add additional feedback for the player to see if ExtremeCold is active
		PlayerBase player;
		if (!Class.CastTo(player, GetGame().GetPlayer())) {
			return;
		}
		// Particle eff = ParticleManager.GetInstance().PlayInWorld(ParticleList.BREATH_VAPOUR_HEAVY, "-0.03 0.15 0");
		// if (!eff) {
		// 	return;
		// }
		// player.AddChild(eff, player.GetBoneIndexByName("Head"));	
		
		// check if the ppe colorization is active 
		if ( m_PPE_ExtremeHeat != -1 )
		{
			PPERequesterBase ppeRequester;
			Class.CastTo( ppeRequester, PPERequesterBank.GetRequester( m_PPE_ExtremeHeat ) );
			if ( !ppeRequester.IsRequesterRunning() )
			{
				ppeRequester.Start();
			}
		}
	}
		
	override void OnEventEndServer()
	{	
		// remove effect from WorldData
		GetGame().GetMission().GetWorldData().SetTemperatureEvent(0.0);
	}

	override TTypenameArray GetDisallowedEvents()
	{
		return { LantiaLink, Rainfall, LightRainfall, HeavyRainfall };
	}

	override float GetClientTick()
	{
		return 1.5;
	}

	override float GetFogTarget()
	{
		return 0.0;
	}
	
	override float GetRainTarget()
	{
		return 0.0;
	}
	
	override float GetOvercastTarget()
	{
		return Math.RandomFloat(0.0, 0.15);
	}


}