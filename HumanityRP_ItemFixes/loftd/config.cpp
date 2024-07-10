class CfgPatches
{
	class HumanityRP_LOFTD_FIX
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {
			"DZ_Data",
			"DZ_Characters_Backpacks",
			"DZ_Weapons_Optics",
			"DZ_Characters_Headgear",
			"DZ_Weapons_Magazines",
			"DZ_Characters_Belts",
			"DZ_Weapons_Projectiles",
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
			"Loftd_Weapons"
		};
	};
};

class CfgVehicles
{
    class Clothing;
    class TaloonBag_ColorBase;
	class Hoodie_Blue;
	class Loftd_blackpants_ColorBase: Clothing
	{

		itemsCargoSize[] = {5,4};

	};
	class Loftd_carharttpants_ColorBase: Clothing
	{

		itemsCargoSize[] = {5,5};

	};
	class Loftd_IronsightBoots_ColorBase: Clothing
	{

		itemsCargoSize[] = {0,0};

	};
	class Loftd_CHRSAT_pants: Clothing
	{
		itemsCargoSize[] = {6,5};
	};
	class Loftd_coloradojacket;
	class Loftd_coloradojacket_dark: Loftd_coloradojacket
	{
		scope = 2;
		itemsCargoSize[] = {7,6};
	};
	class Loftd_coloradojacket_G63: Loftd_coloradojacket
	{
		scope = 2;
		itemsCargoSize[] = {7,6};
	};
	class Loftd_coloradojacket_camogr: Loftd_coloradojacket
	{
		scope = 2;
		itemsCargoSize[] = {7,6};
	};
	class Loftd_coloradojacket_camogr2: Loftd_coloradojacket
	{
		scope = 2;
		itemsCargoSize[] = {7,6};
	};
	class Loftd_coloradopants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_coloradopants_bl: Loftd_coloradopants_ColorBase
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_coloradopants_camogr: Loftd_coloradopants_ColorBase
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_coloradopants_G63: Loftd_coloradopants_ColorBase
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_jeanspants_ColorBase: Clothing
	{

		itemsCargoSize[] = {5,4};

	};
	class Loftd_Leggings_ColorBase: Clothing
	{

		itemsCargoSize[] = {5,4};

	};
	class Loftd_urbanpants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_dawnpants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,5};
	};
	class Loftd_Sheriffpants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_blacksuitpants: Clothing
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_Michonnepants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_akito_pants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,4};
	};
	class Loftd_wdpants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,4};
	
	};
    class Loftd_slackerbag_ColorBase: TaloonBag_ColorBase
	{

        itemsCargoSize[] = {7,9};
    };
    class Loftd_survivorbag_ColorBase: TaloonBag_ColorBase
	{
        itemsCargoSize[] = {7,7};
    };
    class Loftd_travelsbag_ColorBase: TaloonBag_ColorBase
	{
        itemsCargoSize[] = {7,9};
    };
    class Loftd_valeriebag_ColorBase: TaloonBag_ColorBase
	{
        itemsCargoSize[] = {7,7};
    };
    class Loftd_leathergloves_ColorBase: Clothing
	{
        heatIsolation = 0.5;
    };
    class Loftd_Arcpants_ColorBase: Clothing
	{
         itemsCargoSize[] = {6,5};
    };
    class Loftd_cargopants_ColorBase: Clothing
	{
        itemsCargoSize[] = {6,4};
    };
    class Loftd_jeans: Clothing
	{
        heatIsolation = 0.5;
    };
    class Loftd_ririteopants_ColorBase: Clothing
	{
        heatIsolation = 0.4;
        itemsCargoSize[] = {5,4};
    };
    class Loftd_tifan_ColorBase: Clothing
	{
        itemsCargoSize[] = {6,4};
    };
	class Loftd_CHRSAT_jacket;
    class Loftd_westpants_ColorBase: Clothing
	{
        itemsCargoSize[] = {6,5};
    };
    class Loftd_acronym_ColorBase: Clothing
	{
        itemsCargoSize[] = {8,5};
    };
    class Loftd_aidansuit_pants_ColorBase: Clothing
	{
        heatIsolation = 0.4;
        itemsCargoSize[] = {5,4};
    };
    class Loftd_roadiessuit_pants_ColorBase: Clothing
	{
        heatIsolation = 0.4;
        itemsCargoSize[] = {5,5};
    };
	class Loftd_militaryvestCIRAS_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 350;
					transferToAttachmentsCoef = 0.5;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
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
						damage = 0.26;
					};
				};
			};
		};
	};
	class Loftd_militarySvest_ColorBase: Clothing
	{
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
						damage = 0.3;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
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
						damage = 0.26;
					};
				};
			};
		};
	};
	class Loftd_CHRSAT_plate: Clothing
	{

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
						damage = 0.4;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.6;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.3;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class FragGrenade
				{
					class Health
					{
						damage = 0.6;
					};
					class Blood
					{
						damage = 0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};

	};
	class Loftd_Puffervest_ColorBase: Clothing
	{
		itemsCargoSize[] = {5,4};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
	};
	class Loftd_dixonvest_ColorBase: Clothing
	{
		itemSize[] = {4,3};
		itemsCargoSize[] = {5,4};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;								
					
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
	};
	class Loftd_akito_bag: Clothing
	{
		itemsCargoSize[] = {5,5};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};

	};
    class Loftd_bloodvest_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,5};
		quickBarBonus = 3;
		varWetMax = 0.79;
		heatIsolation = 0.5;
        class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
	};
	class Loftd_civilvest_ColorBase: Clothing
	{
		itemsCargoSize[] = {4,3};
		heatIsolation = 0.7;
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
		
	};
	class Loftd_huntervest_ColorBase: Clothing
	{
		itemsCargoSize[] = {4,5};		
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
	};
	class Loftd_cloak_ColorBase: Clothing
	{
		heatIsolation = 0.6;
		attachments[] = {};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 250;
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 1;
					};
					class Blood
					{
						damage = 1;
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
						damage = 1;
					};
					class Blood
					{
						damage = 1;
					};
					class Shock
					{
						damage = 1;
					};
				};
			};
		};
	};
	class MotoHelmet_ColorBase;
	class Loftd_footballhelmet: MotoHelmet_ColorBase
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.75;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.9;
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
						damage = 0.0;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.75;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
			};
		};

	};
	class Mich2001Helmet;
	class Loftd_Ironsighthelmet: Mich2001Helmet
	{

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};

	};
	class Loftd_Ironsighthelmettactic: Mich2001Helmet
	{

		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 80;
				};
			};
			class GlobalArmor
			{
				class Projectile
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.5;
					};
				};
				class Melee
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.25;
					};
					class Blood
					{
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.25;
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
						damage = 0.0;
					};
					class Shock
					{
						damage = 0.26;
					};
				};
			};
		};

	};
	class Loftd_Ironsightpants_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,5};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage = 0.9;
					};
				};
				class Melee
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
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class FragGrenade
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
						damage = 0.9;
					};
				};
			};
		};
	};
	class Loftd_Ironsightpantsv2_ColorBase: Clothing
	{
		itemsCargoSize[] = {6,5};
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage = 0.9;
					};
				};
				class Melee
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
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class FragGrenade
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
						damage = 0.9;
					};
				};
			};
		};
	};
	class Loftd_Ironsightpantsv3_ColorBase: Clothing
	{
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 200;
				};
			};
			class GlobalArmor
			{
				class Projectile
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
						damage = 0.9;
					};
				};
				class Melee
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
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class FragGrenade
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
						damage = 0.9;
					};
				};
			};
		};
	};
	
};