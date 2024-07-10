modded class ChatLine
{
	private const int 	 DEFAULT_COLOUR = ARGB(255, 255, 255, 255);
	private const int 	 GAME_TEXT_COLOUR = ARGB(255, 131, 59, 240);
	private const int 	 ADMIN_TEXT_COLOUR =  ARGB(255, 252, 236, 3);
	private const int 	 ME_TEXT_COLOUR = ARGB(255, 252, 0, 198);
	private const int 	 DO_TEXT_COLOUR = ARGB(255, 33, 237, 213);
	
	void ChatLine(Widget root_widget)
	{
		m_RootWidget	= GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Core/5_Mission/chat.layout", root_widget);
	
		m_NameWidget	= TextWidget.Cast( m_RootWidget.FindAnyWidget( "ChatItemSenderWidget" ) );
		m_TextWidget	= TextWidget.Cast( m_RootWidget.FindAnyWidget( "ChatItemTextWidget" ) );
		
		m_FadeTimer		= new WidgetFadeTimer;
		m_TimeoutTimer	= new Timer(CALL_CATEGORY_GUI);
	}
	
	override void Set(ChatMessageEventParams params)	// Param 1 --> Channel, Param 2 --> sender name, Param 3 --> message, Param 4 ?? 
	{
		int channel; 
		string command;
		string message_to_send;
		bool CommandActive;
		m_NameWidget.SetText("");
		m_TextWidget.SetText("");
		SetColour(DEFAULT_COLOUR);
		m_RootWidget.Show(true);
		
		channel = params.param1; // 0 = Survior   1 = Game/System   2 = Admin 
		
		if ( channel & CCSystem )
		{
			// Game
			if (params.param2 != "")
			{
				m_NameWidget.SetText(GAME_PREFIX + ": " );
			}
			
			SetColour(ADMIN_TEXT_COLOUR);
		}
		else if ( channel & CCAdmin )
		{
			// Admin
			m_NameWidget.SetText(ADMIN_PREFIX + ": ");
			SetColour(ADMIN_TEXT_COLOUR);
		}
		else if ( channel & CCTransmitter )
		{
			// Radio - Trasnmitter
			m_NameWidget.SetText(RADIO_PREFIX + params.param2 + " : ");
			SetColour(ADMIN_TEXT_COLOUR);
		}
		else if ( channel == 0 || channel & CCDirect )
		{
			
			if (params.param2 != "")
			{
				if(params.param3.Length() > 3)
				{
					command = params.param3.Substring( 0, 3);
					if( command == "!do" || command == "!Do" || command =="!dO" || command == "!DO")
					{
						params.param3 = params.param3.Substring( 4, params.param3.Length() - 4);
						m_NameWidget.SetText(" " +params.param2 + " : **DO** ");
						SetColour(DO_TEXT_COLOUR);
					}
					else if ( command == "!me" || command == "!Me" || command =="!mE" || command == "!ME")
					{
						
						params.param3 = params.param3.Substring( 4, params.param3.Length() - 4);
						m_NameWidget.SetText(" " + params.param2 + " : **ME** ");
						SetColour(ME_TEXT_COLOUR);

					}
					else
					{

						m_NameWidget.SetText(" " + params.param2 + " :  **OOC** ");
						SetColour(DEFAULT_COLOUR);

					}
				}
				else
				{

					m_NameWidget.SetText(" " + params.param2 + " :  **OOC** ");
					SetColour(DEFAULT_COLOUR);

				}
			}

		}
		else
		{

			SetColour(ADMIN_TEXT_COLOUR);

		}
		
		
		m_TextWidget.SetText(" " + params.param3 + " ");		
		
		m_FadeTimer.FadeIn(m_RootWidget, FADE_IN_DURATION);
		m_TimeoutTimer.Run(FADE_TIMEOUT, m_FadeTimer, "FadeOut", new Param2<Widget, float>(m_RootWidget, FADE_OUT_DURATION));
	}
}