#include "PSC_Core\script_component.hpp"

class CfgPatches
{
    class PSC_NCR
    {
        units[] = 
		{
            "PSC_NCR_Trooper_Desert_UN"
		};
		weapons[] = 
		{
			"PSC_NCR_Trooper_Desert_U",
		};																								
		requiredVersion = 0.1; 
		version	= 0.1;
		requiredAddons[] = 
		{ 						
           	  "PSC_Core"
    	};
        author = "$STR_PSC_Author";
        addonRootClass = "PSC_Equipment"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Equipment.pbo";
    };
};

class CfgWeapons
{
	class UniformItem;
    class Uniform_Base;
    class PSC_NCR_Trooper_Base_U: Uniform_Base
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Uniform Base (Dev)";
        scope = 0;
        model = "PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
        //picture = "";
        hiddenSelections[] = 
        { 
            "camoUniform",
            "camoBelt",
            "camoGlovesBoots" 
        };
        hiddenSelectionsMaterials[] = 
        {
            "PSC_Equipment\NCR\data\uniforms\NCRTrooperUniform.rvmat",
            "PSC_Equipment\NCR\data\uniforms\NCRTrooperBelt.rvmat",
            "PSC_Equipment\NCR\data\uniforms\NCRTrooperGlovesBoots.rvmat"             
        }
        class ItemInfo : UniformItem
		{
			uniformModel = "PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
			uniformClass = "PSC_NCR_Trooper_Base_UN";
			containerClass = "Supply40";
			mass = 40;
		};
    };
    class PSC_NCR_Trooper_Desert_U: PSC_NCR_Trooper_Base_U
    {
        displayName = "$STR_PSC_NCR_Trooper_Desert_U";
        scope = 2;
		hiddenSelectionsTextures[] = 
        { 
            "PSC_Equipment\NCR\data\uniforms\desert\NCRTrooperUniform_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\desert\NCRTrooperBelt_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\desert\NCRTrooperGlovesBoots_CO.paa" 
        };
    };
};

class CfgVehicles
{
    class B_Soldier_base_F;
    class PSC_NCR_Trooper_Base_UN: B_Soldier_base_F
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Base (Dev)";
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        cost = "100000";
        camoflage = 1;
        sensivity = 1;
        threat[] = {1, 0.5, 0.5};
        uniformClass = "PSC_NCR_Trooper_Base_U";
        hiddenSelections[] = 
        { 
            "camoUniform",
            "camoBelt",
            "camoGlovesBoots" 
        };
        canDeactivateMines = 0;					// Can this character deactivate mines?
		engineer = 0;							// Can this character repair vehicles?
		attendant = 0;							// Can this character heal soldiers?
		icon = "iconMan";				// If a character has a special role, a special icon shall be used.
		picture = "pictureMan";				// The same as above, but for the squad picture.
		//backpack = "";		// Which backpack the character is wearing.
		//weapons[] = { "arifle_MX_ACO_pointer_F", "hgun_P07_F", "Throw", "Put" };		// Which weapons the character has.
		//respawnWeapons[] = { "arifle_MX_ACO_pointer_F", "hgun_P07_F", "Throw", "Put" };	// Which weapons the character respawns with.
		//Items[] = { "FirstAidKit" };			// Which items the character has.
		//RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.
		//magazines[] = { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };			// What ammunition the character has.
		//respawnMagazines[] = { MAG_10(30Rnd_65x39_caseless_mag), MAG_3(16Rnd_9x21_Mag), "SmokeShell", "SmokeShellGreen", "Chemlight_green", "Chemlight_green", MAG_2(HandGrenade) };	// What ammunition the character respawns with.
		//linkedItems[] = { "V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };		// Which items the character has.
		//respawnLinkedItems[] = { "V_PlateCarrier1_rgr", "H_HelmetB", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio", "NVGoggles" };	// Which items the character respawns with.
    };
};