modded class DayZPlayerImplementJumpClimb
{

	override void JumpOrClimb()
	{
		//! Reset states
		m_bWasClimb = false;

		//! Early exit if the player is being heavy damaged so the stagger animation can't be skipped
		if (m_Player.IsInFullbodyDamageAnimation())
		{
			return;
		}

		SHumanCommandClimbSettings hcls = m_Player.GetDayZPlayerType().CommandClimbSettingsW();
		
		if ( m_Player.m_MovementState.m_iMovement != DayZPlayerConstants.MOVEMENTIDX_IDLE )
			hcls.m_fFwMaxDistance = 2.5;
		else
			hcls.m_fFwMaxDistance = 1.2;
		
		SHumanCommandClimbResult climbRes = new SHumanCommandClimbResult();
		
		HumanCommandClimb.DoClimbTest(m_Player, climbRes, 0);
		if ( climbRes.m_bIsClimb || climbRes.m_bIsClimbOver )
		{
			int climbType = GetClimbType(climbRes.m_fClimbHeight);

			if ( !m_Player.CanClimb( climbType,climbRes ) )
				return;

			if ( Climb(climbRes) )
			{
                
				if ( climbType == 1 )
					m_Player.DepleteStamina(EStaminaModifiers.VAULT);
				else if ( climbType == 2 )
					m_Player.DepleteStamina(EStaminaModifiers.CLIMB);

				return;
			}
		}
		
		if ( m_Player.CanJump() )
		{
			Jump();
			m_Player.DepleteStamina(EStaminaModifiers.JUMP);
		}
	}
}
