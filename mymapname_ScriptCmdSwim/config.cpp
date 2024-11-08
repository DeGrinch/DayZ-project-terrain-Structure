class CfgPatches
{
	class mymapname_scriptcommandswim
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] = {"DZ_Data"};
		author = "myauthorname";
		name = "myaddonname";
		url = "mywebsitename";
	};
};

class CfgMods
{
	class mymapname_scriptcommandswim
	{	
		type = "mod";
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"mymapname_scriptcmdswim/scripts/4_world"};
			};
		}
	};
};