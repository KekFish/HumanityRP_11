modded class ZombieBase
{

    bool IsZombiePolice()
    {

        return false;

    }

    bool IsZombieNBC()
    {

        return false;

    }

    override void EEHitBy(TotalDamageResult damageResult, int damageType, EntityAI source, int component, string dmgZone, string ammo, vector modelPos, float speedCoef)
	{
		super.EEHitBy(damageResult, damageType, source, component, dmgZone, ammo, modelPos, speedCoef);
		
		
		if ( !IsAlive() )
		{
			
            int attCount = GetInventory().AttachmentCount();
            EntityAI attachment;
		    ItemBase item;

            for ( int attIdx = 0; attIdx < attCount; attIdx++ )
            {
                attachment = GetInventory().GetAttachmentFromIndex( attIdx );
                
                item = ItemBase.Cast( attachment );
                int rand = Math.RandomIntInclusive(1,100);
                if ( IsZombiePolice() || IsZombieMilitary() || IsZombieNBC())
                {

                    if(rand<=99) item.SetHealth01("","Health",0);
                    
                }
                else
                {

                    if(rand<=77) item.SetHealth01("","Health",0);
                    
                }
            
            
            }

		}
			
	}


}

modded class ZmbM_NBC_Grey
{

    override bool IsZombieNBC()
	{
		return true;
	}


}
modded class ZmbM_NBC_Yellow
{

    override bool IsZombieNBC()
	{
		return true;
	}

}

modded class ZmbM_PolicemanFat_Base extends ZombieMaleBase
{
    override bool IsZombiePolice()
	{
		return true;
	}
};

modded class ZmbM_PolicemanSpecForce_Base extends ZombieMaleBase
{
    override bool IsZombiePolice()
    {
        return true;
    }
};