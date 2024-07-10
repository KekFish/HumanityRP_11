modded class Pot
{
    protected ref EffectSound m_WaterSplashSound;

    override void EOnContact( IEntity other, Contact extra )
        {
            super.EOnContact(other, extra);
            
            #ifdef SERVER
            SetQuantity(0);
            #endif

        }


	override void OnInventoryEnter(Man player)
	{
		super.OnInventoryEnter(player);

		if( HasAnyCargo() )
		{
			ItemBase parent;

			if(ItemBase.CastTo(parent, GetHierarchyParent() ))
			{
				#ifdef SERVER
				parent.SetWet( GetWetMax() );
				SetQuantity(0);
				#endif
				
				MakeWaterSound( GetHierarchyParent().GetPosition() );
			}
		}
	}

	override void OnItemLocationChanged(EntityAI old_owner, EntityAI new_owner)
	{
		super.OnItemLocationChanged(old_owner, new_owner);

		if( new_owner && new_owner.IsKindOf( "FireplaceBase" ) || new_owner && new_owner.IsKindOf( "bl_stove_barrel"))
		{
			return;
		}

		if( HasAnyCargo() )
		{
			ItemBase parent;

			if(ItemBase.CastTo(parent, new_owner ))
			{
				#ifdef SERVER
				parent.SetWet( parent.GetWetMax() );
				SetQuantity(0);
				#endif

				MakeWaterSound( GetHierarchyParent().GetPosition() );
			}
		}
	}

	void MakeWaterSound( vector position )
    {
    	#ifndef SERVER
    	m_WaterSplashSound = SEffectManager.PlaySound( "WaterSplash_SoundSet" , position , 0 , 0 , false );
    	m_WaterSplashSound.SetSoundAutodestroy( true );
    	#endif
    }
}