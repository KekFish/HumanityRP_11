class PluginSyberiaOptions extends PluginBase
{
	int m_clientCharacterId = -1;
	ref PluginSyberiaOptions_Client m_client;
	
	override void OnInit()
	{
		GetSyberiaRPC().RegisterHandler(SyberiaRPC.SYBRPC_CLIENT_OPTIONS, this, "OnReceiveClientOptions");
	}
	
	protected void OnReceiveClientOptions(ParamsReadContext ctx, PlayerIdentity sender)
	{
		Param2<ref PluginSyberiaOptions_Client, string> clientData;
       	if ( !ctx.Read( clientData ) ) return;	
		
		m_client = clientData.param1;
		string versionNumber = clientData.param2;
		if (versionNumber != Syberia_Version)
		{
			GetSyberiaRPC().SendToServer(SyberiaRPC.SYBRPC_SELF_KICK, new Param1<int>(0));
		}
	}
	
	void ~PluginSyberiaOptions()
	{
		if (m_client) m_client = null;
	}
};

class PluginSyberiaOptions_Client
{
	int m_checkIdentityMode = 1;
	int m_skillLevelSize = 1000;
	int m_skillLevelModifier = 200;
	bool m_blockAccessToBackpack = true;
};

PluginSyberiaOptions GetSyberiaOptions() 
{
    return PluginSyberiaOptions.Cast(GetPlugin(PluginSyberiaOptions));
}