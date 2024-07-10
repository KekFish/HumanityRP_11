class CfgPatches
{
	class hrp_characters_tops
	{
		units[]=
		{
			"hrp_gw_usmc_jacket"
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
    class USMCJacket_ColorBase;
	class ParamedicJacket_ColorBase;
	class TShirt_ColorBase;
    class BaseballCap_ColorBase;
    class hrp_gw_usmc_jacket: USMCJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\hrp_gw_usmc_jacket_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\hrp_gw_usmc_jacket_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\hrp_gw_usmc_jacket_co.paa"
		};
	};
	class hrp_ParamedicJacket_Red: ParamedicJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_crimson_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_crimson_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_crimson_co.paa"
		};
	};
	class hrp_ParamedicJacket_Green: ParamedicJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_green_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_green_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_green_co.paa"
		};
	};
	class hrp_ParamedicJacket_Blue: ParamedicJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_blue_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_blue_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_blue_co.paa"
		};
	};
	class hrp_ParamedicJacket: ParamedicJacket_ColorBase
	{
		scope=2;
		visibilityModifier=0.60000002;
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_beige.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_beige.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\paramedic_jacket_beige.paa"
		};
	};
    class hrp_koszulek: TShirt_ColorBase
    {
		scope=2;
		visibilityModifier=0.94999999;
		displayName="Humanity T-Shirt";
		descriptionShort="Humanity";
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\tshirt_ground_black_co.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\Humanityshirt.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\Humanityshirt.paa"
		};
    };
    class hrp_czapek: BaseballCap_ColorBase
	{
		scope=2;
		visibilityModifier=0.94999999;
        displayName="Humanity Czapek";
        descriptionShort="Humanity";
		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Clothing\tops\data\humanitycap.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\humanitycap.paa",
			"HumanityRP_11\HumanityRP_Clothing\tops\data\humanitycap.paa"
		};
	};
};