modded class ToolBase
{
    
	override bool CanBeHeated()
    {

        return true;

    }

    override void SetActions()
	{
		super.SetActions();		

        if( CanBeHeated() )
        {

            AddAction(ActionHealBiteSelf);
            AddAction(ActionHealBiteTarget);

        }
		
	}

}
modded class BoneKnife
{
	override bool CanBeHeated()
    {

        return false;

    }
}

modded class StoneKnife
{
	override bool CanBeHeated()
    {

        return false;

    }
}