modded class PluginManager {
	override void Init() {
		super.Init();
		//----------------------------------------------------------------------
		// Register modules
		//----------------------------------------------------------------------
		//				Module Class Name 						Client	Server
		//----------------------------------------------------------------------
		RegisterPlugin("PassportUIManager", true, false);
        RegisterPlugin("PassportClientRPC", true, false);
	}
}

class PassportUIManager : PluginBase {
    void ShowMenu(int menuId, HRP_BlankPassport target) {
        if (GetGame().IsServer()) { return; }
        if (GetGame().GetUIManager().GetMenu()) {
            return;
        }
        GetGame().GetUIManager().EnterScriptedMenu(menuId, null);

        PassportMenuBase menu = PassportMenuBase.Cast(GetGame().GetUIManager().GetMenu());
        menu.SetTarget(target);
    }

    void ShowMenuWrite(int menuId, HRP_BlankPassport target) {
        if (GetGame().IsServer()) { return; }
        if (GetGame().GetUIManager().GetMenu()) {
            return;
        }
        GetGame().GetUIManager().EnterScriptedMenu(menuId, null);

        PassportMenuBase menu = PassportMenuBase.Cast(GetGame().GetUIManager().GetMenu());
        menu.SetTarget(target);
        menu.InitPassportWrite();
    }

    void ShowMenuRead(int menuId, PassportDataTransfer data) {
        if (GetGame().IsServer()) { return; }
        if (GetGame().GetUIManager().GetMenu()) {
            return;
        }
        GetGame().GetUIManager().EnterScriptedMenu(menuId, null);

        PassportMenuBase menu = PassportMenuBase.Cast(GetGame().GetUIManager().GetMenu());
        menu.SetData(data);
        menu.InitPassportRead();
    }

    void ExitMenus() {
        PassportMenuBase menu = PassportMenuBase.Cast(GetGame().GetUIManager().GetMenu());

        if (menu) {
            menu.Close();
        }
    }
}
PassportUIManager GetPassportUIManager() {
    return PassportUIManager.Cast(GetPlugin(PassportUIManager));
}


class PassportClientRPC : PluginBase 
{
    void PassportClientRPC() {
        if (GetGame().IsServer() && GetGame().IsMultiplayer()) { return; }
		// Zmienic na &&
        GetDayZGame().Event_OnRPC.Insert(ClientRPCHandler);
    }

    void ~PassportClientRPC() {
        GetDayZGame().Event_OnRPC.Remove(ClientRPCHandler);
    }

    

    void ClientRPCHandler(PlayerIdentity sender, Object target, int rpc_type, ParamsReadContext ctx) 
	{
        if (GetGame().IsServer() && GetGame().IsMultiplayer()) {
            delete this;
            return;
        }

        ref PassportDataTransfer m_PassportData = new PassportDataTransfer();

        switch (rpc_type)
		{
			case PassRPC.RECIVEPASSPORT_DATA:
				if (GetGame().IsServer()) { return; }
				Param2<PassportDataTransfer, HRP_BlankPassport> params;
					
				if (!ctx.Read(params))
					return;
			
				m_PassportData = params.param1;
                if(params.param2.IsInherited(HRP_Permit))
                {

                    GetPassportUIManager().ShowMenuRead(PassUI.PERMITMENU, m_PassportData);


                }
                else
                {

                    GetPassportUIManager().ShowMenuRead(PassUI.PASSPORTMENU, m_PassportData);

                }
				
				
				
			
			break;
		
		}
	}
		
                
            
       
    
}