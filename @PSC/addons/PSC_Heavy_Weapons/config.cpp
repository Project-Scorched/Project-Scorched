// Start of File

/* Create a framework for heavy weapons
add weight for movements
add animation for movements

Need: Shoulderfire Mode
Need: Slung Heavy Weapon Mode
Need: Heavy Melee Weapon Mode (Not a Priority)
*/
class CfgPatches 
{
	class PSC_Heavy_Weapons
	{
		units[] = 
		{

		};
		weapons[] = 
		{
			Arc_Welder_NV //Slung/Lightning
			Avenger_Minigun_FO2 //(Slung/Normal)
			Avenger_Minigun_FT //(Slung/Normal)
			Avenger_Minigun_NV //(Slung/Normal)
			Bren_Gun_FT // (Normal/Normal)
			Bozar_FO2 //(Normal/Normal)
			Browning_M2_FT // (Slung/Normal)
			Burnmaster_FO3 // (Slung/Flamer)
			Chauchat_FT //(Normal/Normal)
			Cleansing_Flamer_NV //Slung/Flamer
			Drone_Cannon_FO3 //(Slung/Timed/Grenade)
			Drone_Cannon_EX-B_FO3 // (Slung/Impact/Grenade)
			Elija_Tesla_Cannon_NV // Shoulderfire/Laser
			Eugene_FO3 //(Slung/Normal)
			Experimental_MIRV_FO3 //(Shoulderfire/BouncingBetty?)
			Fat_Man_FO3 //(Shoulderfire/Splash)
			Fat_Man_NV //Shoulderfire/Splash
			Fido_NV //(Slung/Normal)
			Flamer_FO1 //(Slung/Flamer)
			Flamer_FO2 //(Slung/Flamer)
			Flamer_FO3 //(Slung/Flamer)
			Flamer_FT //(Slung/Flamer)
			Flamer_NV //Slung/Flamer
			Gatling_Laser_FO1 //(Slung/Laser)
			Gatling_Laser_FO2 //(Slung/Laser)
			Gatling_Laser_FO3 //(Slung/Laser)
			Gatling_Laser_NV //Slung/Laser
			Grenade_Magine_Gun //Slung/Grenade
			Heavy_Incinerator_FO3 //(Slung/Splash)
			Heavy_Incinerator_NV//Slung/Splash
			Incinerator_NV //(Slung/Splash)
			Improved_Flamer_FO1 //(Slung/Flamer)
			K9000_NV //Slung/Normal
			Lewis_Mk3_FT // (Normal/Normal)
			Light_Support_Weapon_FO2 //(Normal/Normal)
			M249_SAW_FT //(Slung/Normal)
			M60_FO2 //(Normal/Normal)
			M60_FT //(Normal/Normal)
			MEC_Gauss_Minigun_FT //(Slung/Normal)
			Minigun_FO1 //(Slung/Normal)
			Minigun_FO2 //(Slung/Normal)
			Minigun_FO3 //(Slung/Normal)
			Minigun_NV //Slung/Normal
			Missile_Launcher_FO3 //(Shoulderfire/Splash)
			Miss_Launcher_FO3 //Shoulderfire/Splash)
			Plasma_Caster_NV //Slung/Plasma
			Precision_Gatling_Laser_FO3 //Slung/Laser
			Rapid_Torch_Flamer_FO3 //(Slung/Flamer)
			Rock-It_Launcher_FO3 //(Slung/Grenade)
			Rocket_Launcher_FO1 //(Shoulderfire/Splash)
			Rocket_Launcher_FO2 //(Shoulderfire/Splash)
			Rocket_Launchter_FT //Shoulderfire/Splash
			Shoulder_Mounted_MG //Shoulderfire/Normal
			Slo_Burn_Flamer_FO3 //(Slung/Flamer)
			Sprtel=Wood_9700 //Slung/Laser
			Sunbeam_Gatling_Laser_FT //(Slung/Laser)
			Tesla_Cannon_Fo3 //(Shoulderfire/Laser)
			Tesla_Cannon_NV //Shoulderfire/Laser
			Tesla-Beaton_Prototype_NV //Shoulderfire/Laser
			The_Smitty_Special //Slung/Plasma
			Vengeance_FO3 //(Slung/Laser)
			Vindicator_Minigun_FO2 //(Slung/Normal)
			Vindicator_Minigun_FT //(Slung/Normal)			
		};																								
		requiredVersion = 0.1; // Don't Touch
		version	= PSC_VERSION;
		requiredAddons[] = 
		{ 						// Loads all of Arma + CBA
           	  "cba_main",
          	  "A3_Data_F_AoW_Loadorder"
    	};
		addonRootClass = "PSC_Heavy_Weapons"; // Subconfigs
		author = "$STR_PSC_Author"; // Team name
		fileName = "PSC_Heavy_Weapons.pbo"; // File name
    };
};
		// Start of class modifiers
define Heavy.Equipped bool //Setting if a Heavy Weapon is equipped and modifying move speed
While (Heavy.Equipped == True)
{
	Set.BaseMovement.Speed = 0.66
};
class Shoulderfire //Defining Shoulder Fired (Rocket Animation) Weapons
{
	weapons()
	{
	Experimental_MIRV //Bouncing Betty on Ammunition
	Fat_Man //Really big Explosion
	Missile_Launcher //Standard Rocket Launcher
	Shoulder_Mounted_MG // Normal machine Gun?
	Tesla_Cannon //Heavy Laser (Laser Ammunition == White?
	};
};
class Slung //Defining Slung (Support Animations) Weapons
{
	weapons()
	{
		Drone_Cannon //Timed/Impact Splash
		Flamethrower //Uses Flame Projector Animation
		Gatling_Laser //Laser Bullet Animation
		Heavy_Incinerator //Firebomb/Grenade/Splash effect
		Minigun //Standard SAW?
		Rock-It_Launcher //Non-Explosive Arc Trajectory
	};
};