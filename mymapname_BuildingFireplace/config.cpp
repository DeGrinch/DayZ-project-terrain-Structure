class CfgPatches
{
	class mymapname_structures_fireplace
	{
		requiredAddons[] = {"DZ_Data"};
		author = "myauthorname";
		name = "myaddonname";
		url = "mywebsitename";
	};
};

class CfgMods
{
	class mymapname_structures_fireplace
	{	
		type = "mod";
		
		class defs
		{
			class worldScriptModule
			{
				value = "";
				files[] = {"mymapname_buildingfireplace/scripts/4_world"};
			};
		}
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class land_mymapname_building_fireplace: HouseNoDestruct
	{
		scope = 1;
		model = "mymapname_buildingfireplace\mymapname_building_fireplace.p3d";
	};
};