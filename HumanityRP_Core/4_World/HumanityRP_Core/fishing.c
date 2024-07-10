modded class FishingActionData : ActionData
{

	const float FISHING_SUCCESS 		= 0.10;
	const float FISHING_BAIT_LOSS 		= 0.02;
	const float FISHING_HOOK_LOSS 		= 0.015;
	const float FISHING_DAMAGE 			= 2.0;
	const float FISHING_GARBAGE_CHANCE 	= 0.05;

}

modded class ActionFishingNewCB : ActionContinuousBaseCB
{

    ref array<string> 	m_FreshRegularFish = {"apokot_roach","apokot_silver_crucian","apokot_gold_crucian","apokot_perch", "apokot_pike", "apokot_bream", "apokot_tench", "apokot_crayfish"};


    override void CreateActionComponent()
	{
		EnableStateChangeCallback();
		m_ActionData.m_ActionComponent = new CAContinuousRepeatFishing(9.0);
	}

};
