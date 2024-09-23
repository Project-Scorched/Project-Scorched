// Start of File

/* Create a framework for heavy weapons
add weight for movements
add animation for movements

Need: Shoulderfire Mode
Need: Slung Heavy Weapon Mode
Need: Heavy Melee Weapon Mode (Not a Priority)
*/
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
          	  "A3_Data_F_AoW_Loadorder"
    	};
		addonRootClass = "PSC_Heavy_Weapons"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Heavy_Weapons.pbo"; // File name
    };
};
