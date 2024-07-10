class CfgPatches
{
	class HumanityRP_Melee_Fix
	{
		units[]=
		{

		};
		weapons[]={};
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Weapons_Melee",
			"DZ_Weapons_Melee_Blade",
			"DZ_Data",
			"DZ_Weapons_Projectiles",
			"DZ_Weapons_Firearms"
		};
	};
};
class CfgVehicles
{
	class Sledgehammer;
	class Hatchet;
	class Firefighteraxe;
	class Woodaxe;
	class Machete;
	class hrp_hammer: Hatchet
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_4";
				range=1.6;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_4";
				range=1.6;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_4";
				range=3.5;
			};
		};
	};
	class hrp_axe_saw: Woodaxe
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeWAxeLight";
				range=2;
			};
			class Heavy
			{
				ammo="MeleeWAxelHeavy";
				range=2;
			};
			class Sprint
			{
				ammo="MeleeWAxelHeavy";
				range=3.9000001;
			};
		};
	};
	class hrp_axe: Firefighteraxe
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_5";
				range=1.9;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_5";
				range=1.9;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_5";
				range=3.8;
			};
		};
	};
	class hrp_hammer_saw: Sledgehammer
	{
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
				range=3.8;
			};
		};
	};
	class hrp_handsaw_wrench: Hatchet
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_5";
				range=1.5;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_5";
				range=1.5;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_5";
				range=3.4000001;
			};
		};
	};
	class hrp_axe_knife: Hatchet
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_4";
				range=1.5;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_4";
				range=1.5;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_4";
				range=3.4000001;
			};
		};
	};
	class hrp_hatchet_modded: Hatchet
	{
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeSharpLight_3";
				range=1.5;
			};
			class Heavy
			{
				ammo="MeleeSharpHeavy_3";
				range=1.5;
			};
			class Sprint
			{
				ammo="MeleeSharpHeavy_3";
				range=3.4000001;
			};
		};
	};
	class hrp_sledgehammer: Sledgehammer
	{
		
		class MeleeModes
		{
			class Default
			{
				ammo="MeleeBluntLight_5";
				range=1.9;
			};
			class Heavy
			{
				ammo="MeleeBluntHeavy_5";
				range=1.9;
			};
			class Sprint
			{
				ammo="MeleeBluntHeavy_5";
				range=3.8;
			};
		};
	};
	class Inventory_Base;
	class WoodenStick: Inventory_Base
	{
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBluntLight_1";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBluntHeavy_1";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBluntHeavy_1";
				range = 2.0;
			};
		};
	};
	class LongWoodenStick: Inventory_Base
	{
		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 20;
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeBluntLight_1";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeBluntHeavy_1";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeBluntHeavy_1";
				range = 2.0;
			};
		};
	};
	class SharpWoodenStick: Inventory_Base
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 60;
				};
			};
		};
		class MeleeModes
		{
			class Default
			{
				ammo = "MeleeSharpLight_1";
				range = 1.0;
			};
			class Heavy
			{
				ammo = "MeleeSharpHeavy_1";
				range = 1.0;
			};
			class Sprint
			{
				ammo = "MeleeSharpHeavy_1";
				range = 2.0;
			};
		};
	};

};
