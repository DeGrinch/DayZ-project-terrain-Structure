class CfgPatches
{
	class mymapname_smartcar
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
	class mymapname_scriptsmartccar
	{	
		type = "mod";
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"mymapname_smartcar/scripts/4_world"};
			};
		}
	};
};