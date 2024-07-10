class CfgPatches
{
	class DZ_Weapons_Melee_Fix
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Weapons_Melee"};
	};
};
class CfgAmmo
{
	class MeleeDamage;
	class MeleeZombie: MeleeDamage
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.27;
			class Health
			{
				damage = 5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 5;
			};
			class Shock
			{
				damage = 10;
			};
		};
	};
	class MeleeZombieMale: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.25;
			class Health
			{
				damage = 7.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieMaleLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.25;
			class Health
			{
				damage = 7.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieFemale: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 7.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieFemaleLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.15;
			class Health
			{
				damage = 7.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 10;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieSoldier: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.3;
			class Health
			{
				damage = 10;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 15;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieSoldierLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.35;
			class Health
			{
				damage = 10;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 15;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombiePolice: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.3;
			class Health
			{
				damage = 10;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 15;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombiePoliceLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.35;
			class Health
			{
				damage = 10;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 15;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieFirefighter: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.3;
			class Health
			{
				damage = 10;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 15;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieFirefighterLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.35;
			class Health
			{
				damage = 10;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 15;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeZombieMummy: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.75;
			class Health
			{
				damage = 10;
				armorDamage = 2.0;
			};
			class Blood
			{
				damage = 75;
			};
			class Shock
			{
				damage = 35;
			};
		};
	};
	class MeleeZombieMummyLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 10;
				armorDamage = 2.0;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
	};
	class MeleeInfected: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.16;
			class Health
			{
				damage = 6.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 12;
			};
		};
	};
	class MeleeInfectedLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.16;
			hitAnimation = 1;
			class Health
			{
				damage = 8.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 12;
			};
		};	
	};
	class MeleePoliceInfected: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			class Health
			{
				damage = 8;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 12;
			};
		};
	};
	class MeleePoliceInfectedLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.2;
			hitAnimation = 1;
			class Health
			{
				damage = 8;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 15;
			};
		};
	};
	class MeleeSoldierInfected: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.22;
			class Health
			{
				damage = 8.5;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 12;
			};
		};
	};
	class MeleeSoldierInfectedLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 0.22;
			hitAnimation = 1;
			class Health
			{
				damage = 11;
				armorDamage = 0.6;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 16;
			};
		};
	};
	class MeleeMummyInfected: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 1.0;
			class Health
			{
				damage = 10;
				armorDamage = 2.0;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
	};
	class MeleeMummyInfectedLong: MeleeZombie
	{
		class DamageApplied
		{
			type = "Infected";
			bleedThreshold = 1.0;
			hitAnimation = 1;
			class Health
			{
				damage = 10;
				armorDamage = 2.0;
			};
			class Blood
			{
				damage = 100;
			};
			class Shock
			{
				damage = 35;
			};
		};
	};
};