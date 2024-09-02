
class CfgPatches
{
    class PSC_NCR
    {
        units[] = 
		{
            "PSC_NCR_Trooper_Base_UN"
		};
		weapons[] = 
		{
            "PSC_NCR_Trooper_Base_U",
			"PSC_NCR_Trooper_Brown_U",
            "PSC_NCR_Trooper_Base_V",
            "PSC_NCR_Trooper_Brown_V",
            "PSC_NCR_Trooper_Base_H",
            "PSC_NCR_Trooper_Brown_H"
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
    // Unifprms
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
        };
        class ItemInfo : UniformItem
		{
			uniformModel = "PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
			uniformClass = "PSC_NCR_Trooper_Base_UN";
			containerClass = "Supply200";
			mass = 40;
		};
    };
    class PSC_NCR_Trooper_Brown_U: PSC_NCR_Trooper_Base_U
    {
        displayName = "$STR_PSC_NCR_Trooper_Desert_U";
        scope = 2;
		hiddenSelectionsTextures[] = 
        { 
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperUniform_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperBelt_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperGlovesBoots_CO.paa"
        };
    };
    //Vests
    class ItemCore;
    class ItemInfo;
    class PSC_NCR_Trooper_Base_V: ItemCore
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Vest Base (DEV)";
		scope = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = { 901 };			// This means the vest can be put into a backpack.
		//picture = "";
		model = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
		hiddenSelections[] = 
        { 
            "camoVest" 
        };
        hiddenSelectionsMaterials[] = 
        {
            "PSC_Equipment\NCR\data\vests\NCRTrooperVest.rvmat"
        };
        class ItemInfo : ItemInfo
		{
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest" 
            };
			containerClass = "Supply40";
			mass = 15;
			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 16;
						passThrough = 0.3;
				};
			};
		};
    };
    class PSC_NCR_Trooper_Brown_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "$STR_PSC_NCR_Trooper_Brown_V";
        scope = 2;
        hiddenSelectionsTextures[] = 
        {
            "PSC_Equipment\NCR\data\vests\brown\NCRTrooperVest_CO.paa"
        };
    };
    // Helmets
	class HeadgearItem; 
    class PSC_NCR_Trooper_Base_H: ItemCore
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Helmet Base (DEV)";
        scope = 0;
        weaponPoolAvailable = 1;
        //picture = "\A3\characters_f\Data\UI\icon_H_helmet_plain_ca.paa";
		model = "\PSC_Equipment\NCR\models\NCR_Trooper_Helmet.p3d";
        hiddenSelections[] = 
        {
            "camoHelmet",
            "camoHelmetGlass"
        };
        hiddenSelectionsMaterials[] = 
        {
            "\PSC_Equipment\NCR\data\helmets\NCRTrooperHelmet.rvmat",
            "\PSC_Equipment\NCR\data\helmets\NCRTrooperHelmetGlass.rvmat"
        };
        class ItemInfo : HeadgearItem
		{
			mass = 40;
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Helmet.p3d";
			hiddenSelections[] = 
            { 
                "camoHelmet",
                "camoHelmetGlass" 
            };
			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 6;
					passThrough = 0.5;
				};
			};
        };
    };

    class PSC_NCR_Trooper_Brown_H: PSC_NCR_Trooper_Base_H
    {
        displayName = "$STR_PSC_NCR_Trooper_Brown_H";
        scope = 2;
        hiddenSelectionsTextures[] = 
        {
            "\PSC_Equipment\NCR\data\helmets\brown\NCRTrooperHelmet_co.paa",
            "\PSC_Equipment\NCR\data\helmets\brown\NCRTrooperHelmetGlass_co.paa"
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