class EncumbranceMdfr: ModifierBase
{

	override void Init()
	{
		m_TrackActivatedTime = false;
		m_ID 					= HRP_eModifiers.MDF_ENCUMBRANCE;
		m_TickIntervalInactive 	= DEFAULT_TICK_TIME_INACTIVE;
		m_TickIntervalActive 	= DEFAULT_TICK_TIME_ACTIVE_SHORT;
	}	

	override bool ActivateCondition(PlayerBase player)
	{

		if( player.GetStaminaHandler().GetStaminaCap() <= 30) return true;

		return false;
	}

	override bool DeactivateCondition(PlayerBase player)
	{

		
		return !ActivateCondition(player);
	}

	override void OnTick(PlayerBase player, float deltaT)
	{	
		#ifdef SERVER
		player.AddMindDegradation(0.005, deltaT);
		player.AddSleepingBoost(deltaT, -1.5);
		#endif
		

	}

	
	override void OnReconnect(PlayerBase player)
	{
		OnActivate(player);
	}
	
	override void OnActivate(PlayerBase player)
	{
		player.SetEncumbered(true);
	}	
	
	override void OnDeactivate(PlayerBase player)
	{
		player.SetEncumbered(false);
	}
	
	
	
};
