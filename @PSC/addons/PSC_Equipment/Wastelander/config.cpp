class CfgPatches
{
    class PSC_Equipment_Wastelander
    {
        units[] = 
		{
            
		};
		weapons[] = 
		{
            
		};																								
		requiredVersion = 0.1; 
		version	= 0.1;
		requiredAddons[] = 
		{ 						
           	  "PSC_Core"
    	};
        addonRootClass = "PSC_Equipment"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Equipment.pbo";
    };
};


class CfgWeapons
{
    class UniformItem;
    class Uniform_Base;
    class PSC_Wastelander_Tanker_Base_U: Uniform_Base
    {
        author = "$STR_PSC_Author";
        displayName = "Tanker Dev";
        scope = 0;
        model = "\PSC_Equipment\Wastelander\models\TankerUniform.p3d"; 
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
			uniformClass = "PSC_Wastelander_Tanker_Base_UN";
			containerClass = "Supply80";
			mass = 40;
        };
    };
    class PSC_Wastelander_Tanker_U: PSC_Wastelander_Tanker_Base_U
    {
        displayName = "$STR_PSC_Wastelander_Tanker_U";
        scope = 2; 
        class ItemInfo: UniformItem
        {
            uniformModel = "-";
			uniformClass = "PSC_Wastelander_Tanker_UN";
			containerClass = "Supply80";
			mass = 40;
        };
    };
};

class CfgVehicles
{
    class B_Soldier_base_F;
    class PSC_Wastelander_Tanker_Base_UN: B_Soldier_base_F
    {
        author = "$STR_PSC_Author";
        displayName = "$PSC_NCR_Trooper_Base_UN";
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };
        cost = "100000";
        camoflage = 1;
        sensivity = 1;
        threat[] = {1, 0.5, 0.5};
        model = "\PSC_Equipment\Wastelander\models\TankerUniform.p3d";
        uniformClass = "PSC_Wastelander_Tanker_Base_U";
        hiddenSelections[] = 
        { 
            "camoUpper",
            "camoLower"
        };
        canDeactivateMines = 0;					// Can this character deactivate mines?
		engineer = 0;							// Can this character repair vehicles?
		attendant = 0;							// Can this character heal soldiers?
		//icon = "iconMan";				// If a character has a special role, a special icon shall be used.
		//picture = "pictureMan";				// The same as above, but for the squad picture.
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
    class PSC_Wastelander_Tanker_UN: PSC_Wastelander_Tanker_Base_UN
    {
        uniformClass = "PSC_Wastelander_Tanker_U";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        model = "\PSC_Equipment\Wastelander\models\TankerUniform.p3d";
		hiddenSelectionsTextures[] = 
        { 
            "PSC_Equipment\Wastelander\data\uniforms\green\TankerUpper_CO.paa",
            "PSC_Equipment\Wastelander\data\uniforms\green\TankerLower_CO.paa"
        };
    };
};