modded class AnimalBase
{
	protected bool m_alreadySkinned = false;
	
	override void EEInit()
	{
		super.EEInit();
		RegisterNetSyncVariableBool("m_alreadySkinned");
	}
	
	override bool IsSkinned()
	{
		return CanBeSkinned() && m_alreadySkinned;
	}
};