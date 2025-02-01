class manual;
class Mode_FullAuto;
class Mode_SemiAuto;
class player;
class CfgAmmo
{
	class Default;
	class Sh_120mm_HE_Tracer_Red;
	class S_Sh_105mm_HE_Tracer_Red: Sh_120mm_HE_Tracer_Red
	{
		hit = 180;
		indirectHit = 45;
		indirectHitRange = 6;
		warheadName = "HE";
		dangerRadiusHit = 60;
		suppressionRadiusHit = 25;
		typicalSpeed = 1000;
	};
};
class CfgMagazines
{
	class Default;
	class VehicleMagazine;
	class 30Rnd_120mm_HE_shells_Tracer_Red;
	class S_10Rnd_105mm_HE_shells_Tracer_Red: 30Rnd_120mm_HE_shells_Tracer_Red
	{
		displayName = "105 mm HE";
		displayNameShort = "105 mm HE";
		displayNameMFDFormat = "HE";
		ammo = "S_Sh_105mm_HE_Tracer_Red";
		tracersEvery = 1;
		count = 10;
		muzzleImpulseFactor[] = {1,3};
	};
};
class CfgWeapons
{
	class Default;
	class MGun;
	class LMG_coax;
	class Rifle;
	class CannonCore;
	class HMG_127;
	class HMG_127_APC: HMG_127
	{};
	class S_HMG_127_APC_L : HMG_127_APC
	{
		displayName = "12.7mm HMG";
		scope = 2;
		class GunParticles
		{
			class effect
			{
				positionName = "Gun_left_beg";
				directionName = "Gun_left_end";
				effectName = "MachineGun1";
			};
		};
		class manual: manual
		{
			displayName = "12.7mm HMG";
			//class StandardSound
			//{
				//soundSetShot[] = {"DMR02_Shot_SoundSet","DMR02_tail_SoundSet","DMR02_InteriorTail_SoundSet"};
			//};
		};
	};
	class S_HMG_127_APC_R:S_HMG_127_APC_L
	{
		class GunParticles
		{
			class effect
			{
				positionName = "Gun_right_beg";
				directionName = "Gun_right_end";
				effectName = "MachineGun1";
			};
		};
	};
	class cannon_120mm;
	class S_cannon_105mm: cannon_120mm
	{
		scope = 2;
		displayName = "105mm Main Cannon";
		magazines[] = {"S_10Rnd_105mm_HE_shells_Tracer_Red"};
	};
};