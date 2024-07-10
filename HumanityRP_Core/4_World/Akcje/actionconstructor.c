modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
	{		
		super.RegisterActions(actions);
		
		actions.Insert(ActionDestroyCarPart);
		actions.Insert( ActionReadBook_M );
		actions.Insert( ActionCraftScrapMetal );
		actions.Insert( ActionSawWood );
		actions.Insert( ActionHeatItem );
		actions.Insert( ActionHeatItem_BT );
		actions.Insert( ActionHealBiteSelf );
		actions.Insert( ActionHealBiteTarget );


		





	}
};