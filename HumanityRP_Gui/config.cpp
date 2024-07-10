class CfgPatches
{
    class hrp_gui
    {
        units[] = {};
        weapons[] = {};
        requiredVersion = 0.1;
        requiredAddons[]=
        {
            "DZ_Data","DayZExpansion_Scripts","DayZExpansion_Chat_Scripts"
        };
    };
};

class CfgMods
{
	class hrp_gui
	{
        dir = "HumanityRP_11/HumanityRP_Gui";
        picture = "";
        action = "";
        hideName = 1;
        hidePicture = 1;
        name = "HumanityRP Custom GUI";
        credits = "https://humanityrp.pl";
        author = "MrKamil404";
        authorID = "";
        version = "1.0";
        extra = 0;
        type = "mod";
        dependencies[]=
        {
            "Game",
            "Mission"
        };
        class defs
        {
            class imageSets
            {
                files[] =
                {
                    "HumanityRP_11/HumanityRP_Gui/data/imagesets/gui.imageset",
                    "HumanityRP_11/HumanityRP_Gui/data/imagesets/hrp_logo.imageset"
                };
            };
            class widgetStyles
            {
                files[] =
                {
                    "HumanityRP_11/HumanityRP_Gui/data/styles/hrp_styles.styles"
                };
            };
            class gameScriptModule
            {
            	value="";
            	files[]=
            	{
            		"HumanityRP_11/HumanityRP_Gui/scripts/3_Game"
            	};
            };
            class worldScriptModule
            {
            	value="";
            	files[]=
            	{
            		"HumanityRP_11/HumanityRP_Gui/scripts/4_World"
            	};
            };
            class missionScriptModule
            {
                value="";
                files[]=
                {
                    "HumanityRP_11/HumanityRP_Gui/scripts/5_Mission"
                };
            };
        };
    };
};