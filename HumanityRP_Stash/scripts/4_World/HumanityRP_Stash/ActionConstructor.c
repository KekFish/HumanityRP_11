modded class ActionConstructor
{
    override void RegisterActions(TTypenameArray actions)
	{		
		super.RegisterActions(actions);
		actions.Insert(ActionSearchStash);
		actions.Insert(ActionSearchTargetInventory);
		//actions.Insert(ActionSearchTargetPlayer);
	}
};