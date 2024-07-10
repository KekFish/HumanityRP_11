class cfgPatches
{
	class hroleplay_Radio_Config
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Radio"};
	};
};
class cfgVehicles
{
	class Inventory_Base;
	class Transmitter_Base: Inventory_Base
	{
		scope = 0;
	};
	class PersonalRadio: Transmitter_Base
	{
		itemSize[] = {1,2};
		weight = 42;
		attachments[] = {"BatteryD"};
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
		class EnergyManager
		{
			hasIcon = 1;
			autoSwitchOff = 1;
			energyUsagePerSecond = 0.005;
			plugType = 1;
			attachmentAction = 1;
			wetnessExposure = 0.1;
		};
	};
	class Megaphone: Inventory_Base
	{
		itemSize[] = {2,2};
		weight = 600;
	};
};
