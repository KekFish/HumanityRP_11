class CfgPatches
{
	class HumanityRP_ItemFixes
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Weapons_Optics",
			"DZ_Weapons_Magazines",
			"DZ_Characters_Belts",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Firearms_B95",
			"DZ_Weapons_Firearms_SKS",
			"DZ_Weapons_Shotguns_MP133",
			"nm_Crafting_Part_Bushcrafting_Models",
			"Loftd_backpacks",
			"Loftd_belts",
			"Loftd_bijouterie",
			"Loftd_cloaks",
			"Loftd_gear",
			"Loftd_glasses",
			"Loftd_gloves",
			"Loftd_headgear",
			"Loftd_masks",
			"Loftd_pants",
			"Loftd_shoes",
			"Loftd_tops",
			"Loftd_vests",
			"Loftd_Weapons",
			"DZ_Weapons_Melee_Blunt",
			"DZ_Weapons_Shotguns_Izh43"
		};
	};
};
class CfgMods
{
	class HumanityRP_ItemFixes
	{
		dir = "HumanityRP_ItemFixes";
		picture = "";
		action = "";
		hideName = 1;
		hidePicture = 1;
		name = "HumanityRP_ItemFixes";
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
				files[] = {"HumanityRP_11/HumanityRP_ItemFixes/4_World"};
			};
			
		};
	};
};
class CfgAmmo
{
	class LandMineExplosion;
	class MeleeSword;
	class MeleeSharpLight_4;
	class MeleeSharpHeavy_4;
	class Explosion_NonLethal: LandMineExplosion
	{
		hit=0;
		indirectHit=0.5;
		indirectHitRange=2;
		particle="explosion_landmine_01";
		explosive=1;
		typicalSpeed=3;
		initSpeed=3;
		fuseDistance=1;
		simulation="shotShell";
		simulationStep=0.050000001;
		soundSetExplosion[]=
		{
			"Landmine_Explosion_SoundSet",
			"Landmine_Explosion_Tail_SoundSet"
		};
		class DamageApplied
		{
			type="FragGrenade";
			bleedThreshold=1;
			class Health
			{
				damage=13;
			};
			class Blood
			{
				damage=100;
			};
			class Shock
			{
				damage=100;
			};
		};
		class NoiseExplosion
		{
			strength=200;
			type="sound";
		};
	};

	class MeleeKatanaSword_New: MeleeSharpLight_4
	{
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 30;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 14;
			};
		};
	};
	class MeleeKatanaSword_Heavy_New: MeleeSharpHeavy_4
	{
		hitAnimation = 1;
		class DamageApplied
		{
			type = "Melee";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 60;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 20;
			};
		};
	};
};
class cfgWeapons
{
	class Izh43Shotgun_Base;
	class SawedoffIzh43Shotgun: Izh43Shotgun_Base
	{

		inventorySlot[] += {"weaponsbag","Shoulder","Melee","wbelt_back","wbelt_back_right","wbelt_front","wbelt_right", "Shoulder1","Shoulder2","Shoulder3","Shoulder4","Shoulder5","Shoulder6","Shoulder7","Shoulder8","Shoulder9","Shoulder10","Shoulder11","Shoulder12","Shoulder13","Shoulder14","Shoulder15","Shoulder16","Shoulder17","Shoulder18","Shoulder19","Shoulder20","Shoulder21","Shoulder22","Shoulder23","Shoulder24","Shoulder25","Shoulder26","Shoulder27","Shoulder28","Shoulder29","Shoulder30"};

	};

};
class CfgVehicles
{
	class Clothing_Base;
	class Clothing;
	class SewingKit;
	class HouseNoDestruct;
	class Machete;
	class MiniDress_ColorBase;
	class Sweater_ColorBase: Clothing
	{
		heatIsolation = 1.0;

	};
	class MiniDress_Christmas: MiniDress_ColorBase
	{

		heatIsolation = 1.0;
		
	};
	class MiniDress_Merry: MiniDress_ColorBase
	{
		
		heatIsolation = 1.0;
		
	};
	class ChristmasHeadband_ColorBase: Clothing
	{
		
		heatIsolation = 1.0;
	
	};
	class Switchable_Base;
	class Headtorch_ColorBase: Switchable_Base
	{
		repairableWithKits[] = {7};
		repairCosts[] = {25.0};
	};
	class Loftd_dragonkatana: Machete
	{

		repairableWithKits[] = {};
		repairCosts[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1250;
				};
			};
		};

		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKatanaSword_New";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeKatanaSword_Heavy_New"; 
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeKatanaSword_Heavy_New";
				range = 3.7;
			};
		};
	};
	class Loftd_michonnekatana: Machete
	{
		repairableWithKits[] = {};
		repairCosts[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1250;
				};
			};
		};

		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKatanaSword_New";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeKatanaSword_Heavy_New"; 
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeKatanaSword_Heavy_New";
				range = 3.7;
			};
		};
	};
	class Loftd_sakurakatana: Machete
	{
		repairableWithKits[] = {};
		repairCosts[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 1250;
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeKatanaSword_New";
				range = 1.8;
			};
			class Heavy
			{
				ammo = "MeleeKatanaSword_Heavy_New"; 
				range = 1.8;
			};
			class Sprint
			{
				ammo = "MeleeKatanaSword_Heavy_New";
				range = 3.7;
			};
		};
	};
	class nm_impr_Sewingkit: SewingKit
	{
		rotationFlags = 2;
	};
	class LeatherSewingKit;
	class nm_impr_Leathersewingkit: LeatherSewingKit
	{
		
		rotationFlags = 2;
	};
	class Inventory_Base;
	class PipeWrench: Inventory_Base
	{
		lockSoundSet="wrench_loop_SoundSet";

	};
	class CJ_Materials_Glass : Inventory_Base {
		itemSize[] = {2, 2};
	};
	class FreezeGrindingStone: Inventory_Base
	{

		itemsCargoSize[]={0,0};

	};
	class FreezeAnvil: Inventory_Base
	{

		itemsCargoSize[]={0,0};

	};
	class CP_DryPost : Inventory_Base
    {
    	itemsCargoSize[]={0,0};
	};
	class Hatchet;
	class Loftd_tacticalaxe: Hatchet
	{	
		weight = 2000;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_2";
				range= 1.7;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_2";
				range= 1.7;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_2";
				range= 3.4;
			};
		};
	};
	class Loftd_roughsword: Machete
	{
		weight = 2500;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 300;
				};
			};
		};
		isMeleeWeapon = 1;
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_4";
				range=1.8;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=1.8;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=3.6;
			};
		};
	};
	class BaseballBat;
	class BBP_Golf: BaseballBat
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_3";
				range=2;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_3";
				range=2;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_3";
				range=4;
			};
		};
	};
	class SeaChest;
	class ammoWorkbenchEmpty: SeaChest
	{
		displayName = "Empty Ammo Making Workbench";
		
	};
	class ammoWorkbenchPressAttached: SeaChest
	{
		displayName = "Ammo Making Workbench with Press";

	};
	class ammoWorkbenchScalePressAttached: SeaChest
	{
		displayName = "Ammo Making Workbench with press and scale";
	};
	class ammoWorkbenchScale: SeaChest
	{
		displayName = "Ammo Making Workbench with scale";

	};
	class ammoWorkbenchFunnel: SeaChest
	{
		displayName = "Ammo Making Workbench with funnel";

	};
	class ammoWorkbenchScaleFunnel: SeaChest
	{
		displayName = "Ammo Making Workbench with scale/funnel";
	};
	class ammoWorkbenchPressFunnel: SeaChest
	{
		displayName = "Ammo Making Workbench with press and funnel";
	};
	class ammoWorkbenchCompleted: SeaChest
	{
		displayName = "Completed Ammo Making Workbench";
	};
	class ADM_Compressor_Static: HouseNoDestruct
	{
		scope = 0;
	};
	class ADM_Compressor: Inventory_Base
	{
		repairableWithKits[] = {};
		repairCosts[] = {};
		class EnergyManager
		{
			hasIcon = 1;
			energyUsagePerSecond = 0.5;
			cordLength = 5;
			plugType = 2;
			compatiblePlugTypes[] = {4,6};
			powerSocketsCount = 2;
			wetnessExposure = 0.1;
		};
		
	};

	class SmershVest: Clothing
	{
		inventorySlot[] = {"Vest"};
		weight = 220;
		itemSize[] = {3,3};
		itemsCargoSize[] = {6,5};
		quickBarBonus = 2;
		varWetMax = 0.49;
		heatIsolation = 0.1;
		repairableWithKits[] = {3};
		repairCosts[] = {25.0};
		visibilityModifier = 0.7;
	};

	class SurgicalGloves_ColorBase: Clothing
	{
		inventorySlot[] += {"Gloves","pgloves"};
	};



	class AthleticShoes_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 120;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\data\athleticShoes.rvmat"}},{0.7,{"DZ\characters\shoes\data\athleticShoes.rvmat"}},{0.5,{"DZ\characters\shoes\data\athleticShoes_damage.rvmat"}},{0.3,{"DZ\characters\shoes\data\athleticShoes_damage.rvmat"}},{0.0,{"DZ\characters\shoes\data\athleticShoes_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.95;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.95;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
		
	};
	class HikingBoots_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 220;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\hikingBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\hikingBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\hikingBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\hikingBoots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\hikingBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
			};
		};
	};
	class HikingBootsLow_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 180;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\hikingBoots_low.rvmat"}},{0.7,{"DZ\characters\shoes\Data\hikingBoots_low.rvmat"}},{0.5,{"DZ\characters\shoes\Data\hikingBoots_low_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\hikingBoots_low_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\hikingBoots_low_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.95;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 1;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
	};
	class WorkingBoots_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 180;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\WorkingBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\WorkingBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\WorkingBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\WorkingBoots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\WorkingBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
	};
	class JungleBoots_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 240;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\JungleBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\JungleBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\JungleBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\JungleBoots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\JungleBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
	};
	class DressShoes_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 90;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},{0.7,{"DZ\characters\shoes\Data\LeatherShoes.rvmat"}},{0.5,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\LeatherShoes_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\LeatherShoes_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.95;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.95;
					};
				};
			};
		};
	};
	class MilitaryBoots_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\MilitaryBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\MilitaryBoots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\MilitaryBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
		
	};
	class CombatBoots_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 240;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\CombatBoots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\CombatBoots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\CombatBoots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\CombatBoots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\CombatBoots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.6;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
			};
		};
	};
	class JoggingShoes_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\JoggingShoes.rvmat"}},{0.7,{"DZ\characters\shoes\Data\JoggingShoes.rvmat"}},{0.5,{"DZ\characters\shoes\Data\JoggingShoes_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\JoggingShoes_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\JoggingShoes_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.95;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.95;
					};
				};
			};
		};
	};
	class Sneakers_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 110;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\data\Sneakers.rvmat"}},{0.7,{"DZ\characters\shoes\data\Sneakers.rvmat"}},{0.5,{"DZ\characters\shoes\data\Sneakers_damage.rvmat"}},{0.3,{"DZ\characters\shoes\data\Sneakers_damage.rvmat"}},{0.0,{"DZ\characters\shoes\data\Sneakers_destruct.rvmat"}}};
				};
			};
		};
	};
	class NBCBootsBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 110;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\data\NBC_Boots.rvmat"}},{0.7,{"DZ\characters\shoes\data\NBC_Boots.rvmat"}},{0.5,{"DZ\characters\shoes\data\NBC_Boots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\data\NBC_Boots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\data\NBC_Boots_destruct.rvmat"}}};
				};
			};
		};
	};
	class FeetCover_Improvised: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 30;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\data\feetCover_improvised.rvmat"}},{0.7,{"DZ\characters\shoes\data\feetCover_improvised.rvmat"}},{0.5,{"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"}},{0.3,{"DZ\characters\shoes\data\feetCover_improvised_damage.rvmat"}},{0.0,{"DZ\characters\shoes\data\feetCover_improvised_destruct.rvmat"}}};
				};
			};
		};
	};
	class TTSKOBoots: Clothing
	{	
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\data\TTsKO_boots.rvmat"}},{0.7,{"DZ\characters\shoes\data\TTsKO_boots.rvmat"}},{0.5,{"DZ\characters\shoes\data\TTsKO_boots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\data\TTsKO_boots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\data\TTsKO_boots_destruct.rvmat"}}};
				};
			};
		};
	};
	class MedievalBoots: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 180;
					healthLevels[] = {{1.0,{"DZ\characters\shoes\Data\medievalboots.rvmat"}},{0.7,{"DZ\characters\shoes\Data\medievalboots.rvmat"}},{0.5,{"DZ\characters\shoes\Data\medievalboots_damage.rvmat"}},{0.3,{"DZ\characters\shoes\Data\medievalboots_damage.rvmat"}},{0.0,{"DZ\characters\shoes\Data\medievalboots_destruct.rvmat"}}};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.85;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.85;
					};
					class Blood
					{
						damage = 0.8;
					};
					class Shock
					{
						damage = 0.8;
					};
				};
			};
		};
	};


};

