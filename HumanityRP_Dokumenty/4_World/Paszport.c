class HRP_BlankPassport extends ItemBase
{
 	


	void HRP_BlankPassport()
	{

		

	}
	
	void ~HRP_BlankPassport()
	{
	}
	
		//================================================================
	// IGNITION ACTION
	//================================================================
	override bool HasFlammableMaterial()
	{
		return true;
	}
	
	override bool CanBeIgnitedBy( EntityAI igniter = NULL )
	{
		if ( GetHierarchyParent() ) return false;
		
		return true;
	}
	
	override bool CanIgniteItem( EntityAI ignite_target = NULL )
	{
		return false;
	}
	
	override void OnIgnitedTarget( EntityAI ignited_item )
	{
	}
	
	override void OnIgnitedThis( EntityAI fire_source )
	{
		Fireplace.IgniteEntityAsFireplace( this, fire_source );
	}

	override bool IsThisIgnitionSuccessful( EntityAI item_source = NULL )
	{
		return Fireplace.CanIgniteEntityAsFireplace( this );
	}

    void SetActions()
	{
		super.SetActions();

		AddAction(ActionWritePassport);
		
	}
	

}

class HRP_Passport: HRP_BlankPassport
{

	
    override void SetActions()
	{
		super.SetActions();


		RemoveAction(ActionWritePassport);
		AddAction(ActionReadPassport);

	}
}
class HRP_Permit: HRP_BlankPassport
{

	
    override void SetActions()
	{
		super.SetActions();


		RemoveAction(ActionWritePassport);
		AddAction(ActionReadPassport);

	}
}
class HRP_BlankPermit: HRP_BlankPassport
{
	override void SetActions()
	{
	super.SetActions();

	AddAction(ActionWritePassport);
	
	}
};