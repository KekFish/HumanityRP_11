modded class PluginManager
{
	override void Init()
	{
		RegisterPlugin("PluginSyberiaRpc", true, true);
		RegisterPlugin("PluginSyberiaOptions", true, true);
		        
		super.Init();
	}
}