class CfgPatches
{
	class hrp_characters_pants
	{
		units[]=
		{
			"hrp_gw_usmc_pants"
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
    class USMCPants_ColorBase;
    class hrp_gw_usmc_pants: USMCPants_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\pants\data\hrp_gw_usmc_pants_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\pants\data\hrp_gw_usmc_pants_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\pants\data\hrp_gw_usmc_pants_co.paa"
		};
	};
};