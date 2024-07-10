modded class InjuryAnimationHandler
{
	override eInjuryHandlerLevels GetInjuryLevel(float health)
	{
		eInjuryHandlerLevels result = super.GetInjuryLevel(health);
		eInjuryHandlerLevels sleepingState = CalculateSleepingState();
		eInjuryHandlerLevels waterEnergy = CalculateLowEnergyWaterState();
		eInjuryHandlerLevels zVirusSickness = CalculateVirusZState();
		
		if (InjuryLevelToValue(result) < InjuryLevelToValue(sleepingState))
		{
			result = sleepingState;
		}
		
		if (InjuryLevelToValue(result) < InjuryLevelToValue(waterEnergy))
		{
			result = waterEnergy;
		}
		
		if (InjuryLevelToValue(result) < InjuryLevelToValue(zVirusSickness))
		{
			result = zVirusSickness;
		}
		
		if (m_Player.GetSybStats().m_concussionHit && InjuryLevelToValue(result) < 2)
		{
			result = eInjuryHandlerLevels.DAMAGED;
		}
		
		return result;
	}
	
	private eInjuryHandlerLevels CalculateSleepingState()
	{
		if (m_Player.GetSleepingValue() < GetSyberiaConfig().m_sleepingLevel5)
		{
			return eInjuryHandlerLevels.RUINED;
		}
		
		if (m_Player.GetSleepingValue() < GetSyberiaConfig().m_sleepingLevel4)
		{
			return eInjuryHandlerLevels.DAMAGED;
		}
		
		return eInjuryHandlerLevels.PRISTINE;
	}
	
	private eInjuryHandlerLevels CalculateLowEnergyWaterState()
	{
		if (m_Player.GetStatEnergy().Get() <= PlayerConstants.SL_ENERGY_CRITICAL || m_Player.GetStatWater().Get() <= PlayerConstants.SL_WATER_CRITICAL)
		{
			return eInjuryHandlerLevels.RUINED;
		}
		
		if (m_Player.GetStatEnergy().Get() <= PlayerConstants.SL_ENERGY_LOW || m_Player.GetStatWater().Get() <= PlayerConstants.SL_WATER_LOW)
		{
			return eInjuryHandlerLevels.DAMAGED;
		}

		return eInjuryHandlerLevels.PRISTINE;
	}
	
	private int InjuryLevelToValue(eInjuryHandlerLevels level)
	{
		if (level == eInjuryHandlerLevels.PRISTINE)
		{
			return 0;
		}
		else if (level == eInjuryHandlerLevels.WORN)
		{
			return 1;
		}
		else if (level == eInjuryHandlerLevels.DAMAGED)
		{
			return 2;
		}
		else if (level == eInjuryHandlerLevels.BADLY_DAMAGED)
		{
			return 3;
		}
		else
		{
			return 4;
		}
	}
	
	private eInjuryHandlerLevels CalculateVirusZState()
	{
		if (m_Player.HasVisibleZVirus())
		{
			return eInjuryHandlerLevels.BADLY_DAMAGED;
		}
		
		return eInjuryHandlerLevels.PRISTINE;
	}
};