class CfgPatches 
{
	class PSC_Weapons
	{
		units[] = 
		{

		};
		weapons[] = 
		{
			
		};																								
		requiredVersion = 0.1; // Don't Touch
		version	= PSC_VERSION;
		requiredAddons[] = 
		{ 						// Loads all of Arma + CBA
           	  "cba_main",
          	  "A3_Data_F_AoW_Loadorder",
			  "PSC_Core"
    	};
		addonRootClass = "PSC_Weapons"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Weapons.pbo"; // File name
    };
};
