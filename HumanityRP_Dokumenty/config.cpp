class CfgPatches
{
	class HumanityRP_Dokumenty
	{
		units[] = {"HRP_BlankPassport","HRP_Passport","HRP_BlankPermit","HRP_Permit"};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts"};
	};
};
class CfgMods
{
	class HumanityRP_Dokumenty
	{
		dir = "HumanityRP_Dokumenty";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HumanityRP_Dokumenty";
		credits = "KekFish";
		author = "KekFish";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		dependencies[] = {"World","gui","Mission"};
		class defs
		{
			class imageSets
			{
				files[] = {""};
			};
			class gameScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Dokumenty/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Dokumenty/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Dokumenty/5_Mission"};
			};
		};
	};
};
class CfgVehicles
{
	class Inventory_Base;
	class HRP_BlankPassport: Inventory_Base
	{
		scope = 2;
		displayName = "Pusty Dokument Tożsamości";
		descriptionShort = "Pusty dokument tożsamości gotowy do wypełnienia.";
		model = "HumanityRP_11\HumanityRP_Textures\data\dokument.p3d";
		rotationFlags = 1;
		animClass = "Knife";
		itemSize[] = {1,1};
		weight = 50;
		fragility = 0.01;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HumanityRP_11\HumanityRP_Textures\data\dowod.paa"};
	};
	class HRP_Passport: HRP_BlankPassport
	{
		scope = 2;
		displayName = "Dokument Tożsamości";
		descriptionShort = "Dokument Tożsamośći wypełniony danymi osobistymi właściciela.";
		model = "HumanityRP_11\HumanityRP_Textures\data\dokument.p3d";
		rotationFlags = 1;
		animClass = "Knife";
		itemSize[] = {1,1};
		weight = 50;
		fragility = 0.01;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HumanityRP_11\HumanityRP_Textures\data\dowod.paa"};
	};
	class HRP_BlankPermit: HRP_BlankPassport
	{
		scope = 2;
		displayName = "Puste Pozwolenie";
		descriptionShort = "Puste pozwolenie gotowe do wypełnienia.";
		model = "HumanityRP_11\HumanityRP_Textures\data\dokument.p3d";
		rotationFlags = 1;
		animClass = "Knife";
		itemSize[] = {1,1};
		weight = 50;
		fragility = 0.01;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HumanityRP_11\HumanityRP_Textures\data\pozwolenie.paa"};
	};
	class HRP_Permit: HRP_BlankPermit
	{
		scope = 2;
		displayName = "Pozwolenie";
		descriptionShort = "Pozwolenie wypełnione danymi osobistymi właściciela.";
		model = "HumanityRP_11\HumanityRP_Textures\data\dokument.p3d";
		rotationFlags = 1;
		animClass = "Knife";
		itemSize[] = {1,1};
		weight = 50;
		fragility = 0.01;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HumanityRP_11\HumanityRP_Textures\data\pozwolenie.paa"};
	};
};
