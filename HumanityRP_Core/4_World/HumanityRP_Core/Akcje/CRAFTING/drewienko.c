modded class SawWoodenLog extends RecipeBase
{	
	override void Init()
	{
		m_Name = "#STR_sawwoodenlog0";
		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
		m_AnimationLength = 2;//animation length in relative time units
		m_Specialty = 0.02;// value > 0 for roughness, value < 0 for precision
		
		
		//conditions
		m_MinDamageIngredient[0] = -1;//-1 = disable check
		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[0] = -1;//-1 = disable check
		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
		m_MinDamageIngredient[1] = -1;//-1 = disable check
		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
		m_MinQuantityIngredient[1] = -1;//-1 = disable check
		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
		//----------------------------------------------------------------------------------------------------------------------
		
		//INGREDIENTS
		//ingredient 1
		InsertIngredient(0,"WoodenLog");//you can insert multiple ingredients this way
		
		m_IngredientAddHealth[0] = 0;// 0 = do nothing
		m_IngredientSetHealth[0] = -1; // -1 = do nothing
		m_IngredientAddQuantity[0] = -1;// 0 = do nothing
		m_IngredientDestroy[0] = false;//true = destroy, false = do nothing
		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//ingredient 2
		//InsertIngredient(1,"Hacksaw");//you can insert multiple ingredients this way
		//InsertIngredient(1,"HandSaw");//you can insert multiple ingredients this way
		InsertIngredient(1,"WoodAxe");//you can insert multiple ingredients this way
		InsertIngredient(1,"Hatchet");//you can insert multiple ingredients this way
		InsertIngredient(1,"FirefighterAxe");//you can insert multiple ingredients this way
	
		m_IngredientAddHealth[1] = -10;// 0 = do nothing
		m_IngredientSetHealth[1] = -1; // -1 = do nothing
		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
		m_IngredientDestroy[1] = false;// false = do nothing
		m_IngredientUseSoftSkills[1] = true;// set 'true' to allow modification of the values by softskills on this ingredient
		
		//----------------------------------------------------------------------------------------------------------------------
		
		//result1
		AddResult("Firewood");//add results here

		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[0] = -1;//-1 = do nothing
		m_ResultSetHealth[0] = -1;//-1 = do nothing
		m_ResultInheritsHealth[0] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		//result2
		AddResult("Firewood");//add results here

		m_ResultSetFullQuantity[1] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[1] = -1;//-1 = do nothing
		m_ResultSetHealth[1] = -1;//-1 = do nothing
		m_ResultInheritsHealth[1] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[1] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[1] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[1] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
		
		//result3
		AddResult("Firewood");//add results here

		m_ResultSetFullQuantity[2] = false;//true = set full quantity, false = do nothing
		m_ResultSetQuantity[2] = -1;//-1 = do nothing
		m_ResultSetHealth[2] = -1;//-1 = do nothing
		m_ResultInheritsHealth[2] = 0;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
		m_ResultInheritsColor[2] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
		m_ResultToInventory[2] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
		m_ResultUseSoftSkills[2] = false;// set 'true' to allow modification of the values by softskills on this result
		m_ResultReplacesIngredient[2] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value		//----------------------------------------------------------------------------------------------------------------------
	}

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return true;
	}

	override void Do(ItemBase ingredients[], PlayerBase player,array<ItemBase> results, float specialty_weight)//gets called upon recipe's completion
	{
	}
};

modded class CraftWoodenPlank extends RecipeBase
{	

	override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return false;
	}
}


modded class HandSaw extends ToolBase
{
	override void SetActions()
	{
		super.SetActions();
		
		
		
		AddAction(ActionSawWood);
		
	}
};

modded class Hacksaw extends ToolBase
{
	override void SetActions()
	{
		super.SetActions();
		
		
		
		AddAction(ActionSawWood);
		
	}
};

class ActionSawWoodCB : ActionContinuousBaseCB
{
	override void CreateActionComponent()
	{
		
		float itemTime = 1.0;
		m_ActionData.m_ActionComponent = new CAContinuousTime( itemTime * 45 );
	}
};

class ActionSawWood: ActionContinuousBase
{
		
	void ActionSawWood()
	{
		m_CallbackClass = ActionSawWoodCB;
		m_CommandUID = DayZPlayerConstants.CMD_ACTIONFB_DISASSEMBLE;
		m_FullBody = true;
		m_StanceMask = DayZPlayerConstants.STANCEMASK_ERECT;	
		
		m_SpecialtyWeight = UASoftSkillsWeight.ROUGH_HIGH;
		m_Text = "#STR_CraftWoodenPlank0";
	}
	
	override void CreateConditionComponents()  
	{	
		m_ConditionItem = new CCINonRuined;
		m_ConditionTarget = new CCTNonRuined;
	}
	
	override bool HasTarget()
	{
		return true;
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		Object target_object;
		//Action not allowed if player has broken legs
		if ( player.GetBrokenLegs() == eBrokenLegs.BROKEN_LEGS )
			return false;
		
		Class.CastTo(target_object, target.GetObject());
		if ( target_object.IsItemBase() )
		{
			if  (target_object.IsKindOf("WoodenLog"))
				{
					item = ItemBase.Cast( target_object );
					return true;
				}
		}
		return false;
		
		
	}
	
	
	override bool ActionConditionContinue( ActionData action_data )
	{	
		return true;
	}
		
	
	
	
	
}
