#ifdef BaseBuildingPlus
modded class BBPCraftStepLadder extends RecipeBase
{	
    override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
	{
		return false;
	}
};
#endif