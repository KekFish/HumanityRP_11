modded class Blowtorch: Inventory_Base 
{
	override void SetActions()
	{
		super.SetActions();
		
		AddAction(ActionCraftScrapMetal);
		AddAction( ActionHeatItem_BT );

	}
};