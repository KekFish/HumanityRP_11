class CfgPatches
{
	class hrp_characters_headgear
	{
		units[] =
		{
			"hrp_policecap",
			"hrp_sheriffhat",
			"hrp_gw_baseballcap",
			"hrp_gw_ballistichelmet"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters"
		};
	};
};
class CfgVehicles
{
    class PoliceCap;
	class BaseballCap_ColorBase;
	class BallisticHelmet_ColorBase;
    class CowboyHat_ColorBase;
    class hrp_policecap: PoliceCap
    {
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_policecap_co.paa",
            "HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_policecap_co.paa",
            "HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_policecap_co.paa"
        };
    };
    class hrp_sheriffhat: CowboyHat_ColorBase
	{
		displayName="$STR_hrp_sheriffhat0";
		descriptionShort="$STR_hrp_sheriffhat1";
		scope=2;
		color="Brown";
		visibilityModifier=0.85000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_sheriffhat_brown_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_sheriffhat_brown_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_sheriffhat_brown_co.paa"
		};
	};
	class hrp_gw_baseballcap: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.80000001;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_gw_baseballcapii_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_gw_baseballcapii_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_gw_baseballcapii_co.paa"
		};
	};
	class hrp_gw_ballistichelmet: BallisticHelmet_ColorBase
	{
		scope=2;
		visibilityModifier=0.69999999;
		color="Green";
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_gw_ballistichelmet_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_gw_ballistichelmet_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\headgear\data\hrp_gw_ballistichelmet_co.paa"
		};
	};
};