class CfgPatches
{
	class HumanityRP_Resources
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","HumanityRP_Core"};
	};
};
class CfgMods
{

	class HumanityRP_Resources
	{
		dir = "HumanityRP_Resources";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HumanityRP_Resources";
		credits = "KekFish";
		author = "KekFish";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","gui","Mission"};
		class defs
		{
			class gameScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Resources/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Resources/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Resources/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{

	class Land_Misc_Well_Pump_Yellow;
	class Land_Misc_Well_Pump_Blue;
	class HRP_Land_Misc_Well_Pump_Yellow: Land_Misc_Well_Pump_Yellow {};
	class HRP_Land_Misc_Well_Pump_Blue: Land_Misc_Well_Pump_Blue {};
	
};