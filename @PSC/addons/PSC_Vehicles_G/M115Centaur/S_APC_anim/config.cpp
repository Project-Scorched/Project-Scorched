#define _ARMA_
class CfgPatches
{
	class S_wh_anim
	{
		author = "S";
		name = "Crew Animations";
		requiredAddons[] = {"S_APC"};
		requiredVersion = 0.1;
		units[] = {};
		weapons[] = {};
	};
};
class CfgMovesBasic
{
	class Default;
	class DefaultDie;
	class ManActions
	{
		s_left_gunner_in = "s_left_gunner_in";
		s_left_gunner_out = "s_left_gunner_out";

		s_right_gunner_in = "s_right_gunner_in";
		s_right_gunner_out = "s_right_gunner_out";

		s_driver_in = "s_driver_in";
		s_driver_out = "s_driver_out";
	};
/*
	class Actions
	{
		class RifleStandActions;
		class FFV_BaseActions;
	};
*/
};
class CfgMovesMaleSdr: CfgMovesBasic
{
	class States
	{
		class Crew;
		class S_APC_driver_in: Crew
		{
			file = "\S_APC_anim\s_driver_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
		};
		class s_left_gunner_in: Crew
		{
			file = "\S_APC_anim\s_left_gunner_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
			//leftHandIKCurve[] = {0.1, 1, 0.15, 0};
			//rightHandIKCurve[] = {1, 1, 0.5, 0};	
		};
		class s_left_gunner_out: Crew 
		{
			file = "\A3\cargoposes_F\Anim\passenger_apc_narrow_generic03.rtm";
			speed = 0.0062893;
			interpolateTo[] = {"KIA_driver_tractor",1};
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			boundingSphere = 2.0;
		};
		class s_right_gunner_in: Crew
		{
			file = "\S_APC_anim\s_right_gunner_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
		};
		class s_right_gunner_out: Crew
		{
			file = "\A3\cargoposes_F\Anim\passenger_apc_narrow_generic03.rtm";
			speed = 0.062893;
			interpolateTo[] = {"KIA_driver_tractor",1};
			leftHandIKCurve[] = {0};
			rightHandIKCurve[] = {0};
			boundingSphere = 2.0;
		};
		class s_driver_in: Crew
		{
			file = "\S_APC_anim\s_driver_in.rtm";
			interpolateTo[] = {"KIA_driver_tractor",1};
			speed = 0.1;
			boundingSphere = 2.0;
		};
		class s_driver_out: Crew
		{
			file = "\S_APC_anim\s_driver_out.rtm";
			speed = 0.75;
			interpolateTo[] = {"KIA_driver_tractor",1};
			boundingSphere = 1.0;
			looped = 0;
		};
	};
};