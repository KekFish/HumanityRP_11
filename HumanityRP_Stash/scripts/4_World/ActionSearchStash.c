class ActionSearchStashCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
	
};

class ActionSearchStash : ActionContinuousBase
{
	void ActionSearchStash()
	{
		m_CallbackClass = ActionSearchStashCB;
		m_FullBody = true;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINone;
		m_ConditionTarget = new CCTDummy;
	}

	override string GetText()
	{
		return "Przeszukaj Schowek";
	}

	override typename GetInputType()
	{
		return ContinuousInteractActionInput;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if( !target ) return false;
		if( !target.GetObject() ) return false;
		if( !IsInReach(player, target, UAMaxDistances.DEFAULT) ) return false;
		//if (player.GetItemInHands()) return false;
		
		HRP_Stash_Base targetEntity = HRP_Stash_Base.Cast( target.GetObject() );
		if ( !targetEntity ) return false;
		if (targetEntity.IsInventoryVisible()) return false;

		return targetEntity.IsStash();
	}
};