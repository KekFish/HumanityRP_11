modded class ActionOpenFence
{
    override bool ActionCondition(PlayerBase player, ActionTarget target, ItemBase item)
    {
        Object targetObject = target.GetObject();
        BBP_BASE bbpbase = BBP_BASE.Cast(target.GetObject());

        if (bbpbase != null && bbpbase.CanCloseFence())
        {
            return false;
        }

        if (bbpbase != null && (bbpbase.BBPGetTier() == 0 || bbpbase.BBPGetTier() == 69))
        {
            if (bbpbase.IsBBPGate() && !bbpbase.isBBPDoor())
            {
                return false;
            }
        }

        if (bbpbase != null && !bbpbase.BBP_HasDoor())
        {
            if (!bbpbase.IsBBPGate())
            {
                return false;
            }
        }

        if (bbpbase != null && bbpbase.CanOpenFence())
        {
            if (bbpbase.isWindow() && !bbpbase.isSmall())
            {
                if (!bbpbase.BBP_HasDoor())
                {
                    return false;
                }

                if (!bbpbase.HasProperDistanceBBPWindow("inside2", player))
                {
                    return false;
                }
            }

            if (bbpbase.isWindow() && bbpbase.isSmall())
            {
                if (!bbpbase.BBP_HasDoor())
                {
                    return false;
                }

                if (bbpbase.HasProperDistanceBBP("inside", player))
                {
                    return true;
                }
                return false;
            }

            if (bbpbase != null && bbpbase.isBBPDoor() && !bbpbase.isWindow())
            {
                if (!bbpbase.BBP_HasDoor())
                {
                    return false;
                }

                if (bbpbase.BBP_HasDoor())
                {
                    return true;
                }
            }

            return true;
        }

        return super.ActionCondition(player, target, item);
    }
}
