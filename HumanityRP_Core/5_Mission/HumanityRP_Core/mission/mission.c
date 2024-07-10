modded class MissionServer {

    string shutdownHeader, shutdownTitle, shutdownContent, shutdownFooter;

    void MissionServer() {


        if( GetGame().ServerConfigGetInt( "Mig29" ) == 0)
        {
        shutdownHeader = "************* HUMANITYRP *************";
        shutdownFooter = "*************************************";
        shutdownTitle = "CO TY TURAJ ROBISZ?";
        shutdownContent = "WYPAD OD NASZYCH PLIKÓW";
        Print(shutdownHeader); Print(shutdownTitle); Print(shutdownContent); Print(shutdownFooter);
        PrintToRPT(shutdownHeader); PrintToRPT(shutdownTitle); PrintToRPT(shutdownContent); PrintToRPT(shutdownFooter);
        GetGame().AdminLog(shutdownHeader); GetGame().AdminLog(shutdownTitle); GetGame().AdminLog(shutdownContent); GetGame().AdminLog(shutdownFooter);
        GetGame().RequestExit(1);
        };

    }



}


modded class MissionGameplay
{

    override void OnInit()
    {
        super.OnInit();
        
        #ifdef DZM_VPPAdminToolsScripts
        VPPKeybindsManager.RegisterBind("UACopyClassName", VPPBinds.Press, "CopyClassNameToClipboard", this);
        #endif
    }
		#ifdef DZM_VPPAdminToolsScripts
    void CopyClassNameToClipboard()
    {
        if ((!m_Toggles) || (!m_ToolsToggled))
            return;

        if (!GetVPPUIManager().GetKeybindsStatus() && !GetVPPUIManager().IsTyping())
        {
            Object target = g_Game.getObjectAtCrosshair(1000.0, 0.0,NULL);
            string targetType, toCopy;

            if (target)
                targetType = target.GetType();

            string notificationMsg;
            if ( target == NULL )
            {
                notificationMsg = "Brak wykrytego obiektu";
            }
            else
            {
                if (targetType == "" || targetType == string.Empty)
                    notificationMsg = string.Format("Zkopiowano Classname obiektu: %1 do Schowka", target.GetType());
                else
                    notificationMsg = string.Format("Zkopiowano Classname obiektu: %1 do Schowka", target.GetType());
                
                
                toCopy = target.GetType();
                GetGame().CopyToClipboard(toCopy);
            }
            GetVPPUIManager().DisplayNotification(notificationMsg, "V++ Admin Tools:", 10.0);
        }
    }
	#endif

}