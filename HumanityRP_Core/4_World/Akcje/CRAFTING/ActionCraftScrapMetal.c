class ActionCraftScrapMetal: ActionContinuousBase
{

	private bool can_do = false;
	string m_Text_o  = "#craft" + " " + "Złom";

	void ActionCraftScrapMetal()
	{

		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_FLAME_REPAIR;
		m_CallbackClass =  HRP_WorkBenchCraftingCB;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;
		m_FullBody = true;
		m_LockTargetOnUse = false;	
		m_Text = m_Text_o

	}

	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined( UAMaxDistances.DEFAULT );
	}

	override bool CanBeUsedLeaning()
	{
		return false;
	}

	//override bool UseMainItem()
	//{
	//	return true;
	//}

	override bool HasTarget()
	{
		return true;
	}

	//override typename GetInputType()
	//{
	//	return ContinuousInteractActionInput;
	//}

	float SetitemTime( PlayerBase player )
	{
        return 1;
	}

	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

		if (player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS)
		{
			return false;
		}

		Blowtorch bt;
		ItemBase gas_cannister;
		if ( Blowtorch.CastTo( bt, item ) )
		{

			if (bt.GetInventory().AttachmentCount() != 0)
			{
			gas_cannister = ItemBase.Cast(bt.GetInventory().GetAttachmentFromIndex(0));
			}
			float itemTime = SetitemTime(player);

			float gasusage = (itemTime * UATimeSpent.BASEBUILDING_REPAIR_MEDIUM * 2);
			if (gas_cannister && gas_cannister.GetQuantity() == 0 || !bt.HasEnoughEnergyForRepair(gasusage) )
			{

				m_Text = "Zbyt mało gazu w butli";

			}
			else
			{

				m_Text = m_Text_o;

			}

			if ( !bt.HasEnoughEnergyForRepair(gasusage) && !can_do)
			{ 
				return false;
			}
			else
			{

				can_do = true;

			}
		}

		ItemBase ActionItem = ItemBase.Cast( target.GetObject() );

		if ( ActionItem )
		{

			if ( ActionItem.IsKindOf("MetalPlate") )
			{

				return true;

			}
			else if ( ActionItem.IsKindOf("CarDoor") )
			{
				EntityAI parent = ActionItem.GetHierarchyParent();
				if (parent) return false;

				return true;

			}

		}

		return false;

	}
	
};