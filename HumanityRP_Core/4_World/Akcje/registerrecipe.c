modded class PluginRecipesManager 
{
	override void RegisterRecipies()
	{	
		super.RegisterRecipies();
		
		RegisterRecipe(new HRP_MilkBottle);
		RegisterRecipe(new CraftSurgicalKit);
		RegisterRecipe(new GunPowderFromAmmo);



		UnregisterRecipe("Craft_IWPBatSpiked");
		UnregisterRecipe("Craft_IWPBatBarbed");
//pistol
		UnregisterRecipe("Craft_Pistol01_Grip");
		UnregisterRecipe("Craft_Pistol01_Barrel");
		UnregisterRecipe("Craft_Pistol01_Body");
		UnregisterRecipe("Craft_Pistol01_Trigger");
		UnregisterRecipe("Craft_Pistol01_Complete");
//SMG
		UnregisterRecipe("Craft_SMG01_Barrel");
		UnregisterRecipe("Craft_SMG01_Barrel_2");
		UnregisterRecipe("Craft_SMG01_Bolt");
		UnregisterRecipe("Craft_SMG01_Frame");
		UnregisterRecipe("Craft_SMG01_Frame_2");
		UnregisterRecipe("Craft_SMG01_Grip");
		UnregisterRecipe("Craft_SMG01_Magazine");
		UnregisterRecipe("Craft_SMG01_Complete");
//shotgun
		UnregisterRecipe("Craft_Shotgun01_Barrel");
		UnregisterRecipe("Craft_Shotgun01_Barrel_2");
		UnregisterRecipe("Craft_Shotgun01_Grip");
		UnregisterRecipe("Craft_Shotgun01_BarrelShroud");
		UnregisterRecipe("Craft_Shotgun01_Frame");
		UnregisterRecipe("Craft_Shotgun01_Frame_2");
		UnregisterRecipe("Craft_Shotgun01_Triggers");
		UnregisterRecipe("Craft_Shotgun01_Complete");
//Pistol Shotgun
		UnregisterRecipe("Craft_PistolShotgun_Trigger");
		UnregisterRecipe("Craft_PistolShotgun_BodyAssembly");
		UnregisterRecipe("Craft_PistolShotgun_Barrel");
		UnregisterRecipe("Craft_PistolShotgun_Frame");
		UnregisterRecipe("Craft_PistolShotgun_FrameAssemlby");
		UnregisterRecipe("Craft_PistolShotgun_Complete");
//Bolt-Action Rifle
		UnregisterRecipe("Craft_BAR01_Barrel");
		UnregisterRecipe("Craft_BAR01_Body");
		UnregisterRecipe("Craft_BAR01_Bolt");
		UnregisterRecipe("Craft_BAR01_Chamber");
		UnregisterRecipe("Craft_BAR01_ChamberBolt");
		UnregisterRecipe("Craft_BAR01_ChamberBolt_Trigger");
		UnregisterRecipe("Craft_BAR01_ChamberTrigger");
		UnregisterRecipe("Craft_BAR01_ChamberTrigger_Bolt");
		UnregisterRecipe("Craft_BAR01_Grip");
		UnregisterRecipe("Craft_BAR01_Complete_Short");
		UnregisterRecipe("Craft_BAR01_Stock");
		UnregisterRecipe("Craft_BAR01_TriggerAssembly");
		UnregisterRecipe("Craft_BAR01_Complete");
//cangrenade
		UnregisterRecipe("Craft_CanGrenade_PowderShrapnet");
		UnregisterRecipe("Craft_CanGrenade_Fuse");
		UnregisterRecipe("Craft_EmptyCan_Cola");
		UnregisterRecipe("Craft_EmptyCan_Fronta");
		UnregisterRecipe("Craft_EmptyCan_Pipsi");
		UnregisterRecipe("Craft_EmptyCan_Kvass");
		UnregisterRecipe("Craft_EmptyCan_Spite");
		UnregisterRecipe("Craft_PrepCanGrenade_Spite");
		UnregisterRecipe("Craft_PrepCanGrenade_Fronta");
		UnregisterRecipe("Craft_PrepCanGrenade_Kvass");
		UnregisterRecipe("Craft_PrepCanGrenade_Cola");
		UnregisterRecipe("Craft_PrepCanGrenade_Pipsi");
		UnregisterRecipe("Craft_CanGrenade_Spite");
		UnregisterRecipe("Craft_CanGrenade_Cola");
		UnregisterRecipe("Craft_CanGrenade_Fronta");
		UnregisterRecipe("Craft_CanGrenade_Pipsi");
		UnregisterRecipe("Craft_CanGrenade_Kvass");
//dismantle
		UnregisterRecipe("IWP_Dismantle_SheetMetal");
		UnregisterRecipe("IWP_Dismantle_AlarmClock");
		UnregisterRecipe("IWP_Dismantle_Ammo");

	}
}