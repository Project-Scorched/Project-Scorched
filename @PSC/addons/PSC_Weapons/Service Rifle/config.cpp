class CfgPatches
{
    class PSC_Service_Rifle
    {
        requiredAddons[] = 
        {
			"A3_Weapons_F" //A3 Weapons Config.
        };
        weapons[] = 
        {

        };
        units[] =
        {

        };
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Weapons"; // Subconfigs
    };
};

class Mode_SemiAuto
{
	sounds[] = {"StandardSound","SilencedSound"};
	displayName = "$STR_DN_MODE_SEMIAUTO";
	textureType = "semi";
	recoil = "recoil_single_primary_3outof10";
	recoilProne = "recoil_single_primary_prone_3outof10";
	aiDispersionCoefY = 1.7;
	aiDispersionCoefX = 1.4;
	soundBurst = 0;
	requiredOpticType = -1;
	aiRateOfFire = 2.0;
	aiRateOfFireDispersion = 1;
	aiRateOfFireDistance = 500;
};
class Mode_Burst: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_BURST";
	textureType = "burst";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 2.4;
	aiDispersionCoefX = 1.9;
	soundBurst = 0;
};
class Mode_FullAuto: Mode_SemiAuto
{
	displayName = "$STR_DN_MODE_FULLAUTO";
	textureType = "fullAuto";
	recoil = "recoil_auto_primary_3outof10";
	recoilProne = "recoil_auto_primary_prone_3outof10";
	aiDispersionCoefY = 3.0;
	aiDispersionCoefX = 2.0;
	soundBurst = 0;
};

class CfgWeapons
{
    class PSC_NCR_ServiceRifle_W
    {
        
    };
	class arifle_MX_Base_F;
	class hahatesting: arifle_MX_Base_F
	{
		author = "JJfjofjw";
		_generalMacro = "hahatesting";
		baseWeapon = "hahatesting";
		scope = 2;
		displayName = "Hello World";
		model = "\A3\Weapons_F\Rifles\MX\MXC_F.p3d";
		reloadAction = "GestureReloadMXCompact";
		picture = "\A3\weapons_F\Rifles\MX\data\UI\gear_mx_cqc_X_CA.paa";
		UiPicture = "\A3\weapons_f\data\UI\icon_regular_CA.paa";
		handAnim[] = {"OFP2_ManSkeleton","\A3\Weapons_F\Rifles\MX\data\Anim\MX_cqc.rtm"};
		inertia = 0.4;
		aimTransitionSpeed = 1.2;
		dexterity = 1.6;
		initSpeed = 420;
		recoil = "recoil_mxc";
		maxZeroing = 800;
		class ItemInfo
		{
			priority = 1;
		};
		descriptionShort = "$STR_A3_CfgWeapons_arifle_XMX1";
		aiDispersionCoefY = 6.0;
		aiDispersionCoefX = 4.0;
		magazines[]=
		{
			"PSC_FusionCell_M"
		};
	};
};