#ifdef DZM_VPPAdminToolsScripts
modded class MenuPlayerManager extends AdminHudSubMenu
{	
	//Stats Sliders
	private SliderWidget m_SliderCuts;
	private SliderWidget m_SliderBulletWound;
	private SliderWidget m_SliderZombieBite;
	private SliderWidget m_SliderDeepWound;
    private SliderWidget m_SliderMind;
    private SliderWidget m_SliderSleep;

	private SliderWidget m_SliderHeadPain;
	private SliderWidget m_SliderTorsoPain;
	private SliderWidget m_SliderArmsPain;
	private SliderWidget m_SliderLegsPain;
	
	private ButtonWidget m_BtnApplyCuts;
	private ButtonWidget m_BtnApplyBulletWound;
	private ButtonWidget m_BtnApplyZombieBite;
	private ButtonWidget m_BtnApplyDeepWound;
    private ButtonWidget m_BtnApplyMind;
    private ButtonWidget m_BtnApplySleep;

	private ButtonWidget m_BtnApplyHeadPain;
	private ButtonWidget m_BtnApplyTorsoPain;
	private ButtonWidget m_BtnApplyArmsPain;
	private ButtonWidget m_BtnApplyLegsPain;
	//-------------
	
	
	override void OnCreate(Widget RootW)
	{
		super.OnCreate(RootW);
		
		
		//Stats Sliders
		m_SliderCuts  = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderCuts"));
		m_SliderBulletWound	= SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderBulletWound"));
		m_SliderZombieBite	= SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderZombieBite"));
		m_SliderDeepWound	= SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderDeepWound"));
        m_SliderMind = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderMind"));
		m_SliderSleep = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderSleep"));

		m_SliderHeadPain = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderHeadPain"));
		m_SliderTorsoPain = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderTorsoPain"));
		m_SliderArmsPain = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderArmsPain"));
		m_SliderLegsPain = SliderWidget.Cast(M_SUB_WIDGET.FindAnyWidget("SliderLegsPain"));

		
		m_BtnApplyCuts  = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyCuts"));
		m_BtnApplyBulletWound   = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyBulletWound"));
		m_BtnApplyZombieBite   = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyZombieBite"));
		m_BtnApplyDeepWound   = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyDeepWound"));
        m_BtnApplyMind  = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyMind"));
		m_BtnApplySleep  = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplySleep"));

		m_BtnApplyHeadPain = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyHeadPain"));
		m_BtnApplyTorsoPain = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyTorsoPain"));
		m_BtnApplyArmsPain = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyArmsPain"));
		m_BtnApplyLegsPain = ButtonWidget.Cast(M_SUB_WIDGET.FindAnyWidget("BtnApplyLegsPain"));

		//-------------
		
	}
	
	
	
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
		
		
		array<ref VPPPlayerEntry> selectedPlayers = GetSelectedPlayers();
		int pCount1 = selectedPlayers.Count();

		//Sliders apply btns
		m_BtnApplyCuts.Enable(pCount1 >= 1);
		m_BtnApplyBulletWound.Enable(pCount1 >= 1);
		m_BtnApplyZombieBite.Enable(pCount1 >= 1);
		m_BtnApplyDeepWound.Enable(pCount1 >= 1);
        m_BtnApplyMind.Enable(pCount1 >= 1);
		m_BtnApplySleep.Enable(pCount1 >= 1);
		m_BtnApplyHeadPain.Enable(pCount1 >= 1);
		m_BtnApplyTorsoPain.Enable(pCount1 >= 1);
		m_BtnApplyArmsPain.Enable(pCount1 >= 1);
		m_BtnApplyLegsPain.Enable(pCount1 >= 1);

	}
	
	override bool OnClick(Widget w, int x, int y, int button)
	{
		super.OnClick(w, x, y, button);
		
		switch(w)
		{	
			//Sliders apply buttons
			case m_BtnApplyCuts:
			UpdateStat("Cuts");
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			break;
			
			case m_BtnApplyBulletWound:
			UpdateStat("BulletWound");
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			break;
			
			case m_BtnApplyZombieBite:
			UpdateStat("ZombieBite");
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			break;
			
			case m_BtnApplyDeepWound:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("DeepWound");
			break;

            case m_BtnApplyMind:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("Mind");
			break;

            case m_BtnApplySleep:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("Sleep");
			break;

			case m_BtnApplyHeadPain:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("HeadPain");
			break;

			case m_BtnApplyTorsoPain:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("TorsoPain");
			break;

			case m_BtnApplyArmsPain:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("ArmsPain");
			break;

			case m_BtnApplyLegsPain:
			GetVPPUIManager().DisplayNotification(string.Format("Zmieniono statystyki dla" + " (%1) player(s)",GetSelectedPlayers().Count().ToString()));
			UpdateStat("LegsPain");
			break;
		}
		return false;
	}

	override void HandlePlayerStats( CallType type, ParamsReadContext ctx, PlayerIdentity sender, Object target )
	{
		Param6<ref PlayerStatsData, float, int, int, ref SyberiaPlayerStats, ref PlayerPainLevels> data;
		if(!ctx.Read(data)) return;
		
		PlayerStatsData statsData = data.param1;
		if( type == CallType.Client )
		{
			m_PlayerStats.Insert(new VPPPlayerStats(m_GridPlayerInfo, statsData.GetMap()));
			
			array<ref VPPPlayerEntry> selectedPlayers = GetSelectedPlayers();
			if (selectedPlayers.Count() == 1)
			{
				foreach(VPPPlayerStats stats : m_PlayerStats)
				{
					if (stats.GetID() == selectedPlayers.Get(0).GetID())
					{
						m_SliderBlood.SetCurrent(stats.GetStatValue("Blood").ToFloat());
						m_SliderHealth.SetCurrent(stats.GetStatValue("Health").ToFloat());
						m_SliderShock.SetCurrent(stats.GetStatValue("Shock").ToFloat());
						m_SliderWater.SetCurrent(stats.GetStatValue("Water").ToFloat());
						m_SliderEnergy.SetCurrent(stats.GetStatValue("Energy").ToFloat());
						m_SliderCuts.SetCurrent(data.param4);
						m_SliderDeepWound.SetCurrent(data.param5.m_knifeHits);
						m_SliderBulletWound.SetCurrent(data.param5.m_bulletHits);
						m_SliderZombieBite.SetCurrent(data.param5.m_zombieBite);
						m_SliderMind.SetCurrent(data.param2);
						m_SliderSleep.SetCurrent(data.param3);
						m_SliderHeadPain.SetCurrent(data.param6.HeadPainLevel);
						m_SliderTorsoPain.SetCurrent(data.param6.TorsoPainLevel);
						m_SliderArmsPain.SetCurrent(data.param6.ArmsPainLevel);
						m_SliderLegsPain.SetCurrent(data.param6.LegsPainLevel);
						
					}
				}
			}
		}
	}

	
	override private void UpdateStat(string statType)
	{
		array<ref VPPPlayerEntry> selectedPlayers = GetSelectedPlayers();
		if (selectedPlayers == null || selectedPlayers.Count() < 1) return;
		
		foreach(VPPPlayerEntry entry : selectedPlayers)
		{
			float stateNewValue;
			switch(statType)
			{
				case "Blood":
				stateNewValue = m_SliderBlood.GetCurrent();
				break;
				
				case "Health":
				stateNewValue = m_SliderHealth.GetCurrent();
				break;
				
				case "Shock":
				stateNewValue = m_SliderShock.GetCurrent();
				break;
				
				case "Water":
				stateNewValue = m_SliderWater.GetCurrent();
				break;
				
				case "Energy":
				stateNewValue = m_SliderEnergy.GetCurrent();
				break;

				case "Cuts":
				stateNewValue = m_SliderCuts.GetCurrent();
				break;

				case "DeepWound":
				stateNewValue = m_SliderDeepWound.GetCurrent();
				break;

				case "BulletWound":
				stateNewValue = m_SliderBulletWound.GetCurrent();
				break;

				case "ZombieBite":
				stateNewValue = m_SliderZombieBite.GetCurrent();
				break;

				case "Mind":
				stateNewValue = m_SliderMind.GetCurrent();
				break;

				case "Sleep":
				stateNewValue = m_SliderSleep.GetCurrent();
				break;

				case "HeadPain":
				stateNewValue = m_SliderHeadPain.GetCurrent();
				break;

				case "TorsoPain":
				stateNewValue = m_SliderTorsoPain.GetCurrent();
				break;

				case "ArmsPain":
				stateNewValue = m_SliderArmsPain.GetCurrent();
				break;

				case "LegsPain":
				stateNewValue = m_SliderLegsPain.GetCurrent();
				break;
			}
			GetRPCManager().VSendRPC("RPC_PlayerManager", "SetPlayerStats", new Param3<float,string,string>(stateNewValue,entry.GetID(),statType), true); //stat level, player id, stat type
		}
	}

	
	
	
}
#endif