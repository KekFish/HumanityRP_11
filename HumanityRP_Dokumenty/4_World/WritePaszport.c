class ActionWritePassportCB: ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		EnableStateChangeCallback();
		m_ActionData.m_ActionComponent = new CAContinuousTime(1.0);
	}

	
}

class ActionWritePassport: ActionContinuousBase
{
	const float TARGET_DISTANCE = 1;
	ref PassportMenu m_menuPassport;
	void ActionWritePassport()
	{
		m_CallbackClass = ActionWritePassportCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
	}
	
	string GetText()
	{
		return "#write_note";
	}
	
	void CreateConditionComponents()
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;//CCTNonRuined(TARGET_DISTANCE);
	}
	bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if ((item && item.ConfigIsExisting("writingColor") && target.GetObject() && HRP_BlankPassport.Cast(target.GetObject())) && !target.GetObject().IsInherited(HRP_Passport) || (target.GetObject() && target.GetObject().ConfigIsExisting("writingColor") && item && HRP_BlankPassport.Cast(item) && !item.IsInherited(HRP_Passport)))
			return true;

		return false;
	}

	override void OnFinishProgressClient( ActionData action_data )
	{

		
		
		if(action_data.m_MainItem.IsInherited(HRP_BlankPermit))
		{

			GetPassportUIManager().ShowMenuWrite(PassUI.PERMITMENU, HRP_BlankPassport.Cast(action_data.m_MainItem));


		}
		else
		{

			GetPassportUIManager().ShowMenuWrite(PassUI.PASSPORTMENU, HRP_BlankPassport.Cast(action_data.m_MainItem));


		}



		

	}
}