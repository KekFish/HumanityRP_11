class cfgPatches
{
	class hroleplay_Medical_Config
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Medical"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Defibrillator: Inventory_Base
	{
		itemSize[] = {2,2};
		weight = 300;
	};
};
