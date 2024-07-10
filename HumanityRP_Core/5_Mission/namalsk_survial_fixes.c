modded class Inventory
{

	override void SetLayoutName()
	{
			switch (InventoryMenu.GetWidthType())
			{
				case ScreenWidthType.NARROW:
				{
					m_LayoutName = WidgetLayoutName.InventoryNarrow;
					break;
				}
				case ScreenWidthType.MEDIUM:
				{
					m_LayoutName = WidgetLayoutName.InventoryMedium;
					break;
				}
				case ScreenWidthType.WIDE:
				{
					m_LayoutName = WidgetLayoutName.InventoryWide;
					break;
				}
			}
	}
}

modded class SlotsContainer
{
	override void SetLayoutName()
	{
		switch ( InventoryMenu.GetWidthType() )
			{
				case ScreenWidthType.NARROW:
				{
					m_LayoutName = WidgetLayoutName.InventorySlotsContainerNarrow;
					break;
				}
				case ScreenWidthType.MEDIUM:
				{
					m_LayoutName = WidgetLayoutName.InventorySlotsContainerMedium;
					break;
				}
				case ScreenWidthType.WIDE:
				{
					m_LayoutName = WidgetLayoutName.InventorySlotsContainerWide;
					break;
				}
			}
    };
};

modded class MenuCommandsConsole
{

    void MenuCommandsConsole()
	{
		
		m_CmdTooltips.Insert("/runevent", new Param2<string,string>("Force start a Namalsk global event, types of events from init.c", "/runevent EVRStorm"));
		
	}

}

modded class PlayerContainer
{
	override void UpdateInterval()
	{
		int i;
		for ( i = 0; i < m_InventorySlots.Count(); i++ )
		{
			SlotsIcon icon = m_InventorySlots.GetElement( i );
			if ( icon )
			{
				icon.UpdateInterval();
			}
		}
		for ( i = 0; i < m_ShowedItems.Count(); i++ )
		{
			Container cont = m_ShowedItems.GetElement( i );
			if ( cont )
			{
				cont.UpdateInterval();
			}
		}
	}
};