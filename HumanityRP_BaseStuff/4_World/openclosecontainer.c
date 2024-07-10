class ActionOpenCloseContainer: ActionInteractBase
{
	/* private string m_Text = "#open"; */
	void ActionOpenCloseContainer()
	{
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONMOD_OPENDOORFW;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH | DayZPlayerConstants.STANCEMASK_ERECT;
		m_HUDCursorIcon = CursorIcons.CloseDoors;
	}

	override void CreateConditionComponents()  
	{
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTNone;
	}

	override string GetText()
	{
		return m_Text;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;

		
		Container_Base crate = Container_Base.Cast(target.GetObject());
		if(crate && crate.IsOpenable())
		{
			if(crate.IsOpen())
				m_Text = "#close";
			else
				m_Text = "#open";
			return true;
		}
		return false;
	}
};