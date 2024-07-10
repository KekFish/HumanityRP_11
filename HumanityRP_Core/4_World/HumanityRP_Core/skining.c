modded class ActionSkinning: ActionContinuousBase
{	

	override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
	{
		Object targetObject = target.GetObject();
		
		if (targetObject.CanBeSkinned() && !targetObject.IsAlive())
		{
			EntityAI target_EAI;
			if (Class.CastTo(target_EAI, targetObject) && target_EAI.CanBeSkinnedWith(item))
				return true;
		}
		DeadChicken_ColorBase target_EAI_2;
		if (Class.CastTo(target_EAI_2, targetObject))
		{

			return true;

		}
		
		return false;
	}
}

modded class DeadChicken_ColorBase extends Edible_Base
{
	override bool CanBeCookedOnStick()
	{
		return false;
	}

	override bool CanBeCooked()
	{
		return false;
	}	
	
	override bool IsCorpse()
	{
		return true;
	}

	override bool CanDecay()
	{
		return true;
	}
	
	override bool CanBeSkinned()
	{
		if ( GetHealthLevel() == GameConstants.STATE_RUINED )
			return false;

		return true;
	}
}

modded class DeadRooster extends DeadChicken_ColorBase {}
modded class DeadChicken_White extends DeadChicken_ColorBase {}
modded class DeadChicken_Spotted extends DeadChicken_ColorBase {}
modded class DeadChicken_Brown extends DeadChicken_ColorBase {}