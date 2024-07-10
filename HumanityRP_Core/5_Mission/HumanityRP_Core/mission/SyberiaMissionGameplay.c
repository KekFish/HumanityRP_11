modded class MissionGameplay
{
	private ref WatermarkHandler m_watermarkHandler;
	ref Widget m_AdditionHudRootWidget = null;
	ref SyberiaAdditionalHud m_SyberiaAdditionalHud = null;
	ref array<int> m_pressedKeys;
	float m_toxicZoneUpdateTimer;
	bool m_isPveIntruderLast;
	
	override void OnMissionStart()
	{
		SybLog("MissionGameplay OnMissionStart");
		super.OnMissionStart();
		m_pressedKeys = new array<int>;
		m_toxicZoneUpdateTimer = 0;
		m_isPveIntruderLast = false;
				
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CONCUSSION).Start();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_OVERDOSE).Start();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PAIN).Start();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PSI).Start();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_RADIATION).Start();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_SLEEPING).Start();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CATEYES).Start();
	}
	
	override void OnMissionFinish()
	{
		SybLog("MissionGameplay OnMissionStart");
		super.OnMissionFinish();
		
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CONCUSSION).Stop();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_OVERDOSE).Stop();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PAIN).Stop();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PSI).Stop();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_RADIATION).Stop();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_SLEEPING).Stop();
		PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CATEYES).Stop();
		
		delete m_AdditionHudRootWidget;
		delete m_SyberiaAdditionalHud;
		delete m_pressedKeys;
	
	}
	
	override void OnInit()
	{
		super.OnInit();
		
		m_watermarkHandler = new WatermarkHandler();
		
		if (!m_AdditionHudRootWidget)
		{
			m_AdditionHudRootWidget = GetGame().GetWorkspace().CreateWidgets("SyberiaScripts/layout/AdditionalHud.layout");
			m_AdditionHudRootWidget.Show(false);
			
			if ( !m_SyberiaAdditionalHud )
			{
				ref Widget actionBlocker = m_AdditionHudRootWidget.FindAnyWidget("ActionBlocker");
				m_AdditionHudRootWidget.RemoveChild(actionBlocker);
								
				ref MultilineTextWidget screenInfoWidget = MultilineTextWidget.Cast( m_AdditionHudRootWidget.FindAnyWidget("ScreenInfoWidget") );
				m_AdditionHudRootWidget.RemoveChild(screenInfoWidget);
				
				m_SyberiaAdditionalHud = new SyberiaAdditionalHud(m_HudRootWidget, actionBlocker, screenInfoWidget);
				m_SyberiaAdditionalHud.Init();		
			}
			
			if (m_Hud)
			{
				ref Widget notifications = m_AdditionHudRootWidget.FindAnyWidget("Notifications");				
				m_Hud.InitNotifierWidget(NTFKEY_SLEEPING, notifications, "Sleeping", 1);
				m_Hud.InitNotifierWidget(NTFKEY_MINDSTATE, notifications, "MindState", 2);
				
				ref Widget badgets = m_AdditionHudRootWidget.FindAnyWidget("Badgets");
				m_Hud.InitBadgetWidget(NTFKEY_BULLETHIT, badgets, "BulletHit");
				m_Hud.InitBadgetWidget(NTFKEY_KNIFEHIT, badgets, "KnifeHit");
				m_Hud.InitBadgetWidget(NTFKEY_HEMATOMA, badgets, "Hematoma");
				m_Hud.InitBadgetWidget(NTFKEY_ZOMBIEBITE, badgets, "ZombieBite");
				m_Hud.InitBadgetWidget(NTFKEY_CONCUSSION, badgets, "Concussion");
				m_Hud.InitBadgetWidget(NTFKEY_ZVIRUS, badgets, "ZVirus");
				m_Hud.InitBadgetWidget(NTFKEY_BANDAGE1, badgets, "Bandage1");
				m_Hud.InitBadgetWidget(NTFKEY_BANDAGE2, badgets, "Bandage2");				
				m_Hud.InitBadgetWidget(NTFKEY_HEMOSTATIC, badgets, "Hemostatic");
				m_Hud.InitBadgetWidget(NTFKEY_HEMATOPOIESIS, badgets, "Hematopoiesis");
				m_Hud.InitBadgetWidget(NTFKEY_ENCUMBRANCE, badgets, "Encumbrance");

			}
		}
		
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_SCREEN_MESSAGE, this, "OnScreenMessageRpc");
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_SYNC_TOXIC_ZONES, this, "OnSyncToxicZone");
	}
	
	override void OnUpdate(float timeslice)
	{
		super.OnUpdate(timeslice);
				
		PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
		if (player && player.GetSybStats())
		{
			
			UIScriptedMenu menu = m_UIManager.GetMenu();
			
			if (m_SyberiaAdditionalHud && m_LifeState == EPlayerStates.ALIVE && !player.IsUnconscious() )
			{
				m_SyberiaAdditionalHud.Refresh(timeslice);	
			}
			
			if (m_Hud)
			{
				m_Hud.DisplayNotifier(NTFKEY_SLEEPING, player.GetSleepingTendency(), player.GetSleepingState());
				m_Hud.DisplayNotifier(NTFKEY_MINDSTATE, player.GetMindStateTendency(), player.GetMindState());
				
				m_Hud.DisplayBadge(NTFKEY_BULLETHIT, player.GetSybStats().m_bulletHits);
				m_Hud.DisplayBadge(NTFKEY_KNIFEHIT, player.GetSybStats().m_knifeHits);
				m_Hud.DisplayBadge(NTFKEY_HEMATOMA, player.GetSybStats().m_hematomaHits);
				m_Hud.DisplayBadge(NTFKEY_ZOMBIEBITE, player.GetSybStats().m_zombieBite);
				m_Hud.DisplayBadge(NTFKEY_CONCUSSION, player.GetSybStats().m_concussionHit);
				//m_Hud.DisplayBadge(NTFKEY_PAIN, player.GetCurrentPainLevel());
				//m_Hud.DisplayBadge(NTFKEY_PAINKILLER, player.GetSybStats().m_painkillerEffect);
				//m_Hud.DisplayBadge(NTFKEY_ANTIBIOTIC, player.GetSybStats().m_antibioticsLevel);
				//m_Hud.DisplayBadge(NTFKEY_STOMATCHHEAL, player.GetSybStats().m_stomatchhealLevel);
				//m_Hud.DisplayBadge(NTFKEY_SEPSIS, player.HasVisibleSepsis());
				//m_Hud.DisplayBadge(NTFKEY_ZVIRUS, player.HasVisibleZVirus());
				m_Hud.DisplayBadge(NTFKEY_BANDAGE1, player.GetSybStats().m_bulletBandage1 + player.GetSybStats().m_knifeBandage1);
				m_Hud.DisplayBadge(NTFKEY_BANDAGE2, player.GetSybStats().m_bulletBandage2 + player.GetSybStats().m_knifeBandage2);
				//m_Hud.DisplayBadge(NTFKEY_HEMOSTATIC, player.GetSybStats().m_bloodHemostaticEffect);
				//m_Hud.DisplayBadge(NTFKEY_HEMATOPOIESIS, player.GetSybStats().m_hematopoiesisEffect);
				//m_Hud.DisplayBadge(NTFKEY_USESALVE, player.GetSybStats().m_salveEffect);
				//m_Hud.DisplayBadge(NTFKEY_ADRENALIN, player.GetSybStats().m_adrenalinEffect);
				//m_Hud.DisplayBadge(NTFKEY_OVERDOSED, player.GetSybStats().m_overdosedLevel);
				//m_Hud.DisplayBadge(NTFKEY_INFLUENZA, player.GetSybStats().m_influenzaLevel);
				//m_Hud.DisplayBadge(NTFKEY_STOMATCHPOISONING, player.GetSybStats().m_stomatchpoisonLevel);
				//m_Hud.DisplayBadge(NTFKEY_RADIATIONSICKNESS, player.IsRadiated);
				//m_Hud.DisplayBadge(NTFKEY_RADIOPROTECTION, player.GetRadioprotectionLevel());
				//m_Hud.DisplayBadge(NTFKEY_DISINFECTED, player.HasDisinfectedHands());
				//m_Hud.DisplayBadge(NTFKEY_ANTIDEPRESANT, player.GetAntidepresantLevel());
				m_Hud.DisplayBadge(NTFKEY_ENCUMBRANCE, player.IsEncumbered);
				//m_Hud.DisplayBadge(NTFKEY_HEALING, player.GetAntidepresantLevel()|| player.GetSybStats().m_adrenalinEffect || player.GetSybStats().m_salveEffect || player.GetSybStats().m_painkillerEffect || player.GetSybStats().m_antibioticsLevel || player.GetSybStats().m_stomatchhealLevel || player.GetSybStats().m_bloodHemostaticEffect || player.GetSybStats().m_hematopoiesisEffect );
				m_Hud.DisplayBadge(NTFKEY_CONTAMINATEDAREA, player.IsContaminated);
				//m_Hud.DisplayBadge(NTFKEY_SICK, player.IsContaminated || player.GetSybStats().m_stomatchpoisonLevel || player.GetSybStats().m_influenzaLevel || player.GetSybStats().m_overdosedLevel || player.HasVisibleZVirus() || player.HasVisibleSepsis());

			}
						
			OnUpdateAdvMedicineGUI(player, timeslice);
			OnUpdateMindstateGUI(player, timeslice);
			OnUpdatePveIntruderState(player, timeslice);
			
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CONCUSSION).SetRequesterUpdating(true);
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_OVERDOSE).SetRequesterUpdating(true);
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PAIN).SetRequesterUpdating(true);
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PSI).SetRequesterUpdating(true);
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_RADIATION).SetRequesterUpdating(true);
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_SLEEPING).SetRequesterUpdating(true);
			PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CATEYES).SetRequesterUpdating(true);
		}
		
		if (!player || !player.IsAlive())
		{
			if (m_HudRootWidget)
			{
				m_HudRootWidget.Show(false);
			}
		}
	}
	
	private void OnUpdateAdvMedicineGUI(PlayerBase player, float deltaTime)
	{		
		
		

		
		float concussionEffect = Math.Clamp(((int)player.GetSybStats().m_concussionHit) * 0.1, 0, 0.1);
		PPERequester_SybConcussion.Cast(PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_CONCUSSION)).SetConcussionEffect(concussionEffect);
		
		SyberiaSleepingLevel sleepingLevel = player.GetSleepingProcessLevel();
		float sleepingValue = Math.Clamp((int)sleepingLevel, 0, 1);
		if (sleepingValue < 0.8 && player.GetSleepingValue() < 1)
		{
			sleepingValue = 0.8;
		}
		
		PPERequester_SybSleeping.Cast(PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_SLEEPING)).SetSleepingEffect(sleepingValue);	
		PPERequester_SybPSI.Cast(PPERequesterBank.GetRequester(PPERequesterBank.REQ_SYB_PSI)).SetPsiEffect(player.IsInsidePsiZone());
		
		// if (sleepingLevel == SyberiaSleepingLevel.SYBSL_ENERGED)
		// {
		// 	m_SyberiaAdditionalHud.ShowScreenMessage("#syb_nosleep_energed", 2);
		// }
		if (sleepingLevel == SyberiaSleepingLevel.SYBSL_SICK)
		{
			m_SyberiaAdditionalHud.ShowScreenMessage("#syb_nosleep_sick", 2);
		}
		else if (sleepingLevel == SyberiaSleepingLevel.SYBSL_COLD)
		{
			m_SyberiaAdditionalHud.ShowScreenMessage("#syb_nosleep_cold", 2);
		}
		else if (sleepingLevel == SyberiaSleepingLevel.SYBSL_HOT)
		{
			m_SyberiaAdditionalHud.ShowScreenMessage("#syb_nosleep_hot", 2);
		}
	}
	
	private void OnUpdateMindstateGUI(PlayerBase player, float deltaTime)
	{
		if (player.GetMindStateValue() < GetSyberiaConfig().m_mindstateLevel4)
		{
			if (Math.RandomFloat01() < deltaTime * 0.05)
			{
				int action = Math.RandomInt(0, 8);
				if (action == 0)
				{
					Weapon_Base weapon;
					WeaponEventBase weapon_event = new WeaponEventTrigger;
					if ( Weapon_Base.CastTo(weapon, player.GetItemInHands()) )
					{
						weapon.ProcessWeaponEvent(weapon_event);
					}
				}
				else if (action == 1)
				{
					if (player.GetEmoteManager().CanPlayEmote(EmoteConstants.ID_EMOTE_SUICIDE))
					{
						player.GetEmoteManager().CreateEmoteCBFromMenu(EmoteConstants.ID_EMOTE_SUICIDE);
					}
				}
				else if ( player.GetEmoteManager().IsPlayerSleeping() )
				{


				}
				else
				{
					int emotesCount = player.GetEmoteManager().GetTotalEmotesCount();
					int emoteId = Math.RandomInt(0, emotesCount);
					int emoteKey = player.GetEmoteManager().GetEmoteKeyById(emoteId);
					if (player.GetEmoteManager().CanPlayEmote(emoteKey))
					{
						player.GetEmoteManager().CreateEmoteCBFromMenu(emoteKey);
					}
				}				 
			}
		}
	}
	
	private void OnUpdatePveIntruderState(PlayerBase player, float deltaTime)
	{
		if (player.GetSybStats().m_isPveIntruder && !m_isPveIntruderLast)
		{
			m_isPveIntruderLast = true;
			ShowScreenMessage("#syb_pve_intrude", 10);
		}
		
		if (!player.GetSybStats().m_isPveIntruder && m_isPveIntruderLast)
		{
			m_isPveIntruderLast = false;
		}
	}
	
	override int GetRespawnModeClient()
	{
		return GameConstants.RESPAWN_MODE_RANDOM;
	}
	
	override void OnKeyPress(int key)
	{
		super.OnKeyPress(key);
		
		if (m_pressedKeys.Find(key) == -1)
		{
			m_pressedKeys.Insert(key);
		}
	}
	
	override void OnKeyRelease(int key)
	{
		super.OnKeyRelease(key);
		
		int keyIndex = m_pressedKeys.Find(key);
		if (keyIndex != -1)
		{
			m_pressedKeys.Remove(keyIndex);
		}
	
	}

	protected void OnScreenMessageRpc(ParamsReadContext ctx, PlayerIdentity sender)
	{
		if (!m_SyberiaAdditionalHud) return;
		
		Param1<string> clientData;
       	if ( !ctx.Read( clientData ) ) return;	
		
		ShowScreenMessage(clientData.param1, 8);
	}
	
	override void ShowScreenMessage(string message, float time)
	{
		if (m_SyberiaAdditionalHud)
		{
			m_SyberiaAdditionalHud.ShowScreenMessage(message, time);
		}
	}
	
	override void Pause()
	{
		super.Pause();

		UIScriptedMenu ingameMenu = GetGame().GetUIManager().GetMenu();
		if (ingameMenu && ingameMenu.GetID() == MENU_INGAME)
		{
			ref Widget watermarkWidget = GetGame().GetWorkspace().CreateWidgets( "SyberiaScripts/layout/WatermarkInGame.layout" );		
			ref Widget watermarkBase = watermarkWidget.FindAnyWidget( "WatermarkBase" );
			ref Widget watermarkBtn = watermarkBase.FindAnyWidget( "WatermarkActionBtn" );
			TextWidget.Cast( watermarkBase.FindAnyWidget( "WatermarkTextWidget5" ) ).SetText(Syberia_Version);
			m_WidgetEventHandler.RegisterOnClick(watermarkBtn, m_watermarkHandler, "OnWatermarkClick");
			watermarkWidget.RemoveChild(watermarkBase);
			ingameMenu.GetLayoutRoot().AddChild(watermarkBase, true);
			delete watermarkWidget;
		}
	}

	// override void RemoveActiveInputRestriction(int restrictor)
	// {
	// 	//unique behaviour outside regular excludes
	// 	PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
	// 	if (restrictor > -1)
	// 	{
	// 		switch (restrictor)
	// 		{
	// 			case EInputRestrictors.INVENTORY:
	// 			{
					
	// 				if ( player )
	// 				{
	// 					player.SetInventoryOpened(false);
	// 				}
	// 				if(player.CanJog)
	// 				{
	// 				GetUApi().GetInputByID(UAWalkRunForced).ForceEnable(false); // force walk off!
	// 				};
	// 				break;
	// 			}
	// 			case EInputRestrictors.MAP:
	// 			{
	// 				if ( player )
	// 				{
	// 					player.SetMapOpened(false);
	// 				}
	// 				if(player.CanJog)
	// 				{
	// 				GetUApi().GetInputByID(UAWalkRunForced).ForceEnable(false); // force walk off!
	// 				}
	// 				break;
	// 			}
	// 		}
			
	// 		if (m_ActiveInputRestrictions && m_ActiveInputRestrictions.Find(restrictor) != -1)
	// 		{
	// 			m_ActiveInputRestrictions.RemoveItem(restrictor);
	// 		}
	// 	}
	// }

	// override void AddActiveInputRestriction(int restrictor)
	// {
	// 	//unique behaviour outside regular excludes
	// 	PlayerBase player = PlayerBase.Cast( GetGame().GetPlayer() );
	// 	if (restrictor > -1)
	// 	{
	// 		switch (restrictor)
	// 		{
	// 			case EInputRestrictors.INVENTORY:
	// 			{
	// 				GetUApi().GetInputByID(UAWalkRunForced).ForceEnable(true); // force walk on!
	// 				if ( player )
	// 				{
	// 					player.SetInventoryOpened(true);
	// 					ItemBase item = player.GetItemInHands();
	// 					if (item && item.IsWeapon())
	// 						player.RequestResetADSSync();
	// 				}
	// 				break;
	// 			}
	// 			case EInputRestrictors.MAP:
	// 			{
	// 				if ( player )
	// 				{
	// 					player.SetMapOpened(true);
	// 				}
	// 				GetUApi().GetInputByID(UAWalkRunForced).ForceEnable(true); // force walk on!
	// 				break;
	// 			}
	// 		}
			
	// 		if (!m_ActiveInputRestrictions)
	// 		{
	// 			m_ActiveInputRestrictions = new array<int>;
	// 		}
	// 		if (m_ActiveInputRestrictions.Find(restrictor) == -1)
	// 		{
	// 			m_ActiveInputRestrictions.Insert(restrictor);
	// 		}
	// 	}
	// }
};