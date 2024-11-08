class CfgPatches
{
	class mymapname_clothingretexture
	{
		units[] = {};
		weapons[] = {};
		requiredVersion = 0.1;
		requiredAddons[] =
		{
			"DZ_Data",
			"DZ_Characters_Tops"
		};
		author = "myauthorname";
		name = "myaddonname";
		url = "mywebsitename";
	};
};

class CfgVehicles
{
	class GorkaEJacket_ColorBase;
	class mymapname_gorka_retexture: GorkaEJacket_ColorBase
	{
		scope = 2;
		displayName = "mymapname Gorka retexture";
		descriptionShort = "This is a simple gorka retexture with ability to change both textures and materials.";
		// link the textures here
		hiddenSelectionsTextures[] =
		{
			"dz\characters\tops\data\gorka_up_g_summer_co.paa",		// on-ground texture
			"dz\characters\tops\data\gorka_upper_summer_co.paa",	// on-character texture
			"dz\characters\tops\data\gorka_upper_summer_co.paa"		// on-character texture
		};
		// link the materials here
		hiddenSelectionsMaterials[]=
		{
			"mymapname_clothingretexture\data\gorka_normal_g.rvmat",		// on-ground material
			"mymapname_clothingretexture\data\gorka_normal.rvmat",		// on-character material
			"mymapname_clothingretexture\data\gorka_normal.rvmat"		// on-character material
		};
		// this can be deplicated from the clothing base class, some adjustments are necessary for healthLevels[]
		class DamageSystem
		{
			class GlobalHealth
			{
				class Health
				{
					hitpoints = 100;
					healthLevels[] =
					{
						// always needs to be the same as in original model
						{1.01,{"DZ\characters\tops\Data\GorkaUpper.rvmat","DZ\characters\tops\Data\GorkaUpper_g.rvmat"}},
						// materials (worn state)
						{0.70,{"mymapname_clothingretexture\data\gorka_normal.rvmat","mymapname_clothingretexture\data\gorka_normal_g.rvmat"}},
						// materials (damaged state)
						{0.50,{"mymapname_clothingretexture\data\gorka_normal_damage.rvmat","mymapname_clothingretexture\data\gorka_normal_g_damage.rvmat"}},
						// materials (badly damaged state)
						{0.30,{"mymapname_clothingretexture\data\gorka_normal_damage.rvmat","mymapname_clothingretexture\data\gorka_normal_g_damage.rvmat"}},
						// materials (ruined state)
						{0.01,{"mymapname_clothingretexture\data\gorka_normal_destruct.rvmat","mymapname_clothingretexture\data\gorka_normal_g_destruct.rvmat"}}
					};
				};
			};
			class GlobalArmor
			{
				class Melee
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
				class Infected
				{
					class Health
					{
						damage = 0.9;
					};
					class Blood
					{
						damage = 0.9;
					};
					class Shock
					{
						damage = 0.9;
					};
				};
			};
		};
	};
};