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
		name			= "Project Scorched";					// Name of your mod
		author			= "Project Scorched Team";				// Affects Arma 3 Launcher, when the mod are loaded as local
		logo			= "PSC_Core\Data\logo_ca.paa";			// Logo displayed in the main menu
		logoOver		= "PSC_Core\Data\logo_ca.paa";	// When the mouse is over, in the main menu
		tooltip			= "Project Scorched";
		tooltipOwned	= "I'm very tired";				// Tool tip displayed when the mouse is left over, in the main menu
		picture			= "";		// Picture displayed from the expansions menu. Optimal size is 2048x1024
		actionName		= "GitHub";
		action			= "https://github.com/BeaniePope/Project-Scorched";			// Website URL, that can be accessed from the expansions menu
		overview		= "A Fallout Inspired mod for Arma 3";	// Supports structured text
		hideName		= 0;						// Hide the extension name
		hidePicture		= 0;						// Hide the extension menu
		dlcColor[]		= { 255, 210, 0, 0.8};	// Color used for DLC stripes and backgrounds (RGBA) rgba(255, 210, 0, 0.8)
		logoSmall		= "PSC_Core\Data\logo_ca.paa";		// Display in creative lists, next to the entities added by the mod
	};
};
