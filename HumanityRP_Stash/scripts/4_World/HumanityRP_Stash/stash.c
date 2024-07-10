class HRP_Stash_Base : Container_Base
{
	
	bool m_isInventoryBlocked = true;
	
	void HRP_Stash_Base()
	{
		RegisterNetSyncVariableBool("m_isInventoryBlocked");
	}
	

	bool IsStash()
	{

		return true;

	}

	override bool IsTakeable()
	{
		
		return m_IsTakeable;
		
	}

	override bool IsInventoryVisible()
	{
		return !m_isInventoryBlocked;
	}
	
	override bool IsInventoryBlocked()
	{
		return m_isInventoryBlocked;	
	}
	
	void UnlockInventory()
	{
		m_isInventoryBlocked = false;
		SetSynchDirty();
	}

		
	override bool CanPutInCargo( EntityAI parent )
	{
		return false;
	}
	
	override bool CanPutIntoHands(EntityAI parent)
	{
		return false;

	}

	override bool CanReceiveItemIntoCargo( EntityAI item )
	{
		return false;
	}


};

class HRP_Stash_BlueBox: HRP_Stash_Base {};

class HRP_Stash_BoxMetal: HRP_Stash_Base {};

class HRP_Stash_WoodenBox: HRP_Stash_Base {};

class HRP_Stash_WoodenBox_Contaminated: HRP_Stash_Base {};

class HRP_Stash_WoodenBox_Bunkier: HRP_Stash_Base {};

class HRP_Stash_WoodenBox_Alcatraz: HRP_Stash_Base {};

class HRP_Stash_WoodenBox_Area42: HRP_Stash_Base {};

class HRP_Stash_GreenBox: HRP_Stash_Base {};

class HRP_Stash_Backpack: HRP_Stash_Base {};

class HRP_Stash_Backpack_Oilrig: HRP_Stash_Base {};

class HRP_Stash_Backpack_Contaminated: HRP_Stash_Base {};

class HRP_Stash_Backpack_DE: HRP_Stash_Base {};


