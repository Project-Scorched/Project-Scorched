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
			"PSC_Rifle_Base_W"
        };
        units[] =
        {

        };
        author = "$STR_PSC_Author";
		addonRootClass = "PSC_Weapons"; // Subconfigs
    };
};


class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class MuzzleSlot;
class SlotInfo;
class CowsSlot;
class PointerSlot;
class CowsSlot_Rail;
class CowsSlot_Rail_Pistol;
class CowsSlot_Pistol;
class CowsSlot_MSBS65;
class CowsSlot_Dovetail;
class CowsSlot_Dovetail_RPG;
class MuzzleSlot_45ACP;
class MuzzleSlot_9mm;
class MuzzleSlot_65;
class MuzzleSlot_65MG;
class MuzzleSlot_556;
class MuzzleSlot_762;
class MuzzleSlot_338;
class MuzzleSlot_93;
class MuzzleSlot_57;
class MuzzleSlot_58;
class MuzzleSlot_545R;
class MuzzleSlot_762R;
class UnderBarrelSlot_rail;
class PointerSlot_Rail;
class PointerSlot_Pistol;
class PointerSlot_Launcher;
class CfgWeapons
{
	class rifle;
	class Rifle_Base_F: Rifle
	{
		class WeaponsSlotsInfo;
	};

    class PSC_Rifle_Base_W:	Rifle_Base_F
    {
      	author =  "$STR_PSC_Author";
		displayName = "Rifle Base";
		scope = 0;
		magazines[] = 
		{
			""
		}
    };
};