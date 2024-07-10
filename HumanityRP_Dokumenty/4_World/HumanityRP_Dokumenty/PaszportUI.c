class PassportMenuBase extends UIScriptedMenu {


	protected MultilineEditBoxWidget m_Name;
	protected MultilineEditBoxWidget m_Surname;
	protected MultilineEditBoxWidget m_DoB;
	protected MultilineEditBoxWidget m_Citizen;
	protected MultilineEditBoxWidget m_Add;
	protected MultilineEditBoxWidget m_Add0;
	protected MultilineEditBoxWidget m_Add1;
	protected MultilineEditBoxWidget m_Add2;
	protected MultilineEditBoxWidget m_Add3;
	protected MultilineEditBoxWidget m_Add4;
	protected MultilineEditBoxWidget m_Add5;
	protected MultilineEditBoxWidget m_Add6;
	protected ButtonWidget m_confirm_button;
	protected HRP_BlankPassport m_Passport;
	protected EntityAI m_Pen;
	protected bool m_IsWriting;
	//protected int m_Handwriting;
	protected int m_SymbolCount;
	protected int m_Color;
	ref map<string, string>		m_Data = new map<string, string>;

	ref PassportDataTransfer m_PassportData = new PassportDataTransfer();
	protected string 	name = "";
	protected string 	surname = "";
	protected string 	dob = "";
	protected string 	citizen = "";
	protected string 	add = "";
	protected string 	add0 = "";
	protected string 	add1 = "";
	protected string 	add2 = "";
	protected string 	add3 = "";
	protected string 	add4 = "";
	protected string 	add5 = "";
	protected string 	add6 = "";
	
	PlayerBase player;


	void SetTarget(HRP_BlankPassport target)
	{
		m_Passport = target;
	
	}

	void SetData(PassportDataTransfer data)
	{
		m_PassportData = data;
	
	}

	void InitPassportRead()
	{
		m_IsWriting = false;
		
		m_Name.Show(true);
		m_Surname.Show(true);
		m_DoB.Show(true);
		m_Citizen.Show(true);
		m_Add.Show(true);
		m_Add0.Show(true);
		m_Add1.Show(true);
		m_Add2.Show(true);
		m_Add3.Show(true);
		m_Add4.Show(true);
		m_Add5.Show(true);
		m_Add6.Show(true);

		m_Name.SetText( m_PassportData.Name );
		m_Surname.SetText( m_PassportData.Surname );
		m_DoB.SetText( m_PassportData.DoB );
		m_Citizen.SetText( m_PassportData.Citizen );
		m_Add.SetText( m_PassportData.Add );
		m_Add0.SetText( m_PassportData.Add0 );
		m_Add1.SetText( m_PassportData.Add1 );
		m_Add2.SetText( m_PassportData.Add2 );
		m_Add3.SetText( m_PassportData.Add3 );
		m_Add4.SetText( m_PassportData.Add4 );
		m_Add5.SetText( m_PassportData.Add5 );
		m_Add6.SetText( m_PassportData.Add6 );
		

		


		GetGame().GetUIManager().ShowCursor(false);
	}
 
	void InitPassportWrite()
	{

		m_IsWriting = true;
			
		m_Name.Enable(true);
		m_Surname.Enable(true);
		m_DoB.Enable(true);
		m_Citizen.Enable(true);
		m_Add.Enable(true);
		m_Add0.Enable(true);
		m_Add1.Enable(true);
		m_Add2.Enable(true);
		m_Add3.Enable(true);
		m_Add4.Enable(true);
		m_Add5.Enable(true);
		m_Add6.Enable(true);
				
		m_Name.Show(true);
		m_Surname.Show(true);
		m_DoB.Show(true);
		m_Citizen.Show(true);
		m_Add.Show(true);
		m_Add0.Show(true);
		m_Add1.Show(true);
		m_Add2.Show(true);
		m_Add3.Show(true);
		m_Add4.Show(true);
		m_Add5.Show(true);
		m_Add6.Show(true);

		m_Name.SetText("");
		m_Surname.SetText("");
		m_DoB.SetText("");
		m_Citizen.SetText("");
		m_Add.SetText("");
		m_Add0.SetText("");
		m_Add1.SetText("");
		m_Add2.SetText("");
		m_Add3.SetText("");
		m_Add4.SetText("");
		m_Add5.SetText("");
		m_Add6.SetText("");	
		
		GetGame().GetUIManager().ShowUICursor( true );
	} 

    void SaveMessage()
	{

		if (m_Passport && m_IsWriting)
		{
			m_Name.GetText(m_PassportData.Name);
			m_Surname.GetText(m_PassportData.Surname);
			m_DoB.GetText(m_PassportData.DoB);
			m_Citizen.GetText(m_PassportData.Citizen);
			m_Add.GetText(m_PassportData.Add);
			m_Add0.GetText(m_PassportData.Add0);
			m_Add1.GetText(m_PassportData.Add1);
			m_Add2.GetText(m_PassportData.Add2);
			m_Add3.GetText(m_PassportData.Add3);
			m_Add4.GetText(m_PassportData.Add4);
			m_Add5.GetText(m_PassportData.Add5);
			m_Add6.GetText(m_PassportData.Add6);
			
	
		
	
			auto params = new Param3<HRP_BlankPassport, PassportDataTransfer, PlayerBase>(m_Passport, m_PassportData, PlayerBase.Cast(GetGame().GetPlayer()));
	
            GetGame().RPCSingleParam(player, PassRPC.SAVEPASSPORT, params, true);
		
            //GetGame().GetUIManager().HideScriptedMenu(this);
			
		}
	}

	override void Update( float timeslice )
	{
		super.Update( timeslice );
		
		if( GetGame() && GetGame().GetInput() && GetGame().GetInput().LocalPress("UAUIBack", false) )
		{	
			GetGame().GetUIManager().ShowUICursor( false );
			SaveMessage();
			Close();
		}
	}
	
	override private void LockControls()
    {
        GetGame().GetMission().PlayerControlDisable(INPUT_EXCLUDE_ALL);
        GetGame().GetUIManager().ShowUICursor( true );
        GetGame().GetMission().GetHud().Show( false );
    }

    override private void UnlockControls()
    {
        GetGame().GetMission().PlayerControlEnable(false);
        GetGame().GetInput().ResetGameFocus();
        //GetGame().GetUIManager().ShowUICursor( false );
        GetGame().GetMission().GetHud().Show( true );
    }

}

class PassportMenu extends PassportMenuBase
{

	
    override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Dokumenty/data/paszport.layout");
		m_Name = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextName"));
		m_Surname = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextSurname"));
		m_DoB = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextDoB"));
		m_Citizen = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextCitizen"));
		m_Add = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd"));
		m_Add0 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd0"));
		m_Add1 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd1"));
		m_Add2 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd2"));
		m_Add3 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd3"));
		m_Add4 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd4"));
		m_Add5 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd5"));
		m_Add6 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd6"));

		return layoutRoot;
		
	}
}

class PozwolenieMenu extends PassportMenuBase
{

	
    override Widget Init()
	{
		layoutRoot = GetGame().GetWorkspace().CreateWidgets("HumanityRP_11/HumanityRP_Dokumenty/data/pozwolenie.layout");
		m_Name = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextName"));
		m_Surname = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextSurname"));
		m_DoB = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextDoB"));
		m_Citizen = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextCitizen"));
		m_Add = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd"));
		m_Add0 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd0"));
		m_Add1 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd1"));
		m_Add2 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd2"));
		m_Add3 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd3"));
		m_Add4 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd4"));
		m_Add5 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd5"));
		m_Add6 = MultilineEditBoxWidget.Cast(layoutRoot.FindAnyWidget("TextAdd6"));

		return layoutRoot;
		
	}
}
