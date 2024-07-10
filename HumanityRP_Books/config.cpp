
class CfgPatches
{
	class hrp_zombies
	{
		units[]=
		{
			"Hermit_NewAI"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Zombies"
		};
	};
};
class CfgVehicles
{
    class ItemBook;
    class hrp_Book_Base: ItemBook
    {

        descriptionShort="Może uda się coś z tego nauczyć...";

    };
    class hrp_Book_odpornosc: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Jak dbać o swoja odporność?";
        skillname="odpornosc";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_odpornosc_co.paa"
        };
    };
class hrp_Book_lekkoatletyka: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Umysł mistrza";
        skillname="lekkoatletyka";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_lekoatletyka_co.paa"
        };
    };
class hrp_Book_sila: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Zacznij od siły";
        skillname="sila";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_sila_co.paa"
        };
    };
class hrp_Book_medycyna: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Prawdziwy lekarz bedzie za chwile";
        skillname="medycyna";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_medycyna_co.paa"
        };
    };
class hrp_Book_skradanie: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Porandik Skradania";
        skillname="skradanie";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_skradanie_co.paa"
        };
    };
class hrp_Book_przetrwanie: hrp_Book_Base
    {
        scope=2;
        displayName="Książka PRZETRWAĆ!";
        skillname="przetrwanie";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_przetrwanie_co.paa"
        };
    };
class hrp_Book_rolnik: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Żyj jak rolnik";
        skillname="rolnictwo";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_rolnik_co.paa"
        };
    };
class hrp_Book_mysliwstwo: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Poradnik Myśliwego";
        skillname="myslistwo";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_mysliwstwo_co.paa"
        };
    };
class hrp_Book_wedkarz: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Atlas Wędkarski";
        skillname="wedkarz";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_wedkarstwo_co.paa"
        };
    };
class hrp_Book_stolarstwo: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Stolarstwo";
        skillname="stolarstwo";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_stolarstwo_co.paa"
        };
    };
class hrp_Book_inzynier: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Poradnik Inżyniera";
        skillname="inzynier";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_inzyneria_co.paa"
        };
    };
class hrp_Book_krawiec: hrp_Book_Base
    {
        scope=2;
        displayName="Książka Poradnik Krawca";
        skillname="inzynier";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_krawiec_co.paa"
        };
    };
class hrp_Book_rusznikarz: hrp_Book_Base
    {
        scope=2;
        displayName="Poradnik Rusznikarstwa";
        skillname="inzynier";
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Books\data\book_rusnikarz_co.paa"
        };
    };
};