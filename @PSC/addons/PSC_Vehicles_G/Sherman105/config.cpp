#include "includes.hpp"
class CfgPatches
{
	class PSC_Newton
	{
		author = "Luca + Queen"; //luca did 90% of the work, I'm just fixing / editing his stuff
		requiredaddons[] = 
		{
			"A3_Soft_F",
			"A3_Armor_F",
			"A3_Characters_F"
		};
		requiredversion = 1.0;
		units[] = 
		{
			"PSC_Newton105_VE",
			"PSC_Newton105_NCR_VE"
		};
		weapons[] = {};
		magazines[] = {};
		addonRootClass = "PSC_Vehicles_G";
	};
};

class DefaultEventhandlers;
class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class ViewOptics;
class Mode_FullAuto;
class Mode_SemiAuto;
class AnimationSources;
class EventHandlers;
class Turrets;
class HitPoints;
class HitHull;
class HitEngine;	// External class reference
class HitRGlass;	// External class reference
class HitLGlass;	// External class reference
class HitBody;	// External class reference
class HitFuel;	// External class reference
class HitLFWheel;	// External class reference
class HitRFWheel;	// External class reference
class HitLF2Wheel;	// External class reference
class HitRF2Wheel;	// External class reference
class HitLMWheel;	// External class reference
class HitRMWheel;	// External class reference
class HitLBWheel;	// External class reference
class HitRBWheel;	// External class reference


class GunParticles;
class CfgWeapons
{
	class LMG_coax_ext;
	class PSC_Sherman_Coax : LMG_coax_ext {
		class GunParticles {
			class FirstEffect {
				effectName = "MachineGun1";
				positionName = "usti hlavne1";
				directionName = "konec hlavne1";
			};
		};
	};
	class PSC_Sherman_Hull_MG : LMG_coax_ext {
		class GunParticles {
			class FirstEffect {
				effectName = "MachineGun2";
				positionName = "usti hlavne2";
				directionName = "konec hlavne2";
			};
		};
	};
	class PSC_Sherman_HMG : LMG_coax_ext {
		class GunParticles {
			class FirstEffect {
				effectName = "MachineGun3";
				positionName = "usti hlavne3";
				directionName = "konec hlavne3";
			};
		};
	};
	class PSC_Sherman_Commander_Turret;
	
	class cannon_105mm;
	class PSC_Sherman_105_Cannon : cannon_105mm {
		displayName = "105mm Cannon";
		magazines[] = {"PSC_12Rnd_105mm_APFSDS_Red","PSC_12Rnd_105mm_HEAT_Red","PSC_16Rnd_105mm_HE_Red"};
	};
};



class CfgVehicles {
#include "CfgVehicles.hpp"
};