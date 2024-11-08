class CfgPatches
{
	class mymapname_Inputs
	{
		requiredAddons[]={"DZ_Data"};
		author = "myauthorname";
		name = "myaddonname";
		url = "mywebsitename";
	};
};

class CfgMods
{
class mymapname_Inputs
	{
		inputs = "mymapname_inputs\my_new_inputs.xml";
		type = "mod";

		class defs
		{		
			class gameScriptModule
			{
				value="";
				files[]={"mymapname_inputs/scripts/gameModule"};
			};

			class worldScriptModule
			{
				value="";
				files[]={"mymapname_inputs/scripts/worldModule"};
			};
		}
		
		
	};
};

