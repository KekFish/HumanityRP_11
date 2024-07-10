class HRP_WorkBenchCraftingNails : HRP_WorkBenchCraftingCB
{
	override void CreateActionComponent()
	{
		
		float itemTime = 1.0;
		m_ActionData.m_ActionComponent = new CAContinuousTime( itemTime * UATimeSpent.BASEBUILDING_REPAIR_MEDIUM  );
	}
}
class HRP_WorkBenchCraftingSmallScrap : HRP_WorkBenchCraftingCB
{
	override void CreateActionComponent()
	{
		
		float itemTime = 1.0;
		m_ActionData.m_ActionComponent = new CAContinuousTime( itemTime * UATimeSpent.BASEBUILDING_REPAIR_MEDIUM * 1.5  );
	}
}

class HRP_WorkBenchCraftingCB : ActionRepairCarPartWithBlowtorchCB
{
	override void CreateActionComponent()
	{
		
		float itemTime = 1.0;
		m_ActionData.m_ActionComponent = new CAContinuousTime( itemTime * UATimeSpent.BASEBUILDING_REPAIR_MEDIUM * 2 );
	}
	
	
}