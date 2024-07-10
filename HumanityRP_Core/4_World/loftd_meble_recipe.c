// modded class CraftBarbecuepart extends RecipeBase
// {
//     override bool CanDo(ItemBase ingredients[], PlayerBase player)//final check for recipe's validity
// 	{
// 		return false;
// 	};
// };

// modded class CraftBarbecuekit extends RecipeBase
// {
// 	override void Init()
// 	{
// 		m_Name = "Wytwórz gril";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 1.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_Barbecue_part");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Loftd_Barbecue_parts");//you can insert multiple ingredients this way
// 		//InsertIngredient(1,"ImprovisedRope");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = true;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_Barbecue_kit");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -2;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftoldbootsshelves extends RecipeBase
// {
// 	override void Init()
// 	{
// 		m_Name = "#STR_Assemble";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_Oldboots_shelves_diss");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_Oldboots_shelves");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}
// };

// modded class Craftoldbootsshelvesdiss extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Breakdown";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_Oldboots_shelves");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_Oldboots_shelves_diss");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftoldclosetsmallrihgt extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "Otwierana w prawo";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_OldClosetsmall_diss");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_OldClosetsmall_right");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}
// };

// modded class Craftoldclosetsmallrigghtdiss extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Breakdown";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_OldClosetsmall_right");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_OldClosetsmall_diss");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftoldclosetsmall extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "Otwierana w lewo";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_OldClosetsmall_diss");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_OldClosetsmall");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftoldclosetsmalldiss extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Breakdown";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_OldClosetsmall");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_OldClosetsmall_diss");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	}
// };

// modded class CraftOldCloset extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Assemble";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_OldCloset_diss");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_OldCloset");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class CraftOldClosetdiss extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Breakdown";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_OldCloset");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_OldCloset_diss");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftcase_a extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Assemble";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_case_a_diss");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_case_a");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftcase_adiss extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Breakdown";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_case_a");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_case_a_diss");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftalmara extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Assemble";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_almara_diss");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_almara");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = 0;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };

// modded class Craftalmaradiss extends RecipeBase
// {	
// 	override void Init()
// 	{
// 		m_Name = "#STR_Breakdown";
// 		m_IsInstaRecipe = false;//should this recipe be performed instantly without animation
// 		m_AnimationLength = 2.5;//animation length in relative time units
// 		m_Specialty = -0.02;// value > 0 for roughness, value < 0 for precision
		
		
// 		//conditions
// 		m_MinDamageIngredient[0] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[0] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[0] = 1;//-1 = disable check
// 		m_MaxQuantityIngredient[0] = -1;//-1 = disable check
		
// 		m_MinDamageIngredient[1] = -1;//-1 = disable check
// 		m_MaxDamageIngredient[1] = 3;//-1 = disable check
		
// 		m_MinQuantityIngredient[1] = -1;//-1 = disable check
// 		m_MaxQuantityIngredient[1] = -1;//-1 = disable check
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//INGREDIENTS
// 		//ingredient 1
// 		InsertIngredient(0,"Loftd_almara");//you can insert multiple ingredients this way
		
// 		m_IngredientAddHealth[0] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[0] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[0] = 0;// 0 = do nothing
// 		m_IngredientDestroy[0] = true;//true = destroy, false = do nothing
// 		m_IngredientUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this ingredient
		
// 		//ingredient 2
// 		InsertIngredient(1,"Screwdriver");

// 		m_IngredientAddHealth[1] = 0;// 0 = do nothing
// 		m_IngredientSetHealth[1] = -1; // -1 = do nothing
// 		m_IngredientAddQuantity[1] = 0;// 0 = do nothing
// 		m_IngredientDestroy[1] = false;// false = do nothing
// 		m_IngredientUseSoftSkills[1] = false;// set 'true' to allow modification of the values by softskills on this ingredient
// 		//----------------------------------------------------------------------------------------------------------------------
		
// 		//result1
// 		AddResult("Loftd_almara_diss");//add results here

// 		m_ResultSetFullQuantity[0] = false;//true = set full quantity, false = do nothing
// 		m_ResultSetQuantity[0] = -1;//-1 = do nothing
// 		m_ResultSetHealth[0] = -1;//-1 = do nothing
// 		m_ResultInheritsHealth[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result will inherit health from ingredient number (value);(value) == -2 means this result will inherit health from all ingredients averaged(result_health = combined_health_of_ingredients / number_of_ingredients)
// 		m_ResultInheritsColor[0] = -1;// (value) == -1 means do nothing; a (value) >= 0 means this result classname will be a composite of the name provided in AddResult method and config value "color" of ingredient (value)
// 		m_ResultToInventory[0] = -2;//(value) == -2 spawn result on the ground;(value) == -1 place anywhere in the players inventory, (value) >= 0 means switch position with ingredient number(value)
// 		m_ResultUseSoftSkills[0] = false;// set 'true' to allow modification of the values by softskills on this result
// 		m_ResultReplacesIngredient[0] = -1;// value == -1 means do nothing; a value >= 0 means this result will transfer item propertiesvariables, attachments etc.. from an ingredient value
// 	};
// };