#include "script_component.hpp"

class CfgPatches 
{
	class PSC_Core 
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
		addonRootClass = "PSC_Core"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Core.pbo"; // File name
    };
};

class CfgMods
{
	class Mod_Base;
	class PSC: Mod_Base
	{
		logo = "PSC_Core\Data\logo_ca.paa";
		picture = "PSC_Core\Data\logo_ca.paa";
		name = "$STR_PSC_Core_Mod_Name";
	};
};
