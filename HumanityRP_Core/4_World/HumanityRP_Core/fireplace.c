modded class CraftFireplace extends RecipeBase
{
	override void Init()
	{
        super.Init();
		
		RemoveIngredient(1,"PunchedCard");//you can insert multiple ingredients this way
		RemoveIngredient(1,"Paper");//you can insert multiple ingredients this way
    }
};