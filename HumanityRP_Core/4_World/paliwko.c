// modded class ActionFillBottleBase
// {
// 	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
// 	{
// 		Object targetObject = target.GetObject();
// 		if (targetObject)
// 		{
// 			if (targetObject.IsFuelStation())
// 			{
// 				return false;
// 			}
// 		}

// 		return super.ActionCondition(player, target, item);
// 	}
// }

modded class FuelStation extends BuildingSuper
{
	
	override bool IsFuelStation()
	{
		return false;
	}

}
modded class Land_FuelStation_Feed extends FuelStation
{
	
	//! Returns true if this stand is functional
	override bool HasFuelToGive()
	{
		return false;
	}
};