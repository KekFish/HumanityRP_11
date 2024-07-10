modded class Hacksaw: Inventory_Base 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionDestroyCarPart);
	}
};