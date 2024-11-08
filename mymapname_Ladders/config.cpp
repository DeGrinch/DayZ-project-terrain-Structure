class CfgPatches
{
	class mymapname_structures_ladders
	{
		requiredAddons[] = {"DZ_Data"};
		author = "myauthorname";
		name = "myaddonname";
		url = "mywebsitename";
	};
};

class CfgVehicles
{
	class HouseNoDestruct;
	class land_mymapname_laddernest: HouseNoDestruct
	{
		scope = 1;
		model = "mymapname_ladders\laddernest\mymapname_laddernest.p3d";
	};
};