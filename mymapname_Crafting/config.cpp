class CfgPatches
{
	class mymapname_Crafting
	{
		requiredAddons[] = {"DZ_Data"};
		author = "myauthorname";
		name = "myaddonname";
		url = "mywebsitename";
	};
};

class CfgMods
{
class mymapname_Crafting
	{	
		type = "mod";
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"mymapname_crafting/scripts/4_world"};
			};
		}
	};
};

class CfgVehicles
{
	class Hammer;
	class MagicHammer: Hammer		// Simple custom item which will serve as new component for our recipe
	{
		displayName = "Magic Hammer";
		descriptionShort = "The great deconstructor";
	};
};
