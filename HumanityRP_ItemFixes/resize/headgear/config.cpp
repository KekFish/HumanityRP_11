class cfgPatches
{
	class hroleplay_Headgear_Config
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Characters_Headgear"};
	};
};
class cfgVehicles
{
	class Switchable_Base;
	class Headtorch_ColorBase: Switchable_Base
	{
		itemSize[] = {1,1};
		weight = 50;
	};
};
