modded class DayZPlayerImplement
{
	float m_loginTimer = 0;
	float m_soundWaveMasterVolume = 1;
	
	override void ShowDeadScreen(bool show, float duration)
	{
		#ifndef NO_GUI
		if (show && IsPlayerSelected())
		{
			string message = "";
			PlayerBase player = PlayerBase.Cast(this);
			// if (player && player.GetSybStats().m_overdosedLevel >= 9 && !GetGame().GetMission().IsPlayerRespawning())
			// {

			// 	message = "Amnezja, zostałeś odurzony lekami i nic nie pamiętasz.";
			// 	player.RPCSingleParam( HUMANITYRP_RPCS.AMNEZJA_LOGS, null, true, player.GetIdentity() );
			// }
			if (!GetGame().GetMission().IsPlayerRespawning())
			{
				message = "Brak Amnezji, pamietasz wszystko co sie wydarzyło.";
			}

			#ifdef PLATFORM_CONSOLE
			GetGame().GetUIManager().ScreenFadeIn(duration, message, FadeColors.DARK_RED, FadeColors.WHITE);
			#else
			GetGame().GetUIManager().ScreenFadeIn(duration, message, FadeColors.BLACK, FadeColors.WHITE);
			#endif
		}
		else
		{
			GetGame().GetUIManager().ScreenFadeOut(duration);

			if (duration > 0)
				GetGame().GetCallQueue(CALL_CATEGORY_GUI).CallLater(StopDeathDarkeningEffect, duration*1000, false);
			else
				GetGame().GetCallQueue(CALL_CATEGORY_GUI).Call(StopDeathDarkeningEffect);
		}
		#endif

	}
	
	override void CommandHandler(float pDt, int pCurrentCommandID, bool pCurrentCommandFinished)
	{
		super.CommandHandler(pDt,pCurrentCommandID,pCurrentCommandFinished);
		
		PlayerBase player = PlayerBase.Cast(this);
		if (!player)
			return;
		
		
        UAInput hideItemKey = GetUApi().GetInputByName("UAToggleSyberiaHideItem");
		if ( hideItemKey.LocalClick() && (GetGame().GetUIManager().GetMenu() == NULL || GetGame().GetUIManager().FindMenu( MENU_INVENTORY )) )
		{
			if ( !player.GetInventory().IsInventoryLocked() && player.GetHumanInventory().CanRemoveEntityInHands() )
			{
				player.PredictiveMoveItemFromHandsToInventory();
			}
		}
		
		UAInput useBackpackKey = GetUApi().GetInputByName("UAToggleSyberiaUseBackpack");
		if ( useBackpackKey.LocalClick() && !player.GetInventory().IsInventoryLocked() && (GetGame().GetUIManager().GetMenu() == NULL || GetGame().GetUIManager().FindMenu( MENU_INVENTORY )) )
		{
			ItemBase backpack = player.GetItemInHands();
			if (backpack)
			{
				if (player.GetHumanInventory().CanAddAttachmentEx(backpack, InventorySlots.BACK))
				{
					player.PredictiveTakeEntityToInventory(FindInventoryLocationType.ATTACHMENT, backpack);
				}
			}
			else
			{
				backpack = player.GetItemOnSlot("Back");
				if (backpack && player.GetHumanInventory().CanAddEntityInHands(backpack))
				{
					player.PredictiveTakeEntityToHands(backpack);
				}
			}
		}
	

	
	}
};