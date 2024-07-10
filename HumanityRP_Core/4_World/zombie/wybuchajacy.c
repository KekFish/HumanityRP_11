modded class ExplosionTest : House
{
	ref Timer m_Delay;
	
	void ExplosionTest()
	{
        m_Delay = new Timer;
		m_Delay.Run(0.1, this, "ExplodeNow", null, false);
	}
}