/*
modded class ExpansionChatLineBase: ExpansionScriptView
{

    override string GetLayoutFile()
        {
            string path;
            ExpansionClientUIChatSize chatsize = GetExpansionClientSettings().HUDChatSize;
            switch (chatsize)
            {
                case ExpansionClientUIChatSize.VERYSMALL:
                    path = "HumanityRP_11/HumanityRP_Gui/layouts/expchat/expansion_chat_entry_verysmall.layout";
                    break;
                case ExpansionClientUIChatSize.SMALL:
                    path = "HumanityRP_11/HumanityRP_Gui/layouts/expchat/expansion_chat_entry_small.layout";
                    break;
                case ExpansionClientUIChatSize.MEDIUM:
                    path = "HumanityRP_11/HumanityRP_Gui/layouts/expchat/expansion_chat_entry_medium.layout";
                    break;
                case ExpansionClientUIChatSize.LARGE:
                    path = "HumanityRP_11/HumanityRP_Gui/layouts/expchat/expansion_chat_entry_large.layout";
                    break;
                case ExpansionClientUIChatSize.VERYLARGE:
                    path = "HumanityRP_11/HumanityRP_Gui/layouts/expchat/expansion_chat_entry_verylarge.layout";
                    break;
                default:
                    path = "HumanityRP_11/HumanityRP_Gui/layouts/expchat/expansion_chat_entry_small.layout";
                    break;
            }

            return path;
        }
} 
*/
