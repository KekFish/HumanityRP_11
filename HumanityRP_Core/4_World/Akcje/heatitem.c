class ActionHeatItemCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(30);
	}
};

class ActionHeatItem: ActionContinuousBase
{	
	
	void ActionHeatItem()
	{
		m_CallbackClass = ActionHeatItemCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_STARTFIRE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_CROUCH;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "Nagrzej przedmiot";
	}
	

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		FireplaceBase m_Fireplace = FireplaceBase.Cast(  target.GetObject() );
		if( m_Fireplace && item.CanBeHeated() )
		{
			if(m_Fireplace.GetTemperature() >= 300) return true;
		}
		FlammableBase m_FlammableBase = FlammableBase.Cast(  target.GetObject() );
		if( m_FlammableBase && item.CanBeHeated() )
		{
			if(m_FlammableBase.IsIgnited()) return true;
		}
		ItemBase item_to_heat = ItemBase.Cast( target.GetObject() );
		m_FlammableBase = FlammableBase.Cast( item );
		if( item_to_heat && m_FlammableBase )
		{

			if(item_to_heat.CanBeHeated() && m_FlammableBase.IsIgnited()) return true;

		}

		return false;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined;
	}
};

class ActionHeatItem_BT_CB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(5);
	}
};

class ActionHeatItem_BT: ActionHeatItem
{	
	
	void ActionHeatItem_BT()
	{
		m_CallbackClass = ActionHeatItem_BT_CB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_FLAME_REPAIR;
		m_LockTargetOnUse = false;	
	}
	

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Blowtorch bt = Blowtorch.Cast(item);
		if (!bt.HasEnoughEnergyForRepair(5))
		{
			return false;
		}
		ItemBase item_to_heat = ItemBase.Cast( target.GetObject() );
		if( item_to_heat && bt )
		{

			if(item_to_heat.CanBeHeated()) return true;

		}

		return false;
	}

};

class ActionHealBiteCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime(20);
	}
};


class ActionHealBiteSelf: ActionContinuousBase
{

	void ActionHealBiteSelf()
	{
		m_CallbackClass = ActionHealBiteCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_STITCHUPSELF;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "Przyżeganie rany";
	}

	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTSelf;
	}

	override bool HasTarget()
	{
		return false;
	}

	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return "#syb_surg_blocked";
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return CheckBlockerActionCondition(player, target, item) && ConditionSurgery(item, player, true);		
	}
	
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		ref ItemBase itemCheck = player.GetItemOnSlot("Body");
		if (itemCheck)
		{
			return true;
		}
		
		return false;
	}

	bool ConditionSurgery( ItemBase item, PlayerBase player, bool self)
	{	
		return (player.GetSybStats().m_zombieBite > 0 && item.m_IsHeated);
	}

}

class ActionHealBiteTarget: ActionSurgeryBase
{	
	void ActionHealBiteTarget()
	{
		m_CallbackClass = ActionHealBiteCB;
		m_SpecialtyWeight = UASoftSkillsWeight.PRECISE_LOW;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_STITCHUPSELF;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT | DayZPlayerConstants.STANCEMASK_CROUCH;
		m_Text = "Przyżeganie rany";
	}

	override void CreateConditionComponents()  
	{		
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTMan(UAMaxDistances.DEFAULT);
	}

	override bool HasTarget()
	{
		return true;
	}

	bool ConditionSurgery( ItemBase item, PlayerBase player, bool self)
	{	
		return (player.GetSybStats().m_zombieBite > 0 && item.m_IsHeated);
	}

	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		return "#syb_surg_blocked";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

        
		PlayerBase targetPlayer = PlayerBase.Cast(target.GetObject());	
		return CheckBlockerActionCondition(player, target, item) && targetPlayer && ConditionSurgery(item, targetPlayer, false);		
	}
	
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		PlayerBase targetPlayer = PlayerBase.Cast(target.GetObject());
		if (targetPlayer)
		{
			ref ItemBase itemCheck = targetPlayer.GetItemOnSlot("Body");
			if (itemCheck)
			{
				return true;
			}
		}
		
		return false;
	}
};
