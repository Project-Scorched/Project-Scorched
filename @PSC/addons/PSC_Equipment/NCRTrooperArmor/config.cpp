
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
    class PSC_NCR_TrooperMasc_Base__U: Uniform_Base
    {
        author = "$STR_PSC_Author";
        displayName = "NCR Trooper Uniform Base (Dev)";
        scope = 0;
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Male.p3d";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Base_UN";
			containerClass = "Supply150";
			mass = 40;
		};
        class HitpointsProtectionInfo 
        {
            class HitPelvis
			{
				armor				=  10;
				material			= -1;
				name				= "pelvis";
				passThrough			= 0.1;
				radius				= 0.2;
				explosionShielding	= 1;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitAbdomen : HitPelvis
			{
				armor				=  10;
				material			= -1;
				name				= "spine1";
				passThrough			= 0.1;
				radius				= 0.15;
				explosionShielding	= 1;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitDiaphragm : HitAbdomen
			{
				armor				=  10;
				material			= -1;
				name				= "spine2";
				passThrough			= 0.1;
				radius				= 0.15;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitChest : HitDiaphragm
			{
				armor				=  10;
				material			= -1;
				name				= "spine3";
				passThrough			= 0.1;
				radius				= 0.15;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
			};
			class HitBody : HitChest
			{
				armor				= 1000; // not supposed to take damage directly
				material			= -1;
				name				= "body";
				passThrough			= 0.1;
				radius				= 0.16;
				explosionShielding	= 6;
				visual				= "injury_body";
				minimalHit			= 0.01;
				depends				= "HitPelvis max HitAbdomen max HitDiaphragm max HitChest"; // depends work only for hit points defined in inheritance chain
				// arbitrary example for different operator usage: = "(2* (HitPelvis + HitAbdomen) * HitDiaphragm) max HitChest";

			};
			class HitArms
			{
				armor				=  10;
				material			= -1;
				name				= "arms";
				passThrough			= 1;
				radius				= 0.1;
				explosionShielding	= 1;
				visual				= "injury_hands";
				minimalHit			= 0.01;
			};
			class HitHands : HitArms
			{
				armor				=  10;
				material			= -1;
				name				= "hands";
				passThrough			= 1;
				radius				= 0.1;
				explosionShielding	= 1;
				visual				= "injury_hands";
				minimalHit			= 0.01;
				depends				= "HitArms";
			};
			class HitLegs
			{
				armor				=  10;
				material			= -1;
				name				= "legs";
				passThrough			= 1;
				radius				= 0.12;
				explosionShielding	= 1;
				visual				= "injury_legs";
				minimalHit			= 0.01;
			};
        };
    };
	class PSC_NCR_TrooperFem_Base__U: PSC_NCR_TrooperMasc_Base__U
	{
		displayName = "NCR Trooper Uniform Base Fem (Dev)";
        scope = 0;
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Male.p3d";
	};
    class PSC_NCR_TrooperMasc_Desert_U: PSC_NCR_TrooperMasc_Base__U
    {
        displayName = "NCR Trooper Uniform Desert (Masc)";
        scope = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRUniformBrownIcon_ca.paa";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Brown_UN";
			containerClass = "Supply150";
			mass = 40;
		};
    };
	class PSC_NCR_TrooperMascSleeveless_Desert_U: PSC_NCR_TrooperMasc_Base__U
	{
		displayName = "NCR Trooper Sleeveless Uniform Desert (Masc)";
		scope = 2;
		model = "PSC_Equipment\NCRTrooperArmor\uniform\PSC_NCR_Uniform_Male_Sleeveless.p3d";
		picture = "\PSC_Equipment\NCR\data\icon\NCRUniformBrownIcon_ca.paa";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Brown_UN";
			containerClass = "Supply150";
			mass = 40;
		};
	};
	class PSC_NCR_TrooperFemSleeveless_Desert_U: PSC_NCR_TrooperFem_Base__U
	{
		displayName = "NCR Trooper Uniform Desert (Fem)";
		scope = 2;
		picture = "\PSC_Equipment\NCR\data\icon\NCRUniformBrownIcon_ca.paa";
        class ItemInfo: UniformItem
		{
			uniformModel = "-";
			uniformClass = "PSC_NCR_Trooper_Brown_UN";
			containerClass = "Supply150";
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
        uniformModel="\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
		model = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
		hiddenSelections[] = 
        { 
            "camoVest",
			"camoBandolier",
			"camoCape",
			"camoArmbandL",
			"camoArmbandR"
        };
    
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest" 
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 60;
						passThrough = 0.3;
				};
			};
		};
    };
    class PSC_NCR_Trooper_Brown_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "NCR Trooper Vest (Brown)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\NCR_Trooper_Vest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest",
				"",
				"",
				"",
				""
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 30;
						passThrough = 0.3;
				};
			};
		};
    };
	class PSC_NCR_Trooper_BrownBandolier_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "NCR Trooper Vest w/ Bandolier (Brown)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest",
				"camoBandolier" 
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 30;
						passThrough = 0.3;
				};
			};
		};
    };
	class PSC_NCR_Trooper_BrownCape_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "NCR Trooper Vest w/ Cape (Brown)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest",
				"",
				"camoCape",
				"",
				""
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 30;
						passThrough = 0.3;
				};
			};
		};
    };
	class PSC_NCR_Trooper_BrownArmbandL_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "NCR MP Vest Left (Brown)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest",
				"",
				"",
				"ArmbandL",
				""
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 30;
						passThrough = 0.3;
				};
			};
		};
    };
	class PSC_NCR_Trooper_BrownArmbandL_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "NCR MP Vest Right (Brown)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest",
				"",
				"",
				"",
				"ArmbandR"
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 30;
						passThrough = 0.3;
				};
			};
		};
    };
	class PSC_NCR_Trooper_BrownArmbandL_V: PSC_NCR_Trooper_Base_V
    {
        displayName = "NCR MP Vest Officer (Brown)";
        scope = 2;
        scopeArsenal = 2;
        scopeCurator = 2;
        picture = "\PSC_Equipment\NCR\data\icon\NCRVestBrownIcon_ca.paa";
        class ItemInfo: VestItem
		{
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperVest.p3d";
            hiddenSelections[] = 
            { 
                "camoVest",
				"",
				"camoCape",
				"",
				"ArmbandR"
            };
			containerClass = "Supply80";
			mass = 15;
			class HitpointsProtectionInfo 
			{
				class Chest
				{
						hitPointName = "HitChest";
						armor = 30;
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
		model = "\PSC_Equipment\NCR\models\PSC_NCRTrooperHelmet.p3d";
        hiddenSelections[] = 
        {
            "camoHelmet",
            "camoGoggles"
        };
        class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperHelmet.p3d";
			modelSides[] = {1,2};
            hiddenSelections[] = 
            { 
                "camoHelmet",
                "camoGoggles" 
            };
			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 30;
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
        class ItemInfo: HeadgearItem
		{
			mass = 40;
			uniformModel = "\PSC_Equipment\NCR\models\PSC_NCRTrooperHelmet.p3d";
			hiddenSelections[] = 
            { 
                "camoHelmet",
                "camoGoggles"
            };
			class HitpointsProtectionInfo // more info at: https://community.bistudio.com/wiki/Arma_3:_Soldier_Protection
			{
				class Head
				{
					hitPointName = "HitHead";
					armor = 15;
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
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Male.p3d";
        uniformClass = "PSC_NCR_TrooperMasc_Base_U";
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
        displayName = "NCR Trooper";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Male.p3d";
    }; 
    class PSC_NCR_TrooperFem_Brown_UN: PSC_NCR_Trooper_Base_UN
    {
        displayName = "NCR Trooper Female";
		uniformClass = "PSC_NCR_TrooperFem_Base_U";
        scope = 2;
        scopeCurator = 2;
        scopeArsenal = 2;
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Female.p3d";
    };
	class PSC_NCR_TrooperSleeveless_Brown_UN: PSC_NCR_Trooper_Base_UN
    {
        displayName = "NCR Trooper Sleeveless";
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Female.p3d";
    };
	class PSC_NCR_TrooperFem_Brown_UN: PSC_NCR_Trooper_Base_UN
    {
        displayName = "NCR Trooper Female Sleeveless";
        scope = 0;
        scopeCurator = 0;
        scopeArsenal = 0;
        model = "\PSC_Equipment\NCR\models\PSC_NCR_Uniform_Female.p3d";
    }; 
};