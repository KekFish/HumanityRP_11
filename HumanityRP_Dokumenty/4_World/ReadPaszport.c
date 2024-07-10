class ActionReadPassport: ActionContinuousBase
{
	const float TARGET_DISTANCE = 1;
	
	void ActionReadPassport()
	{
		m_CallbackClass = ActionWritePassportCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_VIEWNOTE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_PRONE;
	}
	
	override string GetText()
	{
		return "#read_note";
	}
	
	override void CreateConditionComponents()
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNone;//CCTNonRuined(TARGET_DISTANCE);
	}
	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		if ((HRP_BlankPassport.Cast(item)))
			return true;

		return false;
	}

	override void OnFinishProgressClient( ActionData action_data )
	{

		
		auto params = new Param1<HRP_BlankPassport>(HRP_BlankPassport.Cast(action_data.m_MainItem));
	
		GetGame().RPCSingleParam(NULL, PassRPC.REQUESTPASSPORT_DATA, params, true);

		//GetPassportUIManager().ShowMenuRead(PassUI.PASSPORTMENU, HRP_BlankPassport.Cast(action_data.m_MainItem));

		//m_menuPassport.InitPassportWrite( HRP_Passport );
		

	}
}