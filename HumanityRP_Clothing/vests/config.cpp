class CfgPatches
{
	class hrp_characters_vests
	{
		units[]=
		{
			"hrp_gw_ukassvest"
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
    class UKAssVest_ColorBase;
	class ReflexVest;
    class hrp_gw_ukassvest: UKAssVest_ColorBase
	{
		scope=2;
		visibilityModifier=0.5;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_gw_ukassvest_ground_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_gw_ukassvest_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_gw_ukassvest_co.paa"
		};
	};
    class hrp_BIO: ReflexVest
    {
        displayName="Biuro Interwencji obywatelskich HUMANITY";
        descriptionShort="HUMANITY NAJLEPSZY SERWER";
        weight=1;
        itemSize[]={1,1};
        itemsCargoSize[]={10,40};
        heatIsolation=1.0;
		hiddenSelections[]=
		{
			"camoGround",
			"camoMale",
			"camoFemale",
			"zbytek"
		};
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_bio.paa",
            "HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_bio.paa",
			"HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_bio.paa",
            "HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_bio.paa",
            "HumanityRP_11\HumanityRP_Clothing\vests\data\hrp_bio.paa"
        };
    };
};