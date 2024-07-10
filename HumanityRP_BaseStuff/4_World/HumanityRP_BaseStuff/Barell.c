modded class Barrel_ColorBase : DeployableContainer_Base
{
    ref Timer	m_TimerToClose;

    int close_after_seconds = 300;

    void hrp_AutomaticClose(bool OnOpen )
    {

		ItemBase m_Parent = ItemBase.Cast( this.GetHierarchyParent());
		if(m_Parent && m_Parent.GetType() == "nm_Kraxe")
		{
			HRPLog("PARENT PRESENT NOT CLOSING");
			if ( m_TimerToClose.IsRunning() )
			{
				m_TimerToClose.Stop();
			}
		}
		else
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
    }

    override void Open()
	{
		super.Open();
		hrp_AutomaticClose( true );

	}

	override void Close()
	{
		super.Close();
		 
		hrp_AutomaticClose( false );

		

	}
}