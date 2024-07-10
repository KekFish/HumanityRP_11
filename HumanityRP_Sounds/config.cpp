class CfgPatches
{
	class HumanityRP_Sounds
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Sounds_Effects"};
	};
};
class CfgMods
{
	class HumanityRP_Sounds
	{
		dir = "HumanityRP_11/HumanityRP_Sounds";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HumanityRP_Sounds";
		credits = "KekFish";
		author = "KekFish";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs=""; //This it path to the inputs.xml for defining your keybinds more to follow on this part
		dependencies[] = {"World","gui","Mission"};
		class defs
		{
			
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Sounds/4_World"};
			};
			
		};
	};
};




class CfgVehicles
{



};
class CfgSoundSets
{
	class baseCharacter_SoundSet;
	class StashSearch_SoundSet: baseCharacter_SoundSet
	{
		soundShaders[] = {"StashSearch_SoundShader"};
	};
	class WaterSplash_SoundSet
	{
		soundShaders[] = {"WaterSplash_SoundShader"};
	};
};
class CfgSoundShaders
{
	class baseCharacter_SoundShader;
	class StashSearch_SoundShader: baseCharacter_SoundShader
	{
		samples[] = {

			{"HumanityRP_11\HumanityRP_Sounds\sounds\stashsearch1",1},
			{"HumanityRP_11\HumanityRP_Sounds\sounds\stashsearch2",1},
			{"HumanityRP_11\HumanityRP_Sounds\sounds\stashsearch3",1}
		
		};
		volume = 1.0;
		range = 10;
		rangeCurve[] = {{0,1},{0.5,0.7},{1,0}};
	};
	class WaterSplash_SoundShader
	{
		samples[] = {{"HumanityRP_11\HumanityRP_Sounds\sounds\WaterSplash",1}};
		volume = 1;
		range = 60;
	};
	
	
};