class CfgPatches
{
	class HumanityRP_Items
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Gear_Tools",
			"DZ_Gear_Consumables",
			"DZ_Data",
			"DZ_Weapons_Archery"
		};
	};
};
class cfgWeapons
{
	class Archery_Base;
	class Crossbow_Base: Archery_Base
	{
	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints=100;
				};
			};
		};

	};
};
class CfgVehicles
{
    class SewingKit;
	class LeatherSewingKit;
	class WeaponCleaningKit;
	class NailBox;
    class hrp_SewingKit: SewingKit
	{
		displayName="Lepszy zestaw do szycia";
		varQuantityInit=125;
		varQuantityMin=0;
		varQuantityMax=125;
	};
	class hrp_LeatherSewingKit: LeatherSewingKit
	{
		displayName="Lepszy zestaw do skór";
		varQuantityInit=125;
		varQuantityMin=0;
		varQuantityMax=125;
	};
	class hrp_WeaponCleaningKit: WeaponCleaningKit
	{
		displayName="Lepszy zestaw do czyszczenia broni";
		varQuantityInit=125;
		varQuantityMin=0;
		varQuantityMax=125;
	};
	class hrp_NailBox: NailBox {

		displayName="Większe pudełko gwoździ";

		class Resources
		{
			class Nail
			{
				value=99;
				variable="quantity";
			};
		};

	};
	class Inventory_Base;
	class GasMask_Filter: Inventory_Base
	{
		varQuantityInit=300;
		varQuantityMin=0;
		varQuantityMax=300;
		
	};
	class ItemMap: Inventory_Base
	{
		inventorySlot[] += {"mapbag","map","ChernarusMap"};

	};
	class InjectorBase;
	class Hrp_Amnesiac: InjectorBase
	{		
		scope = 2;
		displayName = "Amnesiac";
		model = "\dz\gear\medical\morphine.p3d";
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HumanityRP_11\HumanityRP_Textures\data\amnesiac_co.paa"};
		overdosedIncrement = 10.0;
	};
};