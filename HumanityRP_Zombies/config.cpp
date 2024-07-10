
class CfgPatches
{
	class hrp_zombies
	{
		units[]=
		{
			"Hermit_NewAI"
		};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Characters",
			"DZ_Characters_Zombies"
		};
	};
};
class CfgVehicles
{
    class ZmbM_NBC_Yellow;
    class hrp_ZmbM_NBC_Red: ZmbM_NBC_Yellow
    {
        scope = 2;
        hiddenSelections[] = {"camo","zbytek"};
        hiddenSelectionsTextures[]=
        {
            "HumanityRP_11\HumanityRP_Zombies\data\nbcinfected_red_co.paa",
            "HumanityRP_11\HumanityRP_Zombies\data\nbcinfected_red_co.paa"
        };
    };
    class ZmbM_ConstrWorkerNormal_Base;
    class hrp_ZmbM_ConstrWorkerNormal_Kamieniorz: ZmbM_ConstrWorkerNormal_Base
	{
		scope = 2;
		hiddenSelectionsTextures[] = {"HumanityRP_11\HumanityRP_Zombies\data\hrp_constructionworker_normal_m_beige_co.paa"};
	};
};