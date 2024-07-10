modded class Screwdriver: Inventory_Base 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDestroyCarPart);
		
	}
};