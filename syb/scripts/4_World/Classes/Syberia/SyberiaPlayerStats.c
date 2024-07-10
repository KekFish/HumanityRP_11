class SyberiaPlayerStats
{
	// Sleeping
	int m_sleepingLevel;
	
	// Adv medicine
	int m_bulletHits;
	int m_knifeHits;
	int m_hematomaHits;
	int m_zombieBite;
	int m_zombieVirus;
	int m_bulletBandage1;
	int m_bulletBandage2;
	int m_knifeBandage1;
	int m_knifeBandage2;
	int m_antidepresantLevel;
	bool m_concussionHit;
	bool m_bloodHemostaticEffect;
	bool m_hematopoiesisEffect;
	bool m_salveEffect;
	
	// Zones
	bool m_isPveIntruder;
	
	// Misc
	bool m_isNPC;
	
	void Init()
	{
		// Sleeping
		m_sleepingLevel = (int)SyberiaSleepingLevel.SYBSL_NONE;
		
		// Adv medicine
		m_bulletHits = 0;
		m_knifeHits = 0;
		m_hematomaHits = 0;
		m_zombieBite = 0;
		m_concussionHit = false;
		m_antidepresantLevel = 0;
		m_zombieVirus = 0;
		m_bulletBandage1 = 0;
		m_bulletBandage2 = 0;
		m_knifeBandage1 = 0;
		m_knifeBandage2 = 0;
		m_bloodHemostaticEffect = false;
		m_hematopoiesisEffect = false;
		m_salveEffect = false;
				
		// Zones
		m_isPveIntruder = false;
		
		// Misc
		m_isNPC = false;
	}
};