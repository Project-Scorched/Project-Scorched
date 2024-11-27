
class CfgPatches
{
    class PSC_NCR_Equipment
    {
        units[] = 
		{
            "PSC_NCR_Trooper_Base_UN",
            "PSC_NCR_Trooper_Brown_UN"
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
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Base_UN";
			containerClass = "Supply100";
			mass = 40;
		};
    };
    class PSC_NCR_Trooper_Brown_U: PSC_NCR_Trooper_Base_U
    {
        displayName = "$STR_PSC_NCR_Trooper_Brown_U";
        scope = 2;
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
        picture = "\PSC_Equipment\NCR\data\icon\NCRUniformBrownIcon_ca.paa";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Brown_UN";
			containerClass = "Supply100";
			mass = 40;
		};
    };
    class PSC_NCR_Trooper_Snow_U: PSC_NCR_Trooper_Base_U
    {
        displayName = "$STR_PSC_NCR_Trooper_Snow_U";
        scope = 2;
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
        picture = "\PSC_Equipment\NCR\data\icon\NCRUniformSnowIcon_ca.paa";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Snow_UN";
			containerClass = "Supply100";
			mass = 40;
		};
    };
    class PSC_NCR_Trooper_Woodland_U: PSC_NCR_Trooper_Base_U
    {
        displayName = "$STR_PSC_NCR_Trooper_Woodland_U";
        scope = 2;
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
        picture = "\PSC_Equipment\NCR\data\icon\NCRUniformWoodlandIcon_ca.paa";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Woodland_UN";
			containerClass = "Supply100";
			mass = 40;
		};
    };
    //Vests
    class ItemCore;
    class ItemInfo;
    class VestItem;
    class PSC_NCR_Trooper_Base_V: ItemCore
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Vest Base (DEV)";
		scope = 0;
		weaponPoolAvailable = 1;
		allowedSlots[] = { 901 };
		//picture = "";
        uniformModel="\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
		model = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
		hiddenSelections[] = 
        { 
            "camoVest" 
        };
        hiddenSelectionsMaterials[] = 
        {
            "PSC_Equipment\NCR\data\vests\NCRTrooperVest.rvmat"
        };
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest" 
            };
			containerClass = "Supply40";
			mass = 15;
			class HitpointsProtectionInfo 
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
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "PSC_Equipment\NCR\data\vests\brown\NCRTrooperVest_co.paa"
        };
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest" 
            };
			containerClass = "Supply40";
			mass = 15;
			class HitpointsProtectionInfo 
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
    class PSC_NCR_Trooper_Snow_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "$STR_PSC_NCR_Trooper_Snow_V";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestSnowIcon_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "PSC_Equipment\NCR\data\vests\snow\NCRTrooperVest_CO.paa"
        };
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest" 
            };
			containerClass = "Supply40";
			mass = 15;
			class HitpointsProtectionInfo 
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
    // Helmets
	class HeadgearItem; 
    class PSC_NCR_Trooper_Base_H: ItemCore
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Helmet Base (DEV)";
        scope = 0;
        weaponPoolAvailable = 1;
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
        class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Helmet.p3d";
			modelSides[] = {1,2};
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
        picture = "\PSC_Equipment\NCR\data\icon\NCRHelmetBrownIcon_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\PSC_Equipment\NCR\data\helmets\brown\NCRTrooperHelmet_co.paa",
            "\PSC_Equipment\NCR\data\helmets\brown\NCRTrooperHelmetGlass_ca.paa"
        };
        class ItemInfo: HeadgearItem
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

    class PSC_NCR_Trooper_Snow_H: PSC_NCR_Trooper_Base_H
    {
        displayName = "$STR_PSC_NCR_Trooper_Snow_H";
        scope = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRHelmetSnowIcon_ca.paa";
        hiddenSelectionsTextures[] = 
        {
            "\PSC_Equipment\NCR\data\helmets\snow\NCRTrooperHelmet_co.paa"
        };
        class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Helmet.p3d";
			hiddenSelections[] = 
            { 
                "camoHelmet"
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
};

class CfgVehicles
{
    class B_Soldier_base_F;
    class PSC_NCR_Trooper_Base_UN: B_Soldier_base_F
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper (Base)";
        faction = "PSC_NCR";
        editorSubcatgory = "EdSubcat_Personnel";
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        identityTypes[] = { "LanguageENG_F","Head_NATO","G_NATO_default" };
        cost = "100000";
        camoflage = 1;
        sensivity = 1;
        threat[] = {1, 0.5, 0.5};
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
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
		//icon = "iconMan";				// If a character has a special role, a special icon shall be used.
		//picture = "pictureMan";				// The same as above, but for the squad picture.
		backpack = "";		// Which backpack the character is wearing.
		weapons[] = { "PSC_ServiceRifle_Base_W", ""};		// Which weapons the character has.
		respawnWeapons[] = { "PSC_ServiceRifle_Base_W", ""};	// Which weapons the character respawns with.
		Items[] = { "FirstAidKit" };			// Which items the character has.
		RespawnItems[] = { "FirstAidKit" };		// Which items the character respawns with.
		magazines[] = {"PSC_556_ServiceRifle_M"};			// What ammunition the character has.
		respawnMagazines[] = {"PSC_556_ServiceRifle_M"};	// What ammunition the character respawns with.
		linkedItems[] = { "PSC_NCR_Trooper_Brown_V", "PSC_NCR_Trooper_Brown_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio" };		// Which items the character has.
		respawnLinkedItems[] = { "PSC_NCR_Trooper_Brown_V", "PSC_NCR_Trooper_Brown_H", "ItemMap", "ItemCompass", "ItemWatch", "ItemRadio"};	// Which items the character respawns with.
    };
    class PSC_NCR_Trooper_Brown_UN: PSC_NCR_Trooper_Base_UN
    {
        uniformClass = "$STR_PSC_NCR_Trooper_Brown_UN";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
		hiddenSelectionsTextures[] = 
        { 
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperUniform_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperBelt_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperGlovesBoots_CO.paa"
        };
    }; 
    class PSC_NCR_Trooper_Snow_UN: PSC_NCR_Trooper_Base_UN
    {
        uniformClass = "$STR_PSC_NCR_Trooper_Snow_UN";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
		hiddenSelectionsTextures[] = 
        { 
            "PSC_Equipment\NCR\data\uniforms\snow\NCRTrooperUniform_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\snow\NCRTrooperBelt_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\snow\NCRTrooperGlovesBoots_CO.paa"
        };
    }; 
    class PSC_NCR_Trooper_Woodland_UN: PSC_NCR_Trooper_Base_UN
    {
        uniformClass = "$STR_PSC_NCR_Trooper_Woodland_UN";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        model = "\PSC_Equipment\NCR\models\NCR_Trooper_Uniform.p3d";
		hiddenSelectionsTextures[] = 
        { 
            "PSC_Equipment\NCR\data\uniforms\woodland\NCRTrooperUniform_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperBelt_CO.paa",
            "PSC_Equipment\NCR\data\uniforms\brown\NCRTrooperGlovesBoots_CO.paa"
        };
    }; 
};