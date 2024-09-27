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
			Drone_Cannon //Fallout 3 (Slung/Contact/Grenade)
			Experimental_MIRV //Fallout 3 (Shoulderfire/BouncingBetty?)
			Fat_Man //Fallout 3 (Shoulderfire/Splash)
			Flamethrower //Fallout 3 (Slung/Flamer)
			Gatling_Laser//Fallout 3 (Slung/Laser)
			Heavy_Incinerator // Fallout 3 (Slung/Splash)
			Minigun //Fallout 3 (Slung/Normal)
			Missile_Launcher //Fallout 3 (Shoulderfire/Splash)
			Rock-It_Launcher //Follout 3 (Slung/Grenade)
			Tesla_Cannon //Fallout 3 (Shoulderfire/Laser)
			
			
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