class CfgPatches {
	class SyberiaScripts {
        units[] = {};
		requiredAddons[] = {"DZ_Data", "DZ_Scripts", "DZ_Gear_Medical","DZ_Gear_Tools", "DZ_Gear_Consumables","SyberiaScripts_gui"};
	};
};

class CfgMods {
	class SyberiaScripts {
		type = "mod";

		class defs {
			class gameScriptModule {
				value = "";
				files[] = {"HumanityRP_11/syb/scripts/3_Game"};
			};

			class worldScriptModule {
				value = "";
				files[] = {"HumanityRP_11/syb/scripts/4_World"};
			};

			class imageSets {
				files[] = { };
			};
		};
	};
};