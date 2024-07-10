class CfgPatches
{
	class HumanityRP_Stash
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
			{
				
				"DZ_Data","DZ_Scripts","DZ_Gear_Camping","LoftDmodGR_Core","LoftdmodGR_scripts"

			};
	};
};

class CfgMods {
	class HumanityRP_Stash {
		type = "mod";
    

		class defs {

			class gameScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Stash/scripts/3_Game"};
			};

			class worldScriptModule {
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Stash/scripts/4_World"};
			};
			
			class missionScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Stash/scripts/5_Mission"};
			};
		
		};
	};
};


class CfgSlots
{

};

class CfgVehicles
{
	class Container_Base;
	class HRP_Stash_Base: Container_Base
	{
		scope = 0;
		displayName = "Schowek";
		descriptionShort = "Ktoś ukrył przedmioty w tym schowku.";
		canBeDigged = 0;
		heavyItem = 1;
		weight = 100000;
		itemSize[] = {40,40};
		itemBehaviour = 0;
		allowOwnedCargoManipulation = 1;
		class Cargo
		{
			itemsCargoSize[] = {10,10};
		};
	};
	class HRP_Stash_BlueBox: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\BlueBox.p3d";
	};

	class HRP_Stash_BoxMetal: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_metall.p3d";
	};

	class HRP_Stash_WoodenBox2: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_vood2.p3d";
	};

	class HRP_Stash_Kladka: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\Kladka_MK.p3d";
	};

	class HRP_Stash_Krest: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\krest.p3d";
	};

	class HRP_Stash_Krest2: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\krest_an.p3d";
	};

	class HRP_Stash_Pen: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\pen.p3d";
	};

	class HRP_Stash_Safe: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\safe1.p3d";
	};

	class HRP_Stash_Truba: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\truba.p3d";
	};

	class HRP_Stash_WoodenBox: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_vood.p3d";
	};

	class HRP_Stash_WoodenBox_Contaminated: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_vood.p3d";
	};

	class HRP_Stash_WoodenBox_Bunkier: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_vood.p3d";
	};

	class HRP_Stash_WoodenBox_Alcatraz: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_vood.p3d";
	};

	class HRP_Stash_WoodenBox_Area42: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\box_vood.p3d";
	};

	class HRP_Stash_GreenBox: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\GreanBox.p3d";
	};

	class HRP_Stash_Backpack: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\Rukzak.p3d";
	};

	class HRP_Stash_Backpack_Oilrig: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\Rukzak.p3d";
	};

	class HRP_Stash_Backpack_Contaminated: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\Rukzak.p3d";
	};

	class HRP_Stash_Backpack_DE: HRP_Stash_Base
	{
		scope = 2;
		model = "\ShronyStalker\Shrony\Rukzak.p3d";
	};

};
