class CfgPatches
{
    class PSC_AER9
    {
        requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {
			"PSC_AER9_W",
        };
        units[] =
        {

        };
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Weapons"; // Subconfigs
    };
};

class CfgWeapons
{
    class PSC_Rifle_Base_W; //From PSC_Service_Rifle

    class PSC_AER9_W: PSC_Rifle_Base_W
    {
        author =  "$STR_PSC_Author";
		displayName = "Rifle Base";
		scope = 0;
		magazines[] = 
		{
			"PSC_FusionCell_M"
		};
		magazineWell[] =
		{
			"PSC_AER9_MW"
		};
        magazineReloadSwitchPhase = 0.4;
        reloadAction = "PSC_GestureReloadServiceRifle";
        recoil = "recoil_mk20";
        maxZeroing = 800;
		selectionFireAnim = "zasleh";
        class WeaponSlotsInfo
        {
			class MuzzleSlot : SlotInfo
			{
				// targetProxy
				linkProxy = "\A3\data_f\proxies\weapon_slots\MUZZLE";

				// display name
				displayName = "Muzzle Slot";

				// class names with items supported by weapon
				compatibleItems[] = {}; // moved to each weapon
			};
			class CowsSlot : CowsSlot {};
			class PointerSlot : PointerSlot {};
			//allowedSlots[] = { 901 }; // you simply cannot put this into your pants
        };
        distanceZoomMin = 300;
        distanceZoomMax = 300;
        descriptionShort = "";
        handAnim[] = {"OFP2_ManSkeleton","PSC_Weapons\Service_Rifle\data\animations\servicerifleholdtest.rtm"};
		bullet1[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_01",0.4466836,1,15};
		bullet2[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_02",0.4466836,1,15};
		bullet3[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_03",0.4466836,1,15};
		bullet4[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Metal_04",0.4466836,1,15};
		bullet5[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_01",0.4466836,1,15};
		bullet6[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_02",0.4466836,1,15};
		bullet7[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_03",0.4466836,1,15};
		bullet8[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Dirt_04",0.4466836,1,15};
		bullet9[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_01",0.4466836,1,15};
		bullet10[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_02",0.4466836,1,15};
		bullet11[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_03",0.4466836,1,15};
		bullet12[] = {"A3\sounds_f\weapons\shells\5_56\Shellcase_556_Grass_04",0.4466836,1,15};
		soundBullet[] = {"bullet1",0.087,"bullet2",0.083,"bullet3",0.083,"bullet4",0.083,"bullet5",0.093,"bullet6",0.093,"bullet7",0.073,"bullet8",0.073,"bullet9",0.083,"bullet10",0.083,"bullet11",0.083,"bullet12",0.083};
		modes[] = {"Single","FullAuto","fullauto_medium","single_medium_optics1","single_far_optics2"};
		drySound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\dry_Mk20",0.31622776,1,10};
		reloadMagazineSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\reload_Mk20",1.0,1,10};
		changeFiremodeSound[] = {"A3\Sounds_F\arsenal\weapons\Rifles\Mk20\firemode_Mk20",0.25118864,1,5};
		cartridgePos = "Nabojnicestart";
		cartridgeVel = "Nabojnicesend";
		muzzleEnd="konec hlavne";
		muzzlePos = "usti hlavne";
		class Single: Mode_SemiAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_single_mk20";
			recoilProne = "recoil_single_prone_mk20";
			minRange = 2;
			minRangeProbab = 0.5;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.2;
		};
		class FullAuto: Mode_FullAuto
		{
			sounds[] = {"StandardSound","SilencedSound"};
			class BaseSoundModeType{};
			class StandardSound: BaseSoundModeType{};
			class SilencedSound: BaseSoundModeType{};
			reloadTime = 0.07;
			dispersion = 0.00116;
			recoil = "recoil_auto_mk20";
			recoilProne = "recoil_auto_prone_mk20";
			minRange = 0;
			minRangeProbab = 0.9;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 30;
			maxRangeProbab = 0.1;
			aiRateOfFire = 1e-06;
		};
    };

};