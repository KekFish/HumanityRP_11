enum HUMANITYRP_RPCS
{
    AMNEZJA_LOGS = 5723783
}

modded class DayZGame
{

    override bool OnInitialize()
	{
		
		//SetSyberiaName()

		ParticleList.PreloadParticles();
		
		RegisterProfilesOptions();
		SetHudBrightness(GetHUDBrightnessSetting());
		
		InitNotifications();
		m_Visited = new TStringArray;
		GetProfileStringList("SB_Visited", m_Visited);
		
		if (GetLoadState() == DayZLoadState.UNDEFINED)
		{
			string param;
			
			if (GetCLIParam("join", param))
			{
				JoinLaunch();
				#ifndef PLATFORM_PS4
				CreateTitleScreen();
				#endif
			}
			else if (GetCLIParam("connect", param))
			{
				ConnectLaunch();
			}
			// else if (GetCLIParam("mission", param))
			// {
			// 	//MissionLaunch();
			// }
			else if (GetCLIParam("party", param))
			{
				PartyLaunch();
			}
			else
			{
				MainMenuLaunch();
			}
			
			return true;
		}
		
		return false;
	}

}