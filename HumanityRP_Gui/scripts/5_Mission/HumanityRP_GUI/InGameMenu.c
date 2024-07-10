modded class InGameMenu extends UIScriptedMenu
{


	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Gui/layouts/in_game_menu.layout");
				
		m_ContinueButton			= layoutRoot.FindAnyWidget("continuebtn");
		m_SeparatorPanel			= layoutRoot.FindAnyWidget("separator_red");
		m_ExitButton				= layoutRoot.FindAnyWidget("exitbtn");
		m_RestartButton				= layoutRoot.FindAnyWidget("restartbtn");
		m_RespawnButton 			= layoutRoot.FindAnyWidget("respawn_button");
		m_RestartDeadRandomButton	= layoutRoot.FindAnyWidget("respawn_button_random");
		m_RestartDeadCustomButton	= layoutRoot.FindAnyWidget("respawn_button_custom");
		m_OptionsButton				= layoutRoot.FindAnyWidget("optionsbtn");
		m_ModdedWarning				= TextWidget.Cast(layoutRoot.FindAnyWidget("ModdedWarning"));
		//m_HintPanel					= new UiHintPanel(layoutRoot.FindAnyWidget("hint_frame"));
		m_ServerInfoPanel 			= layoutRoot.FindAnyWidget("server_info");
		m_ServerIP 					= TextWidget.Cast(layoutRoot.FindAnyWidget("server_ip"));
		m_ServerPort 				= TextWidget.Cast(layoutRoot.FindAnyWidget("server_port"));
		m_ServerName 				= TextWidget.Cast(layoutRoot.FindAnyWidget("server_name"));
		m_FavoriteImage 			= layoutRoot.FindAnyWidget("favorite_image");
		m_UnfavoriteImage 			= layoutRoot.FindAnyWidget("unfavorite_image");
		m_CopyInfoButton 			= layoutRoot.FindAnyWidget("copy_button");
		
		if (GetGame().IsMultiplayer())
		{
			ButtonSetText(m_RestartButton, "#main_menu_respawn");
		}
		else
		{
			ButtonSetText(m_RestartButton, "#main_menu_restart");
		}
		
		HudShow(false);
		SetGameVersion();
		SetServerInfoVisibility(SetServerInfo() && g_Game.GetProfileOption(EDayZProfilesOptions.SERVERINFO_DISPLAY));
		m_ModdedWarning.Show(g_Game.ReportModded());
		
		Mission mission = g_Game.GetMission();
		if (mission)
			mission.Pause();
		
		return layoutRoot;
	}
	
	override protected bool SetServerInfo()
	{
		if (GetGame().IsMultiplayer())
		{
			MenuData menu_data = g_Game.GetMenuData();
			GetServersResultRow info = OnlineServices.GetCurrentServerInfo();
			
			if (info)
			{
				m_ServerPort.SetText(info.m_HostPort.ToString());
				m_ServerIP.SetText(info.m_HostIp);
				m_ServerName.SetText(info.m_Name);
				//m_UnfavoriteImage.Show(info.m_Favorite);
				//m_FavoriteImage.Show(!info.m_Favorite);
				m_ServerInfoText = "" +  info.GetIpPort();
				
				return true;
			}
			//temporary, incomplete solution, OnlineServices.GetCurrentServerInfo() should be working!
			else if (menu_data && menu_data.GetLastPlayedCharacter() != GameConstants.DEFAULT_CHARACTER_MENU_ID)
			{
				int char_id = menu_data.GetLastPlayedCharacter();
				int port;
				string address,name;
				
				menu_data.GetLastServerAddress(char_id,address);
				port = menu_data.GetLastServerPort(char_id);
				menu_data.GetLastServerName(char_id,name);
				m_ServerPort.SetText(port.ToString());
				m_ServerIP.SetText(address);
				m_ServerName.SetText(name);
				m_ServerInfoText = "" + address + ":" + port;
				
				return true;
			}
			else
			{
				g_Game.RefreshCurrentServerInfo();
			}
		}
		return false;
	}
	
}
