class SyberiaMedicineAmpoule : Inventory_Base
{
	
};

class AmpouleAlcohol : SyberiaMedicineAmpoule
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDisinfectTarget);
		AddAction(ActionDisinfectSelf);
		AddAction(ActionWashHandsItem);
	}
	
	override float GetDisinfectQuantity(int system = 0, Param param1 = null)
	{
		return 1;
	}
	
	override int GetLiquidType()
	{
		return LIQUID_DISINFECTANT;
	}
};