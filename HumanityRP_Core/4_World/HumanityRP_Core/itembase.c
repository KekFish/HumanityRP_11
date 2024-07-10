modded class ItemBase
{

    bool	m_IsHeated;
    protected Particle m_HeatedParticles;


    override void SetActions()
	{
		super.SetActions();		
		AddAction(ActionReadBook_M);
        AddAction(ActionHeatItem);
	}

    bool CanBeHeated()
    {

        return false;

    }

    override void InitItemVariables()
	{
        super.InitItemVariables();
        m_IsHeated = false;
        RegisterNetSyncVariableBool("m_IsHeated");

    }



    void UpdateParticles_Heat()
	{
		
		if ( GetGame() && GetGame().IsClient() || !GetGame().IsMultiplayer() )
		{
			if ( m_IsHeated )
			{
				m_HeatedParticles = ParticleManager.GetInstance().PlayOnObject( ParticleList.COOKING_BOILING_DONE, this );
			} 
			else if ( !m_IsHeated && m_HeatedParticles )
			{
				m_HeatedParticles.Stop();

			}
		}
	}

    override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		

		if( CanBeHeated() )
		{
		UpdateParticles_Heat();
		};

	}

    

	override void OnItemLocationChanged( EntityAI old_owner, EntityAI new_owner )
    {
        super.OnItemLocationChanged(old_owner, new_owner);

        if (old_owner != NULL && new_owner == NULL)
        {
            Man player = old_owner.GetHierarchyRootPlayer();
            if (player != NULL && vector.Distance(player.GetPosition(), GetPosition()) > 2)
            {
                SetPosition(old_owner.GetPosition());
            }
        }
    }

}

modded class Rag
{
    override float GetInfectionChance(int system = 0, Param param = null)
	{
		if (m_Cleanness == 1)
			return 0;

		return 1.0;
	}
}
