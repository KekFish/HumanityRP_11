class cfgPatches
{
	class hroleplay_Navigation_Config
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Gear_Navigation"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Compass: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 20;
	};
	class OrienteeringCompass: Inventory_Base
	{
		itemSize[] = {1,1};
		weight = 20;
	};
};
