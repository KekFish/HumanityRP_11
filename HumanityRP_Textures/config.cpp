////////////////////////////////////////////////////////////////////
//DeRap: config.bin
//Produced from mikero's Dos Tools Dll version 9.36
//https://mikero.bytex.digital/Downloads
//'now' is Mon Feb 26 15:05:50 2024 : 'file' last modified on Mon Feb 26 15:05:50 2024
////////////////////////////////////////////////////////////////////

#define _ARMA_

class CfgPatches
{
	class HumanityRP_Textures
	{
		units[] = {""};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","DZ_Gear_Camping","DZ_Sounds_Effects"};
	};
};
class CfgMods
{
	class HumanityRP_Sounds
	{
		dir = "HumanityRP_11\HumanityRP_Textures";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HumanityRP_Textures";
		credits = "KekFish";
		author = "KekFish";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs = "";
		dependencies[] = {"World","gui","Mission"};
		class defs{};
	};
};
class CfgVehicles
{
};
class CfgSoundShaders
{
	class ControllerPsiAttackSoundShader
	{
		samples[] = {{"HumanityRP_11\HumanityRP_Textures\sounds\psiattack",1.0}};
		volume = 0.6;
		range = 75;
	};
};
