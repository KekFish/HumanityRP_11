// modded class Clothing extends Clothing_Base
// {
// 	override bool CanPutInCargoClothingConditions(EntityAI parent)
// 	{
// 		bool is_hidden_stash_exception = false;
		
// 		if ( parent.IsInherited( UndergroundStash ) )
// 			is_hidden_stash_exception = true;
		
// 		if ( GetNumberOfItems() == 0 || is_hidden_stash_exception )
// 		{
// 			EntityAI cargoParent = parent.GetHierarchyParent();
// 			ClothingBase parentClothing = ClothingBase.Cast(parent);
// 			if (cargoParent && parentClothing && !IsKindOfPouch(parent))
// 				return !(parent.IsClothing() && cargoParent.IsClothing());			
// 			return true;
// 		}
		
// 		return false;
// 	}

// 	bool IsKindOfPouch(EntityAI parent)
// 	{
// 		return parent.IsKindOf("SmershBag");
// 	}

// 	override bool CanReceiveItemIntoCargoClothingConditions(EntityAI item)
// 	{
// 		if (GetInventory().IsInCargo())
// 			return false;
// 		return true;
// 	}

// 	override bool CanLoadItemIntoCargoClothingConditions(EntityAI item)
// 	{		
// 		if (GetInventory().IsInCargo())
// 			return false;
// 		return true;
// 	}
modded class Clothing
{
	bool IsOnBackSlot()
	{
		if (!GetGame().IsServer() || !GetGame().IsMultiplayer())
			return GetGame().GetPlayer().FindAttachmentBySlotName("Back") == this;
		
		return false;
	};

	override bool CanDisplayCargo()
	{
		if (!super.CanDisplayCargo())
			return false;
		return !IsOnBackSlot();
	};
	override bool CanReleaseCargo(EntityAI cargo)
	{
		if (!super.CanReleaseCargo(cargo))
			return false;
		return !IsOnBackSlot();

	};
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
			return false;
		return !IsOnBackSlot();
	};
	
};