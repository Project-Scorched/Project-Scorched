class CfgPatches
{
    class PSC_Factions 
    {
        requiredAddons[] = 
        {
            "PSC_Core"
        };
        units[] = 
        {

        };
        weapons[] = 
        {

        };
        author = "$STR_PSC_Author";
        addonRootClass = "PSC_Factions"; // Subconfigs
		fileName = "PSC_Factions.pbo"; 
    };
};


class CfgFactionClasses {
	class PSC_Robots_F {
		displayName = "$STR_PSC_Robots";
		author = "$STR_PSC_Author";
		icon = "";
		priority = 3;
	};
};
class CfgEditorSubcategories
{
	class PSC_EdSucat_Robots
	{
		displayName="$STR_PSC_Robots";
	};
};

