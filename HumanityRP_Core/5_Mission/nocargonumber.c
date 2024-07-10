//cargo grid wrapper
modded class CargoContainer extends Container
{

    override void UpdateHeaderText()
	{
		Widget header;
		string name = m_Entity.GetDisplayName();
		name.ToUpper();
		
		if ( m_Entity.CanDisplayCargo() && m_Entity.GetInventory().GetCargoFromIndex(m_CargoIndex) )
		{
			if ( m_IsAttachment && m_CargoHeader )
			{
				m_FalseHeaderTextWidget.SetText(name);
				float x, y;
				m_FalseHeaderTextWidget.Update();
				m_FalseHeaderTextWidget.GetScreenSize( x, y );
				m_CargoHeader.FindAnyWidget( "grid_container_header" ).SetSize( 1, y + InventoryMenu.GetHeightMultiplied( 10 ) );
				m_CargoHeader.Update();
				
				if (m_AlternateFalseHeaderTextWidget)
				{
					m_AlternateFalseHeaderTextWidget.SetText(name);
				}
				return;
			}
		}
		
		if ( Container.Cast( GetParent() ) && Container.Cast( GetParent() ).GetHeader() )
			Container.Cast( GetParent() ).GetHeader().SetName(name);
	}

}