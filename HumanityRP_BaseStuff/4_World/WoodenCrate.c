modded class WoodenCrate: DeployableContainer_Base
{
    protected bool m_IsOpened;
	protected bool m_IsOpenedLocal;
    ref Timer	m_TimerToClose;
    int close_after_seconds = 300;

    void WoodenCrate()
    {   

        RegisterNetSyncVariableBool("m_IsSoundSynchRemote");
		RegisterNetSyncVariableBool("m_IsOpened");

    }
   

    void hrp_AutomaticClose(bool OnOpen )
    {
    	if (!m_TimerToClose)
		{
			m_TimerToClose = new Timer(CALL_CATEGORY_SYSTEM);
		}

		if ( OnOpen && !m_TimerToClose.IsRunning() && close_after_seconds > 0 )
		{
			m_TimerToClose.Run(close_after_seconds, this, "Close", NULL, false);
			return;
		}

		if ( !OnOpen && m_TimerToClose.IsRunning() )
		{
			m_TimerToClose.Stop();
		}
    }

	override bool IsOpenable()
	{
		return true;
	}

    override void EEInit()
	{
		super.EEInit();		
        if(IsOpen())
            GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
		else
			GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);		
	}

    override void Open()
	{
		m_IsOpened = true;
		SoundSynchRemote();
		GetInventory().UnlockInventory(HIDE_INV_FROM_SCRIPT);
        hrp_AutomaticClose( true );
	}

    override void Close()
	{
		m_IsOpened = false;
		SoundSynchRemote();
		GetInventory().LockInventory(HIDE_INV_FROM_SCRIPT);
        hrp_AutomaticClose( false );
	}

	override bool IsOpen()
	{
		return m_IsOpened;
	}

    override void OnVariablesSynchronized()
	{
		super.OnVariablesSynchronized();
		
		if ( m_IsOpened != m_IsOpenedLocal )
		{		
				
			m_IsOpenedLocal = m_IsOpened;
		}
		
	}

    override void OnStoreSave( ParamsWriteContext ctx )
	{   
		super.OnStoreSave( ctx );		
		ctx.Write( m_IsOpened );
	}
	
	override bool OnStoreLoad( ParamsReadContext ctx, int version )
	{
		if ( !super.OnStoreLoad( ctx, version ) )
			return false;
		
		if (!ctx.Read( m_IsOpened ) )
			return false;
		
		if ( !m_IsOpenable )
			return true;

		if ( m_IsOpened )
			Open();
		else
			Close();
		
		return true;
	}
	
	override bool CanPutInCargo( EntityAI parent )
	{
	if ( !super.CanPutInCargo( parent ))
		return false;
  
		if ( GetNumberOfItems() == 0 && !IsOpen() )
		return true;
  
		return false;
	}
    override bool CanPutIntoHands( EntityAI parent )
	{
		if ( !super.CanPutIntoHands( parent ))
		return false;

		if ( !IsOpen() )
		return true;

		return false;
	}
	
	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		return IsOpen();
	}
	
	override bool CanReleaseCargo(EntityAI attachment)
	{
		return IsOpen();
	}
	
	override bool IsHeavyBehaviour() 
    {
        return true;
    }
    
    override bool IsTwoHandedBehaviour() 
    {
        return true;
    }
     
    override void SetActions()
    {
        super.SetActions();
        
        AddAction(ActionOpenCloseContainer);
    } 
}