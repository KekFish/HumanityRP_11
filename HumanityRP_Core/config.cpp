class CfgPatches
{
	class HumanityRP_Core
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data","DZ_Scripts","SyberiaScripts","InediaInfectedAI","DZM_VPPAdminTools"};
	};
};
class CfgMods
{

	class HumanityRP_Core
	{
		dir = "HumanityRP_Core";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HumanityRP_Core";
		credits = "KekFish";
		author = "KekFish";
		authorID = "0";
		version = "1.0";
		extra = 0;
		type = "mod";
		inputs="HumanityRP_11/HumanityRP_Core/inputs.xml"; //This it path to the inputs.xml for defining your keybinds more to follow on this part
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
				files[] = {"HumanityRP_11/HumanityRP_Core/3_Game"};
			};
			class worldScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Core/4_World"};
			};
			class missionScriptModule
			{
				value = "";
				files[] = {"HumanityRP_11/HumanityRP_Core/5_Mission"};
			};
		};
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class FirearmHit_Pistol: MeleeDamage
	{
		class DamageApplied
		{
			class Health
			{
				damage = 2.5;
			};
			class Shock
			{
				damage = 75;
			};
		};
	};
	class FirearmHit_Rifle: MeleeDamage
	{
		class DamageApplied
		{
			class Health
			{
				damage = 5;
			};
			class Shock
			{
				damage=75;
			};
		};
	};
	class FirearmHit_Rifle_Buttstock: FirearmHit_Rifle
	{
		class DamageApplied
		{
			class Health
			{
				damage = 5;
			};
			class Shock
			{
				damage=100;
			};
		};
	};
};
class CfgWorlds
{
	class DefaultWorld;
	class CAWorld: DefaultWorld
	{
		class DefaultClutter;
		class Clutter
		{
			class Anthoxanthum: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Anthoxanthum_bended: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Calamagrostis: DefaultClutter
			{
				scaleMin = 0.6;
				scaleMax = 0.8;
			};
			class Carduus: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Carduus_f: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Elytrigia: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class ElytrigiaGreen: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class ElytrigiaTall: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Hypericum: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Hypericum_f: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Lolium: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Taraxacum: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class ConcreteGrass: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class DirtGrass: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class ElytrigiaDirt: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Cones: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class ElytrigiaForest: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Leafs_spread: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.7;
			};
			class Broadleaf_Undergrowth: DefaultClutter
			{
				scaleMin = 0.1;
				scaleMax = 0.5;
			};
			class Broadleaf_Undergrowth_Red: DefaultClutter
			{
				scaleMin = 0.1;
				scaleMax = 0.5;
			};
			class c_Broadleaf_Sprouts: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.4;
			};
			class c_Broadleaf_Sprouts_Tall: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class SmallPicea: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Polypodiophyta: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Polypodiophyta_b: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Polypodiophyta_c: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class PolypodiophytaTall: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Vaccinium: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class VacciniumGreen: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class VacciniumRed: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class VacciniumTall: DefaultClutter
			{
				scaleMin = 0.3;
				scaleMax = 0.6;
			};
			class Twigs: DefaultClutter
			{
				mscaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Twigs_b: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.5;
			};
			class Wheat_summer: DefaultClutter
			{
				scaleMin = 0.25;
				scaleMax = 0.5;
			};
			class WheatTall_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 1.0;
			};
			class Stubble_summer: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.8;
			};
			class Vaccinium_summer: DefaultClutter
			{
				scaleMin = 0.3;
				scaleMax = 0.5;
			};
			class Fern_summer: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.6;
			};
			class FernTall_summer: DefaultClutter
			{
				scaleMin = 0.35;
				scaleMax = 0.5;
			};
			class branches_picea_summer: DefaultClutter
			{
				scaleMin = 0.3;
				scaleMax = 0.45;
			};
			class branches_picea_deforested_summer: DefaultClutter
			{
				scaleMin = 0.85;
				scaleMax = 1.5;
			};
			class branchesBig_picea_summer: DefaultClutter
			{
				scaleMin = 0.3;
				scaleMax = 0.4;
			};
			class branchesBig_picea_deforested_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 0.75;
			};
			class branches_deciduous_summer: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.6;
			};
			class Pines_summer: DefaultClutter
			{
				scaleMin = 0.25;
				scaleMax = 0.65;
			};
			class Cones_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 0.5;
			};
			class leaves_dead_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class leaves_dead_half_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class plantsSmall1_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class plantsSmall2_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassSmall_summer: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.8;
			};
			class GrassTiny_summer: DefaultClutter
			{
				scaleMin = 0.4;
				scaleMax = 0.8;
			};
			class beech_big_summer: DefaultClutter
			{
				scaleMin = 0.2;
				scaleMax = 0.45;
			};
			class beech_mid_summer: DefaultClutter
			{
				scaleMin = 0.35;
				scaleMax = 0.7;
			};
			class beech_small_summer: DefaultClutter
			{
				scaleMin = 0.35;
				scaleMax = 0.7;
			};
			class GrassPlant1_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassPlant2_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class Grass_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassLow_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassAnthoxanthum_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassAnthoxanthum_bended_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassTall2_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 1.25;
			};
			class GrassTall3_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 1.25;
			};
			class Grass_flower1_summer: DefaultClutter
			{
				scaleMin = 0.6;
				scaleMax = 1.15;
			};
			class GrassDry_summer: DefaultClutter
			{
				scaleMin = 0.32;
				scaleMax = 1.0;
			};
			class GrassDry2_summer: DefaultClutter
			{
				scaleMin = 0.32;
				scaleMax = 1.0;
			};
			class GrassDry3_summer: DefaultClutter
			{
				scaleMin = 0.32;
				scaleMax = 1.0;
			};
			class GrassDryPlant1_summer: DefaultClutter
			{
				scaleMin = 0.45;
				scaleMax = 0.9;
			};
			class GrassDryTall_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 1.25;
			};
			class GrassDryTall2_summer: DefaultClutter
			{
				scaleMin = 0.5;
				scaleMax = 1.25;
			};
			class GrassBaseHypericum_summer: DefaultClutter
			{
				scaleMin = 0.32;
				scaleMax = 1.0;
			};
	
		};
	};
	class Enoch: CAWorld
	{
		clutterGrid = 1.5;
		clutterDist = 100;
		noDetailDist = 5;
		fullDetailDist = 2;
	};
};
class CfgVehicles
{
	class DayZInfected;
	class ZombieBase: DayZInfected
	{
		class Cargo
		{
			itemsCargoSize[] = {6,5};
		};
	};
	class HouseNoDestruct;
	class vfx_the_thing: HouseNoDestruct
	{
		hiddenSelections[] = {"wormhole"};
		hiddenSelectionsTextures[] = {""};
		hiddenSelectionsMaterials[] = {""};
	};
	class Inventory_Base;
	class SmallProtectorCase;
	class ChernarusMap;
	class RostowMap: ChernarusMap
	{
		scope=2;
		displayName="Rostow Map Edition 1";
		descriptionShort="A complete map of Rostow.";
	};
	class TannedLeather: Inventory_Base
	{
		varQuantityInit = 8;
		varQuantityMin = 0;
		varQuantityMax = 8;
	};
	class Paper : Inventory_Base {
    canBeSplit = 0;
    varQuantityInit = 1;
    varQuantityMin = 0;
    varQuantityMax = 1;
    varQuantityDestroyOnMin = 1;
	};
	class BarrelHoles_ColorBase;
	class FishingRod_Base_New;
	class nm_Firebowl: BarrelHoles_ColorBase
	{

		scope = 0;

	};
	class FishingRod: FishingRod_Base_New
	{
		repairableWithKits[]={8,5};
		repairCosts[]={25,25};
		
	};
	class hrp_CassetteCase: SmallProtectorCase
	{

		scope = 2;
		displayName = "$STR_Case";
		descriptionShort = "$STR_Case_desc";
		model = "\dz\gear\tools\cleaning_kit_wood.p3d";
		animClass = "Knife";
		rotationFlags = 17;
		quantityBar = 0;
		weight = 580;
		itemSize[] = {2,3};
		itemsCargoSize[] = {10,5};
		fragility = 0.01;
		hiddenSelections[] = {"zbytek"};
		hiddenSelectionsTextures[] = {"HumanityRP_Radio\CassetteCase\data\cassette_case.paa"};
		hiddenSelectionsMaterials[] = {"HumanityRP_Radio\CassetteCase\data\cassette_case.rvmat"};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] = {{1.0,{"HumanityRP_Radio\CassetteCase\data\cassette_case.rvmat"}},{0.7,{"HumanityRP_Radio\CassetteCase\data\cassette_case.rvmat"}},{0.5,{"HumanityRP_Radio\CassetteCase\data\cassette_case_damage.rvmat"}},{0.3,{"HumanityRP_Radio\CassetteCase\data\cassette_case_damage.rvmat"}},{0.0,{"HumanityRP_Radio\CassetteCase\data\cassette_case_destruct.rvmat"}}};
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeLightBlunt";
				range = 1;
			};
			class Heavy
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 1;
			};
			class Sprint
			{
				ammo = "MeleeLightBlunt_Heavy";
				range = 2.8;
			};
		};

	};
	class Clothing;
	class CJ_Materials_Glass : Inventory_Base {
		itemSize[] = {2, 2};
	};
	class HuntingVest: Clothing
	{
		itemsCargoSize[]={5,4};
	};
	class LeatherStorageVest_ColorBase: Clothing
	{
		itemsCargoSize[]={5,3};
	};
	class TentBase;
	class ShelterBase: TentBase
	{
		
		itemsCargoSize[]={5,8};
		
	};
};

class CfgNonAIVehicles
{
	
};