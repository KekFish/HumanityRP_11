class CfgPatches
{
	class HumanityRP_BaseStuff
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]={"DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class HumanityRP_BaseStuff
	{
		dir="HumanityRP_BaseStuff";
		picture="";
		action="";
		hideName=1;
		hidePicture=1;
		name="HumanityRP_BaseStuff";
		credits="KekFish";
		author="KekFish";
		authorID="0";
		version="0.1";
		extra=0;
		type="mod";
		dependencies[]=
		{
			"World",
		};
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_BaseStuff/4_World"};
			};
		};
	};
};


class CfgVehicles
{ 


};