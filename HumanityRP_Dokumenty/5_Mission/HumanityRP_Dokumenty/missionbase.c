modded class MissionGameplay {
    override UIScriptedMenu CreateScriptedMenu(int id) {
        UIScriptedMenu menu = null;
        menu = super.CreateScriptedMenu(id);

        if (!menu) {
            switch (id) {
                case PassUI.PASSPORTMENU:
                    {
                        menu = new PassportMenu();
                        break;
                    }
                case PassUI.PERMITMENU:
                    {
                        menu = new PozwolenieMenu();
                        break;
                    }
            }
            if (menu) {
                menu.SetID(id);
            }
        }
        return menu;
    }

    // override void OnKeyPress(int key) {
    //     CodeLockMenu menu;
        
    //     if (key == KeyCode.KC_ESCAPE) {
    //         menu = CodeLockMenu.Cast(GetUIManager().GetMenu());

    //         if (menu) {
    //             menu.Close();
    //             return;
    //         }
    //     } else if (key == KeyCode.KC_RETURN || key == KeyCode.KC_NUMPADENTER) {
    //         menu = CodeLockMenu.Cast(GetUIManager().GetMenu());

    //         if (menu) {
    //             if (SetCodeMenu.Cast(menu)) {
    //                 menu.CheckState();
    //             } else {
    //                 menu.SendRPC();
    //             }
    //             return;
    //         }
    //     }
    //     super.OnKeyPress(key);
    //     m_Hud.KeyPress(key);
    // }
}