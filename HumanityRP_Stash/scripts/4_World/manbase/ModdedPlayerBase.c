modded class PlayerBase
{	

	protected bool m_StashSearchSound;


	void PlayerBase()
	{
		RegisterNetSyncVariableBool("m_StashSearchSound");
	}
	
	override void SetActions(out TInputActionMap InputActionMap)
	{
		super.SetActions(InputActionMap);
		AddAction(ActionSearchStash, InputActionMap);
		AddAction(ActionSearchTargetInventory, InputActionMap);
		//AddAction(ActionSearchTargetPlayer, InputActionMap);

	}

	override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();		
		if (m_StashSearchSound)
		{
			StashSearchSoundPlay();
		}
				
    }

	void StashSearchSoundPlay()
	{
		EffectSound m_SearchSound = SEffectManager.PlaySoundOnObject( "StashSearch_SoundSet", this );
		m_SearchSound.SetSoundAutodestroy( true );
		ResetStashSearchSound();
	}
	
	void StartStashSearchSound()
	{
		m_StashSearchSound = true;
		SetSynchDirty();	
	}

	bool GetStashSearchSound()
	{

		return m_StashSearchSound

	}
	
	void ResetStashSearchSound()
	{
		m_StashSearchSound = false;
		SetSynchDirty();
	}

}


