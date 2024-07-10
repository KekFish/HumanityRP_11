class CfgPatches
{
	class HumanityRP_Groups
	{
		units[]=
		{
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Gear_Camping",
			"DZ_Characters_Tops",
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
		};
	};
};
class CfgVehicles
{
	class Clothing;
	class Loftd_CHRSAT_plate: Clothing
	{
		scope=2;
		weight=7000;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 225;
					transferToAttachmentsCoef = 0.5;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.75;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.55;
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
						damage = 0;
					};
					class Shock
					{
						damage = 0.55;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.5;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
		};
	};
  	class hrp_kamza_wojsko: Loftd_CHRSAT_plate
	{

		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Grupy\data\kamza_wojsko_co.paa",
			"HumanityRP_11\HumanityRP_Grupy\data\kamza_wojsko_co.paa",
			"HumanityRP_11\HumanityRP_Grupy\data\kamza_wojsko_co.paa"
		};

	};
	class Loftd_Middletopbag;
	class hrp_kamza_kieszen_wojsko: Loftd_Middletopbag
	{

		hiddenSelectionsTextures[]=
		{
			"HumanityRP_11\HumanityRP_Grupy\data\kieszenlekka_wojsko_co.paa",
			"HumanityRP_11\HumanityRP_Grupy\data\kieszenlekka_wojsko_co.paa",
			"HumanityRP_11\HumanityRP_Grupy\data\kieszenlekka_wojsko_co.paa"
		};

	};

};