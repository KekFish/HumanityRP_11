
class LightRainfall: NamWeatherEvent
{
	override void EventInit()
	{
		super.EventInit();

		if (GetGame().IsServer())
		{
			m_InitPhaseLength = 60.0;
			m_MidPhaseLength = Math.RandomFloat(900, 1200);
			m_EndPhaseLength = m_InitPhaseLength;
			m_windRelMinTarget = 0.0;
			m_windRelMaxTarget = 0.0;
		}
    }

	override void InitPhaseServer()
	{
		EventInfo("init: " + m_InitPhaseLength + " (sec), mid: " + m_MidPhaseLength + " (sec), end: " + m_EndPhaseLength + " (sec)");

		// backup previous weather
		m_wObject.GetWindFunctionParams(m_windRelMin, m_windRelMax, m_windChangeSpeed);

		// set event (init) weather
		m_wObject.SetWindFunctionParams(m_windRelMinTarget, m_windRelMaxTarget, m_windChangeSpeed);
		
		super.InitPhaseServer();
	}

	override int GetEventCooldown()
	{
		return 5400;
	}

	override void MidPhaseServer()
	{
		// add effect to WorldData - why does it even exist here?
		GetGame().GetMission().GetWorldData().SetWetnessEvent(GetRainTarget_Delay());
		
		RequestWeatherChange(NamWeatherChangeType.RAIN, GetRainTarget_Delay(), 15, m_MidPhaseLength);
		
		super.MidPhaseServer();
	}

	override void EndPhaseServer()
	{
		m_wObject.SetWindFunctionParams(m_windRelMinTarget, m_windRelMaxTarget, m_windChangeSpeed);

		// add effect to WorldData - why does it even exist here?
		GetGame().GetMission().GetWorldData().SetWetnessEvent(0.0);
		
		super.EndPhaseServer();
	}

	override void OnEventEndServer()
	{
		m_wObject.SetWindFunctionParams(m_windRelMin, m_windRelMax, m_windChangeSpeed);
		super.OnEventEndServer();
	}
	
	override TTypenameArray GetDisallowedEvents()
	{
		return { ExtremeHeat, EVRStorm, HeavyRainfall, Rainfall};
	}
	
	override float GetFogTarget()
	{
		return Math.RandomFloat(0.0, 0.2);
	}
	
	float GetRainTarget_Delay()
	{
		return Math.RandomFloat(0.1, 0.25);
	}
	
	override float GetOvercastTarget()
	{
		return Math.RandomFloat(0.5, 0.65);
	}
}
class Rainfall: NamWeatherEvent
{

	override void EventInit()
	{
		super.EventInit();

		if (GetGame().IsServer())
		{
			m_InitPhaseLength = 60.0;
			m_MidPhaseLength = Math.RandomFloat(900, 1200);
			m_EndPhaseLength = m_InitPhaseLength;
			m_windRelMinTarget = 0.0;
			m_windRelMaxTarget = 0.0;
		}
    }

	override void InitPhaseServer()
	{
		EventInfo("init: " + m_InitPhaseLength + " (sec), mid: " + m_MidPhaseLength + " (sec), end: " + m_EndPhaseLength + " (sec)");

		// backup previous weather
		m_wObject.GetWindFunctionParams(m_windRelMin, m_windRelMax, m_windChangeSpeed);

		// set event (init) weather
		m_wObject.SetWindFunctionParams(m_windRelMinTarget, m_windRelMaxTarget, m_windChangeSpeed);
		
		super.InitPhaseServer();
	}

	override void MidPhaseServer()
	{
		// add effect to WorldData - why does it even exist here?
		GetGame().GetMission().GetWorldData().SetWetnessEvent(GetRainTarget_Delay());
		
		RequestWeatherChange(NamWeatherChangeType.RAIN, GetRainTarget_Delay(), 15, m_MidPhaseLength);
		
		super.MidPhaseServer();
	}

	override void EndPhaseServer()
	{
		m_wObject.SetWindFunctionParams(m_windRelMinTarget, m_windRelMaxTarget, m_windChangeSpeed);

		// add effect to WorldData - why does it even exist here?
		GetGame().GetMission().GetWorldData().SetWetnessEvent(0.0);
		
		super.EndPhaseServer();
	}

	override void OnEventEndServer()
	{
		m_wObject.SetWindFunctionParams(m_windRelMin, m_windRelMax, m_windChangeSpeed);
		super.OnEventEndServer();
	}

	override int GetEventCooldown()
	{
		return 5400;
	}
	
	override TTypenameArray GetDisallowedEvents()
	{
		return { ExtremeHeat, EVRStorm, HeavyRainfall, LightRainfall};
	}
	
	override float GetFogTarget()
	{
		return Math.RandomFloat(0.0, 0.2);
	}
	
	float GetRainTarget_Delay()
	{
		return Math.RandomFloat(0.25, 0.5);
	}
	
	override float GetOvercastTarget()
	{
		return Math.RandomFloat(0.65, 0.75);
	}

}
class HeavyRainfall: NamWeatherEvent
{

	override void EventInit()
	{
		super.EventInit();

		if (GetGame().IsServer())
		{
			m_InitPhaseLength = 60.0;
			m_MidPhaseLength = Math.RandomFloat(900, 1200);
			m_EndPhaseLength = m_InitPhaseLength;
			m_windRelMinTarget = 0.0;
			m_windRelMaxTarget = 0.0;
		}
    }

	override void InitPhaseServer()
	{
		EventInfo("init: " + m_InitPhaseLength + " (sec), mid: " + m_MidPhaseLength + " (sec), end: " + m_EndPhaseLength + " (sec)");

		// backup previous weather
		m_wObject.GetWindFunctionParams(m_windRelMin, m_windRelMax, m_windChangeSpeed);

		// set event (init) weather
		m_wObject.SetWindFunctionParams(m_windRelMinTarget, m_windRelMaxTarget, m_windChangeSpeed);
		
		super.InitPhaseServer();
	}

	override void MidPhaseServer()
	{
		// add effect to WorldData - why does it even exist here?
		GetGame().GetMission().GetWorldData().SetWetnessEvent(GetRainTarget_Delay());
		
		RequestWeatherChange(NamWeatherChangeType.RAIN, GetRainTarget_Delay(), 15, m_MidPhaseLength);
		
		super.MidPhaseServer();
	}

	override int GetEventCooldown()
	{
		return 5400;
	}

	override void EndPhaseServer()
	{
		m_wObject.SetWindFunctionParams(m_windRelMinTarget, m_windRelMaxTarget, m_windChangeSpeed);

		// add effect to WorldData - why does it even exist here?
		GetGame().GetMission().GetWorldData().SetWetnessEvent(0.0);
		
		super.EndPhaseServer();
	}

	override void OnEventEndServer()
	{
		m_wObject.SetWindFunctionParams(m_windRelMin, m_windRelMax, m_windChangeSpeed);
		super.OnEventEndServer();
	}
	
	override TTypenameArray GetDisallowedEvents()
	{
		return { ExtremeHeat, EVRStorm, Rainfall, LightRainfall};
	}
	
	override float GetFogTarget()
	{
		return Math.RandomFloat(0.0, 0.5);
	}
	
	float GetRainTarget_Delay()
	{
		return Math.RandomFloat(0.5, 1.0);
	}
	
	override float GetOvercastTarget()
	{
		return Math.RandomFloat(0.75, 1.0);
	}

}