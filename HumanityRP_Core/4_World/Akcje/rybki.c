#ifdef apokot_fish
modded class ActionApokotSearchInWater: ActionContinuousBase
{
    override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
    {
        return false;
    }
}
#endif