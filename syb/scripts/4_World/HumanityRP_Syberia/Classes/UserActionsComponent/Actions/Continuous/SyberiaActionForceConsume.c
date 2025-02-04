modded class ActionForceConsume
{
	override bool ActionBlockerCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{
		PlayerBase targetPlayer = PlayerBase.Cast(target.GetObject());
		return (targetPlayer && targetPlayer.IsFaceBlocked(true)) || (item && item.IsTemperatureVisible() && item.GetTemperature() < 0);
	}
	
	override string ActionBlockerText( PlayerBase player, ActionTarget target, ItemBase item )
	{
		if (item && item.IsTemperatureVisible() && item.GetTemperature() < 0)
			return "#syb_action_consume_blocked_temp";
		
		return "#syb_action_forceconsume_blocked_headgear";
	}
	
	override bool ActionCondition( PlayerBase player, ActionTarget target, ItemBase item )
	{

        
		return CheckBlockerActionCondition(player, target, item) && super.ActionCondition(player, target, item);
	}
};