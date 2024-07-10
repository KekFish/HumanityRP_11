modded class MainMenu
{
	protected MissionMainMenu		m_Mission;
	protected DayZIntroScenePC 		m_ScenePC;

	protected ButtonWidget          m_Play;
	protected ButtonWidget			m_ChooseServer;
	protected ButtonWidget			m_CustomizeCharacter;
	protected ButtonWidget			m_SettingsButton;
	protected ButtonWidget			m_Exit;
	protected ButtonWidget			m_www;
	protected ButtonWidget			m_Discord;
	protected ButtonWidget			m_Tiktok;

	protected TextWidget			m_PlayerName;
	protected TextWidget			m_Version;

	protected Widget				m_CharacterRotationFrame;

	protected Widget				m_Play;

	override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Gui/layouts/main_menu.layout");

		m_Play						= layoutRoot.FindAnyWidget("play");
		m_ChooseServer				= layoutRoot.FindAnyWidget("choose_server");
		m_CustomizeCharacter		= layoutRoot.FindAnyWidget("customize_character");
		m_SettingsButton			= layoutRoot.FindAnyWidget("settings");
		m_Exit						= layoutRoot.FindAnyWidget("exit");
		m_www						= ButtonWidget.Cast(layoutRoot.FindAnyWidget("www"));
		m_Discord					= ButtonWidget.Cast(layoutRoot.FindAnyWidget("discord"));
		m_Tiktok					= ButtonWidget.Cast(layoutRoot.FindAnyWidget("tiktok"));

		m_Version					= TextWidget.Cast(layoutRoot.FindAnyWidget("version"));
		m_ModdedWarning				= TextWidget.Cast(layoutRoot.FindAnyWidget("ModdedWarning"));
		m_CharacterRotationFrame	= layoutRoot.FindAnyWidget("character_rotation_frame");

		m_Mission					= MissionMainMenu.Cast(GetGame().GetMission());

		m_LastFocusedButton 		= m_Play;

		m_ScenePC					= m_Mission.GetIntroScenePC();

		if (m_ScenePC)
		{
			m_ScenePC.ResetIntroCamera();
		}

		m_PlayerName				= TextWidget.Cast(layoutRoot.FindAnyWidget("character_name_text"));

		string version;
		GetGame().GetVersion(version);
		m_Version.SetText("#main_menu_version" + " " + version);

		GetGame().GetUIManager().ScreenFadeOut(0);

		SetFocus(null);

		Refresh();

		GetDayZGame().GetBacklit().MainMenu_OnShow();

		g_Game.SetLoadState(DayZLoadState.MAIN_MENU_CONTROLLER_SELECT);

		return layoutRoot;
	}

	override void LoadMods()
	{

	}

	override void Refresh()
	{
		if (m_ScenePC && g_Game.GetGameState() == DayZGameState.MAIN_MENU)
			OnChangeCharacter();
	}

	override void OnChangeCharacter(bool create_character = true)
	{
		if (m_ScenePC && m_ScenePC.GetIntroCharacter())
		{
			int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
			if (create_character)
			{
				m_ScenePC.GetIntroCharacter().CreateNewCharacterById(charID);
			}
			m_PlayerName.SetText(m_ScenePC.GetIntroCharacter().GetCharacterNameById(charID));
			
			Widget w = m_CustomizeCharacter.FindAnyWidget(m_CustomizeCharacter.GetName() + "_label");
			
			if (w)
			{
				TextWidget text = TextWidget.Cast(w);
				
				if (m_ScenePC.GetIntroCharacter().IsDefaultCharacter())
				{
					text.SetText("#layout_main_menu_customize_char");
				}
				else
				{
					text.SetText("#layout_main_menu_rename");
				}
			}
			if (m_ScenePC.GetIntroCharacter().GetCharacterObj())
			{
				if (m_ScenePC.GetIntroCharacter().GetCharacterObj().IsMale())
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Male);
				else
					m_ScenePC.GetIntroCharacter().SetCharacterGender(ECharGender.Female);
			}
			
			//update character stats
			//m_Stats.UpdateStats();
		}
	}

	override bool OnMouseButtonDown(Widget w, int x, int y, int button)
	{
		if (w == m_CharacterRotationFrame)
		{
			if (m_ScenePC)
				m_ScenePC.CharacterRotationStart();
			return true;
		}

		return false;
	}

	override bool OnMouseButtonUp(Widget w, int x, int y, int button)
	{
		if (m_ScenePC)
			m_ScenePC.CharacterRotationStop();
		return false;
	}

	override bool OnMouseEnter(Widget w, int x, int y)
	{
		if (w == m_Play)
		{
			string ip = "";
			string name = "";
			int port = 0;
			 
			if (m_ScenePC && !m_ScenePC.GetIntroCharacter().IsDefaultCharacter())
			{
				int charID = m_ScenePC.GetIntroCharacter().GetCharacterID();
				m_ScenePC.GetIntroCharacter().GetLastPlayedServer(charID, ip, name, port);
				
				// m_LastPlayedTooltipName.SetText("#server_details_name " + name);
				// m_LastPlayedTooltipIP.SetText("#main_menu_IP " + ip);
				// m_LastPlayedTooltipPort.SetText("#main_menu_port " + port);
				
				// m_LastPlayedTooltipTimer.FadeIn(m_LastPlayedTooltip, 0.3, true);
			}
		}
		
		if (IsFocusable(w))
		{
			ColorHighlight(w);
			return true;
		}
		return false;
	}
	
	override bool OnMouseLeave(Widget w, Widget enterW, int x, int y)
	{
		if (w == m_Play)
		{
			// m_LastPlayedTooltipTimer.FadeOut(m_LastPlayedTooltip, 0.3, true);
		}
		
		if (IsFocusable(w))
		{
			ColorNormal(w);
			return true;
		}
		return false;
	}

	override bool OnClick(Widget w, int x, int y, int button)
	{
		if (button == MouseState.LEFT)
		{
			if (w == m_Play)
			{
				m_LastFocusedButton = m_Play;
				g_Game.ConnectFromServerBrowser( "193.25.252.75", 2302, "" );
				return true;
			}
			else if (w == m_ChooseServer)
			{
				m_LastFocusedButton = m_ChooseServer;
				OpenMenuServerBrowser();
				return true;
			}
			else if (w == m_CustomizeCharacter)
			{
				OpenMenuCustomizeCharacter();
				return true;
			}
			else if (w == m_MessageButton)
			{
				OpenCredits();
				return true;
			}
			else if (w == m_SettingsButton)
			{
				OpenSettings();
				return true;
			}
			else if (w == m_Exit)
			{
				Exit();
				return true;
			}
			else if (w == m_www)
			{
				GetGame().OpenURL("https://humanityrp.pl/");
				return true;
			}
			else if (w == m_Discord)
			{
				GetGame().OpenURL("https://discord.gg/humanityrp");
				return true;
			}
			else if (w == m_Tiktok)
			{
				GetGame().OpenURL("https://www.tiktok.com/@humanity_rp");
				return true;
			}
		}
		if (button == MouseState.MIDDLE)
		{
			if (w == m_Play)
			{
				m_LastFocusedButton = m_Play;
				g_Game.ConnectFromServerBrowser( "127.0.0.1", 2302, "" );
				return true;
			}
		}
		
		return false;
	}

	override bool IsFocusable(Widget w)
	{
		if (w)
		{
			if (w == m_Play || w == m_ChooseServer || w == m_CustomizeCharacter || w == m_SettingsButton || w == m_www || w == m_Discord || w == m_Tiktok);
			{
				return true;
			}
		}
		return false;
	}

	override void OnShow()
	{
		
		SetFocus(null);
		OnChangeCharacter(false);
		if (m_Version) m_Version.Show(true);
		if (m_ModdedWarning) m_ModdedWarning.Show(false);
		if (m_DlcFrame) m_DlcFrame.Show(false);
		if (m_ModdedWarning) m_ModdedWarning.Show(false);

		Widget modsDetailed = layoutRoot.FindAnyWidget("ModsDetailed");
		if (modsDetailed) modsDetailed.Show(false);

		Widget modsSimple = layoutRoot.FindAnyWidget("ModsSimple");
		if (modsSimple) modsSimple.Show(false);
	}

	override void Play()
	{
		return
	}
}