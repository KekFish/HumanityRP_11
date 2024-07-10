modded class Plant_Pepper : PlantBase
{
	void Plant_Pepper()
	{
		m_FullMaturityTime = 2250*10;
		m_SpoilAfterFullMaturityTime = 2250*20;
	}

	override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		super.Init(garden_base,fertility,harvesting_efficiency,water);
		m_SpoilAfterFullMaturityTime = 2250*20;
	}

};
modded class Plant_Potato : PlantBase
{
	void Plant_Potato()
	{
		m_FullMaturityTime = 2850*10;
		m_SpoilAfterFullMaturityTime = 2850*20;

	}

	override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		super.Init(garden_base,fertility,harvesting_efficiency,water);
		m_SpoilAfterFullMaturityTime = 2850*20;
	}
	
};
modded class Plant_Pumpkin : PlantBase
{
	void Plant_Pumpkin()
	{
		m_FullMaturityTime = 2850*10;
		m_SpoilAfterFullMaturityTime = 2850*20;

	}

	override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		super.Init(garden_base,fertility,harvesting_efficiency,water);
		m_SpoilAfterFullMaturityTime = 2850*20;
	}
};
modded class Plant_Tomato : PlantBase
{
	void Plant_Tomato()
	{
		m_FullMaturityTime = 1650*10;
		m_SpoilAfterFullMaturityTime = 1650*20;

	}

	override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		super.Init(garden_base,fertility,harvesting_efficiency,water);
		m_SpoilAfterFullMaturityTime =1650*20;
	}
};
modded class Plant_Zucchini : PlantBase
{
	void Plant_Zucchini()
	{
		m_FullMaturityTime = 1350*10;
		m_SpoilAfterFullMaturityTime = 1350*20;
	}

	override void Init( GardenBase garden_base, float fertility, float harvesting_efficiency, float water )
	{
		super.Init(garden_base,fertility,harvesting_efficiency,water);
		m_SpoilAfterFullMaturityTime = 1350*20;
	}
};
