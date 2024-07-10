modded class PluginRepairing extends PluginBase
{
	
    bool CanRepair( ItemBase repair_kit, Object item, string damage_zone = "" )
	{
		int state = item.GetHealthLevel(damage_zone);
		
		if ( state != GameConstants.STATE_RUINED && (item.CanBeRepairedToPristine() && state >= GameConstants.STATE_WORN) || (!item.CanBeRepairedToPristine() && state >= GameConstants.STATE_DAMAGED ) )
		{
			int repair_kit_type = repair_kit.ConfigGetInt( "repairKitType" );
			
			array<int> repairable_with_types = new array<int>;
			item.ConfigGetIntArray( "repairableWithKits", repairable_with_types );	
			
			for ( int i = 0; i < repairable_with_types.Count(); i++ )
			{
				int repairable_with_type = repairable_with_types.Get(i);
				
				if ( IsRepairValid( repair_kit_type, repairable_with_type ) )
				{
					return true;
				}
			}
		}
		return false;
		
	}

	
}