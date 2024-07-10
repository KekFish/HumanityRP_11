class hrp_CassetteCase extends Container_Base
{
	ref array<string> m_AllowedCargo = {"YK_Cassette_Base"};


	override bool CanReceiveItemIntoCargo(EntityAI item)
	{
		if (!super.CanReceiveItemIntoCargo(item))
		{
			return false;
		}

		foreach (string allowedCargo : m_AllowedCargo)
		{
			if (item.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}

	override bool CanSwapItemInCargo(EntityAI child_entity, EntityAI new_entity)
	{
		if (!super.CanSwapItemInCargo(child_entity, new_entity))
		{
			return false;
		}

		foreach (string allowedCargo : m_AllowedCargo)
		{
			if (new_entity.IsKindOf(allowedCargo))
			{
				return true;
			}
		}

		return false;
	}
}