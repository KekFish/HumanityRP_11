	ref TStringArray LoadingScreenArray = {
	"HumanityRP_11/HumanityRP_Gui/data/loading/1.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/2.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/3.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/4.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/5.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/6.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/7.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/7.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/8.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/9.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/10.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/11.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/12.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/13.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/14.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/15.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/16.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/17.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/18.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/19.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/20.edds",
	// "HumanityRP_11/HumanityRP_Gui/data/loading/21.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/22.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/23.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/24.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/25.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/26.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/27.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/28.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/29.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/30.edds",
	// // "HumanityRP_11/HumanityRP_Gui/data/loading/31.edds",
	};
modded class VPPATUIConstants
{

	const static string MenuPlayerManager 			 = "HumanityRP_11/HumanityRP_Gui/layouts/vpp_playermanager.layout";

};
modded class LoadingScreen
{
	void LoadingScreen(DayZGame game)
	{
		m_DayZGame = game;

		m_WidgetRoot = game.GetLoadingWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Gui/layouts/loading.layout");
		Class.CastTo(m_ImageLogoMid, m_WidgetRoot.FindAnyWidget("ImageLogoMid"));
		Class.CastTo(m_ImageLogoCorner, m_WidgetRoot.FindAnyWidget("ImageLogoCorner"));

		Class.CastTo(m_TextWidgetTitle, m_WidgetRoot.FindAnyWidget("TextWidget"));
		Class.CastTo(m_TextWidgetStatus, m_WidgetRoot.FindAnyWidget("StatusText"));
		Class.CastTo(m_ImageWidgetBackground, m_WidgetRoot.FindAnyWidget("ImageBackground"));
		Class.CastTo(m_ImageLoadingIcon, m_WidgetRoot.FindAnyWidget("ImageLoadingIcon"));
		Class.CastTo(m_ModdedWarning, m_WidgetRoot.FindAnyWidget("ModdedWarning"));

		m_ImageBackground = ImageWidget.Cast(m_WidgetRoot.FindAnyWidget("ImageBackground"));
		m_ProgressLoading = ProgressBarWidget.Cast(m_WidgetRoot.FindAnyWidget("LoadingBar"));

		string tmp;
		m_ProgressText = TextWidget.Cast(m_WidgetRoot.FindAnyWidget("ProgressText"));
		if (GetGame())
		{
			m_ProgressText.Show(GetGame().CommandlineGetParam("loadingTest", tmp));
		}
		m_WidgetRoot.FindAnyWidget("notification_root").Show(false);

		if (m_ModdedWarning) m_ModdedWarning.Show(g_Game.ReportModded());
		if (m_ImageLogoMid) m_ImageLogoMid.Show(true);
		if (m_ImageLogoCorner) m_ImageLogoCorner.Show(false);

		if (m_ImageWidgetBackground) m_ImageWidgetBackground.Show(true);
		m_Counter = 0;

		// lighten up your desktop
		game.GetBacklit().LoadingAnim();

		ProgressAsync.SetProgressData(m_ProgressLoading);
		ProgressAsync.SetUserData(m_ImageBackground);
	}

	override void Show()
	{
		super.Show();
        //m_ImageLogoMid.Show(false);
		m_ImageLogoCorner.Show(false);	    	
		//m_ModdedWarning.Show(false); // Show / Hide - Modded version warning // 1.17 OK
		string index = LoadingScreenArray.GetRandomElement();
		m_ImageBackground.LoadImageFile(0, index);  
	}
};

modded class LoginTimeBase
{
	override Widget Init()
	{
		layoutRoot 			= GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Gui/layouts/dialog_login_time.layout");

		m_txtDescription 	= TextWidget.Cast(layoutRoot.FindAnyWidget("txtDescription"));
		m_txtLabel 			= TextWidget.Cast(layoutRoot.FindAnyWidget("txtLabel"));
		m_btnLeave 			= ButtonWidget.Cast(layoutRoot.FindAnyWidget("btnLeave"));
		m_txtDescription.Show(true);
		layoutRoot.FindAnyWidget("notification_root").Show(false);

		return layoutRoot;
	}

	override void Show()
    {
        super.Show();
        if (layoutRoot)
        {
          
            ImageWidget background = ImageWidget.Cast( layoutRoot.FindAnyWidget("Background"));
            string index = LoadingScreenArray.GetRandomElement();
			background.LoadImageFile(0, index);    
        }
    }
};

modded class LoginQueueBase
{
	override Widget Init()
	{
		layoutRoot 		= GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Gui/layouts/dialog_queue_position.layout");
		m_HintPanel	= new UiHintPanelLoading(layoutRoot.FindAnyWidget("hint_frame0"));
		m_txtPosition	= TextWidget.Cast(layoutRoot.FindAnyWidget("txtPosition"));
		m_txtNote 		= TextWidget.Cast(layoutRoot.FindAnyWidget("txtNote"));
		m_btnLeave 		= ButtonWidget.Cast(layoutRoot.FindAnyWidget("btnLeave"));
		m_txtNote.Show(true);
		layoutRoot.FindAnyWidget("notification_root").Show(false);

		// ImageWidget m_ImageBackground = ImageWidget.Cast(layoutRoot.FindAnyWidget("ImageBackground"));
		// m_ImageBackground.LoadImageFile(0, "HumanityRP_11/HumanityRP_Gui/data/loading/kolejka.edds");  


		return layoutRoot;
	}
};


modded class UiHintPanel extends ScriptedWidgetEventHandler
{	
	protected const string 			m_DataPath			= "HumanityRP_11/HumanityRP_Gui/hints.json";						// Json path
}








	