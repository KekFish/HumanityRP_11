modded class ItemBase
{

	override bool CanPutInCargo( EntityAI parent )
	{
		if ( !super.CanPutInCargo(parent) ) {return false;}
		if (IsRuined())
		{
			return false;
		}
		else
		{
		return super.CanPutInCargo(parent);
		}
	
	}

	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		//removed 15.06. coz of loading from storage -> after load items in cargo was lost -> waiting for proper solution
		//if ( GetHealthLevel() == GameConstants.STATE_RUINED )
		//	return false;
		if ( IsRuined())
		{
			return false;
		}
		else
		{		
		return super.CanReceiveItemIntoCargo( item );
		}
	}
};