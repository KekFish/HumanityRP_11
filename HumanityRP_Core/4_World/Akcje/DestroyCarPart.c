class ActionDestroyCarPartCB : ActionContinuousBaseCB
{
    override void CreateActionComponent()
	{
		m_ActionData.m_ActionComponent = new CAContinuousTime( 30 );
	}
};

class ActionDestroyCarPart: ActionContinuousBase
{	
	void ActionDestroyCarPart()
	{
		m_CallbackClass = ActionDestroyCarPartCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_INTERACT;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_MEDIUM;
		m_Text = "#hrp_destroy_car_part";
		m_LockTargetOnUse = false;
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionTarget = new CCTNonRuined(3.0);
		m_ConditionItem = new CCINonRuined;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		

		ItemBase target_O = ItemBase.Cast( target.GetObject() );
		
		

			if ( target_O )
			{
				EntityAI parent = target_O.GetHierarchyParent();
				if (parent)
					return false;
				if (target_O.IsInherited(CarWheel) && item.IsInherited(Screwdriver))
					return true;
				else if (target_O.IsInherited(CarBattery) && item.IsInherited(Screwdriver))
					return true;
				else if (target_O.IsInherited(TruckBattery) && item.IsInherited(Screwdriver))
					return true;
				else if (target_O.IsInherited(CarRadiator) && item.IsInherited(Hacksaw))
					return true;
				else if (target_O.IsInherited(PowerGenerator) && item.IsInherited(Hacksaw))
					return true;
				else if (target_O.IsInherited(SparkPlug) && item.IsInherited(Screwdriver))
					return true;
				else if (target_O.IsInherited(HeadlightH7) && item.IsInherited(Screwdriver))
					return true;
			}
		
		return false;
	}
};