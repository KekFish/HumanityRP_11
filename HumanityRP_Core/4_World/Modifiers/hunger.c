modded class HungerMdfr: ModifierBase
{

	override void OnTick(PlayerBase player, float deltaT)
	{
		player.GetMovementState(m_MovementState);
		float energy = player.GetStatEnergy().Get();
		float metabolic_speed = MiscGameplayFunctions.GetEnergyMetabolicSpeed(m_MovementState.m_iMovement);
		
		float modifier = energy/PlayerConstants.SL_ENERGY_MAX + PlayerConstants.CONSUMPTION_MULTIPLIER_BASE;
         
		metabolic_speed *= modifier; //non linear shaping for consumption curve (comment out to have it linear)
		
        if(player.IsEncumbered)
        {
            metabolic_speed *= 3;
        };

		player.GetStatEnergy().Add( -metabolic_speed * deltaT );
		if ( energy <= PlayerConstants.LOW_ENERGY_THRESHOLD )
		{
			player.SetMixedSoundState( eMixedSoundStates.HUNGRY );
			if ((player.GetStomach().GetDigestingType() & PlayerStomach.DIGESTING_ENERGY) == 0)
				player.AddHealth("GlobalHealth", "Health", -PlayerConstants.LOW_ENERGY_DAMAGE_PER_SEC * deltaT );
		}
		else
		{
			player.UnsetMixedSoundState( eMixedSoundStates.HUNGRY );
		}
	}
};

modded class ThirstMdfr: ModifierBase
{

	override void OnTick(PlayerBase player, float deltaT)
	{
		player.GetMovementState(m_MovementState);
		float water = player.GetStatWater().Get();
		float metabolic_speed = MiscGameplayFunctions.GetWaterMetabolicSpeed(m_MovementState.m_iMovement);
		
		float modifier = water/PlayerConstants.SL_WATER_MAX + PlayerConstants.CONSUMPTION_MULTIPLIER_BASE;
		metabolic_speed *= modifier; //non linear shaping for consumption curve (comment out to have it linear)
		
        if(player.IsEncumbered)
        {
            metabolic_speed *= 3;
        };

		player.GetStatWater().Add( (-metabolic_speed * deltaT) );
		
		if ( water <= PlayerConstants.LOW_WATER_THRESHOLD )
		{
			player.SetMixedSoundState( eMixedSoundStates.THIRSTY );
			if ((player.GetStomach().GetDigestingType() & PlayerStomach.DIGESTING_WATER) == 0)
				player.AddHealth("GlobalHealth", "Health", -PlayerConstants.LOW_WATER_DAMAGE_PER_SEC * deltaT );
		}
		else
		{
			player.UnsetMixedSoundState( eMixedSoundStates.THIRSTY );
		}
	}
};