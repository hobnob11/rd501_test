class cfgPatches
{
    class rd501_test
    {
		units[] = {};
        magazines[] = {};
		ammo[] = {};
		weapons[] = {
            "RD501_HelmetC"
        };
        requiredVersion = 0.1;
		requiredAddons[] = {
            "A3_Characters_F"
        };
    };
};
class cfgWeapons
{
    class H_HelmetB;
    class HeadgearItem;
    class RD501_HelmetC : H_HelmetB
    {
        author="Hobnob";
        displayName="RD501 HelmetC";
        model="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P3.p3d";
		hiddenSelections[]=
		{
			"Camo",
			"Camo1"
		};
		hiddenSelectionsTextures[]=
		{
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP3\Phase3_Pilot_Helmet_Standard_co.paa",
			"3AS\3AS_Characters\Clones\Headgear\Textures\PilotP3\Phase3_Pilot_Tubes_Standard_co.paa"
		};
		class ItemInfo: HeadgearItem
		{
			mass=40;
			uniformModel="3AS\3AS_Characters\Clones\Headgear\3AS_Clone_Pilot_P3.p3d";
			hiddenSelections[]=
			{
				"Camo",
				"Camo1"
			};
		};
    };
};
