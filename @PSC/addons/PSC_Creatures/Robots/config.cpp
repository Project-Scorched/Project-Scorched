class CfgPatches
{
    class PSC_Creatures_Robots
    {
        requiredAddons[] = 
        {
			
        };
        units[] = 
        {

        };
        weapons[] = 
        {

        };
        author = "$STR_PSC_Author";
        addonRootClass = "PSC_Creatures"; // Subconfigs
		fileName = "PSC_Creatures.pbo"; 
    };
};
class CfgMovesBasic
{
	class Default;
	class StandBase;
	class BlendAnims;
	class Actions
	{
		class Default;
		class NoActions;
		class WBK_Securitron_Moveset: NoActions
		{
			Disable_Gesture[]=
			{
			    "Disable_Gesture",
			    "Gesture"
			};
			stance="ManStanceUndefined";
			useFastMove = 1;
			turnSpeed = 2;
			LimpF="Securitron_Move_Slow";
			LimpLF="Securitron_Move_Slow";
			LimpRF="Securitron_Move_Slow";
			LimpL="Securitron_Move_Slow";
			LimpR="Securitron_Move_Slow";
			LimpB="Securitron_Move_Slow";
			LimpLB="Securitron_Move_Slow";
			LimpRB="Securitron_Move_Slow";
		    stop="Securitron_Idle_1";
			default="Securitron_Idle_1";
			stopRelaxed="Securitron_Idle_1";
			TurnL="Securitron_Turn_L";
			TurnR="Securitron_Turn_R";
			TurnLRelaxed="Securitron_Turn_L";
			TurnRRelaxed="Securitron_Turn_R";
			WalkF="Securitron_Move_Slow";
			PlayerWalkF="Securitron_Move_Slow";
			WalkLF="Securitron_Move_Slow";
			PlayerWalkLF="Securitron_Move_Slow";
			WalkRF="Securitron_Move_Slow";
			PlayerWalkRF="Securitron_Move_Slow";
			WalkL="Securitron_Move_Slow";
			PlayerWalkL="Securitron_Move_Slow";
			WalkR="Securitron_Move_Slow";
			PlayerWalkR="Securitron_Move_Slow";
			WalkB="Securitron_Move_Slow";
			PlayerWalkB="Securitron_Move_Slow";
			WalkLB="Securitron_Move_Slow";
			PlayerWalkLB="Securitron_Move_Slow";
			WalkRB="Securitron_Move_Slow";
			PlayerWalkRB="Securitron_Move_Slow";
			SlowF="Securitron_Move_Slow";
			PlayerSlowF="Securitron_Move_Slow";
			SlowB="Securitron_Move_Slow";
			PlayerSlowB="Securitron_Move_Slow";
			PlayerFastF="Securitron_Move_Fast";
			combat="Securitron_Idle_1";
			up="Securitron_Move_Slow";
			down="Securitron_Move_Slow";
			gear="Securitron_Idle_1";
			upDegree="ManPosNoWeapon";
			PlayerSlowLF="Securitron_Move_Slow";
			PlayerSlowRF="Securitron_Move_Slow";
			PlayerSlowL="Securitron_Move_Slow";
			PlayerSlowR="Securitron_Move_Slow";
			PlayerSlowLB="Securitron_Move_Slow";
			PlayerSlowRB="Securitron_Move_Slow";
			FastF="Securitron_Move_Fast";
			FastLF="Securitron_Move_Fast";
			FastRF="Securitron_Move_Fast";
			FastL="Securitron_Move_Fast";
			FastR="Securitron_Move_Fast";
			FastLB="Securitron_Move_Fast";
			FastRB="Securitron_Move_Fast";
			TactF="Securitron_Move_Slow";
			TactLF="Securitron_Move_Slow";
			TactRF="Securitron_Move_Slow";
			TactL="Securitron_Move_Slow";
			TactR="Securitron_Move_Slow";
			TactLB="Securitron_Move_Slow";
			TactRB="Securitron_Move_Slow";
			TactB="Securitron_Move_Slow";
			PlayerTactF="Securitron_Move_Slow";
			PlayerTactLF="Securitron_Move_Slow";
			PlayerTactRF="Securitron_Move_Slow";
			PlayerTactL="Securitron_Move_Slow";
			PlayerTactR="Securitron_Move_Slow";
			PlayerTactLB="Securitron_Move_Slow";
			PlayerTactRB="Securitron_Move_Slow";
			PlayerTactB="Securitron_Move_Slow";
			Die="Securitron_Death_1";
			StartFreefall="Securitron_Move_Slow";
			Unconscious = "Securitron_Move_Slow";
		};
		class WBK_Securitron_Moveset_Move: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Move_Slow";
			Up="Securitron_Move_Slow";
			Crouch="Securitron_Move_Slow";
			AdjustB="";
			Stand="Securitron_Idle_1";
		};
		class WBK_Securitron_Moveset_Move_Fast: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Move_Fast";
			Up="Securitron_Move_Fast";
			Crouch="Securitron_Move_Fast";
			AdjustB="";
			Stand="Securitron_Idle_1";
		};
		class WBK_Securitron_Moveset_TurnL: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Turn_L";
			Up="Securitron_Turn_L";
			Crouch="Securitron_Turn_L";
			AdjustB="";
			Stand="Securitron_Idle_1";
		};
		class WBK_Securitron_Moveset_TurnR: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Turn_R";
			Up="Securitron_Turn_R";
			Crouch="Securitron_Turn_R";
			AdjustB="";
			Stand="Securitron_Idle_R";
		};
		class WBK_Securitron_Moveset_Death_1: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Death_1";
			Up="Securitron_Death_1";
			Crouch="Securitron_Death_1";
			AdjustB="";
			Stand="Securitron_Death_1";
		};
		class WBK_Securitron_Moveset_Death_2: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Death_2";
			Up="Securitron_Death_2";
			Crouch="Securitron_Death_2";
			AdjustB="";
			Stand="Securitron_Death_2";
		};
		class WBK_Securitron_Moveset_Melee: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Melee";
			Up="Securitron_Melee";
			Crouch="Securitron_Melee";
			AdjustB="";
			Stand="Securitron_Melee";
		};
		class WBK_Securitron_Moveset_Hit_B: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Hit_b";
			Up="Securitron_Hit_b";
			Crouch="Securitron_Hit_b";
			AdjustB="";
			Stand="Securitron_Hit_b";
		};
		class WBK_Securitron_Moveset_Hit_F: WBK_Securitron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_Hit_f";
			Up="Securitron_Hit_f";
			Crouch="Securitron_Hit_f";
			AdjustB="";
			Stand="Securitron_Hit_f";
		};
		class WBK_Securitron_Moveset_FiringPos: NoActions
		{
			Disable_Gesture[]=
			{
			    "Disable_Gesture",
			    "Gesture"
			};
			stance="ManStanceUndefined";
			useFastMove = 1;
			turnSpeed = 2;
			LimpF="Securitron_Move_Slow";
			LimpLF="Securitron_Move_Slow";
			LimpRF="Securitron_Move_Slow";
			LimpL="Securitron_Move_Slow";
			LimpR="Securitron_Move_Slow";
			LimpB="Securitron_FirePosition_MoveB";
			LimpLB="Securitron_FirePosition_MoveB";
			LimpRB="Securitron_FirePosition_MoveB";
		    stop="Securitron_FirePosition";
			default="Securitron_FirePosition";
			stopRelaxed="Securitron_FirePosition";
			TurnL="Securitron_FirePosition";
			TurnR="Securitron_FirePosition";
			TurnLRelaxed="Securitron_FirePosition";
			TurnRRelaxed="Securitron_FirePosition";
			WalkF="Securitron_FirePosition_MoveF";
			PlayerWalkF="Securitron_FirePosition_MoveF";
			WalkLF="Securitron_FirePosition_MoveF";
			PlayerWalkLF="Securitron_FirePosition_MoveF";
			WalkRF="Securitron_FirePosition_MoveF";
			PlayerWalkRF="Securitron_FirePosition_MoveF";
			WalkL="Securitron_FirePosition_MoveF";
			PlayerWalkL="Securitron_FirePosition_MoveF";
			WalkR="Securitron_FirePosition_MoveF";
			PlayerWalkR="Securitron_FirePosition_MoveF";
			WalkB="Securitron_FirePosition_MoveB";
			PlayerWalkB="Securitron_FirePosition_MoveB";
			WalkLB="Securitron_FirePosition_MoveB";
			PlayerWalkLB="Securitron_FirePosition_MoveB";
			WalkRB="Securitron_FirePosition_MoveB";
			PlayerWalkRB="Securitron_FirePosition_MoveB";
			SlowF="Securitron_FirePosition_MoveF";
			PlayerSlowF="Securitron_FirePosition_MoveF";
			SlowB="Securitron_FirePosition_MoveB";
			PlayerSlowB="Securitron_FirePosition_MoveB";
			PlayerFastF="Securitron_FirePosition_MoveF";
			combat="Securitron_FirePosition";
			up="Securitron_FirePosition_MoveF";
			down="Securitron_FirePosition_MoveF";
			gear="Securitron_FirePosition";
			upDegree="ManPosNoWeapon";
			PlayerSlowLF="Securitron_FirePosition_MoveF";
			PlayerSlowRF="Securitron_FirePosition_MoveF";
			PlayerSlowL="Securitron_FirePosition_MoveF";
			PlayerSlowR="Securitron_FirePosition_MoveF";
			PlayerSlowLB="Securitron_FirePosition_MoveB";
			PlayerSlowRB="Securitron_FirePosition_MoveB";
			FastF="Securitron_FirePosition_MoveF";
			FastLF="Securitron_FirePosition_MoveF";
			FastRF="Securitron_FirePosition_MoveF";
			FastL="Securitron_FirePosition_MoveF";
			FastR="Securitron_FirePosition_MoveF";
			FastLB="Securitron_FirePosition_MoveF";
			FastRB="Securitron_FirePosition_MoveF";
			TactF="Securitron_FirePosition_MoveF";
			TactLF="Securitron_FirePosition_MoveF";
			TactRF="Securitron_FirePosition_MoveF";
			TactL="Securitron_FirePosition_MoveF";
			TactR="Securitron_FirePosition_MoveF";
			TactLB="Securitron_FirePosition_MoveB";
			TactRB="Securitron_FirePosition_MoveB";
			TactB="Securitron_FirePosition_MoveB";
			PlayerTactF="Securitron_FirePosition_MoveF";
			PlayerTactLF="Securitron_FirePosition_MoveF";
			PlayerTactRF="Securitron_FirePosition_MoveF";
			PlayerTactL="Securitron_FirePosition_MoveF";
			PlayerTactR="Securitron_FirePosition_MoveF";
			PlayerTactLB="Securitron_FirePosition_MoveB";
			PlayerTactRB="Securitron_FirePosition_MoveB";
			PlayerTactB="Securitron_FirePosition_MoveB";
			Die="Securitron_Death_1";
			StartFreefall="Securitron_FirePosition_MoveF";
			Unconscious = "Securitron_FirePosition_MoveF";
		};
		class WBK_Securitron_Moveset_FiringPos_MoveF: WBK_Securitron_Moveset_FiringPos
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_FirePosition_MoveF";
			Up="Securitron_FirePosition_MoveF";
			Crouch="Securitron_FirePosition_MoveF";
			AdjustB="";
			Stand="Securitron_FirePosition";
		};
		class WBK_Securitron_Moveset_FiringPos_MoveB: WBK_Securitron_Moveset_FiringPos
		{
			turnSpeed=4.5;
			PlayerCrouch="Securitron_FirePosition_MoveB";
			Up="Securitron_FirePosition_MoveB";
			Crouch="Securitron_FirePosition_MoveB";
			AdjustB="";
			Stand="Securitron_FirePosition";
		};
		
		
		class WBK_Protectron_Moveset: NoActions
		{
			Disable_Gesture[]=
			{
			    "Disable_Gesture",
			    "Gesture"
			};
			stance="ManStanceUndefined";
			useFastMove = 1;
			turnSpeed = 2;
			LimpF="Protectron_Move_Slow";
			LimpLF="Protectron_Move_Slow";
			LimpRF="Protectron_Move_Slow";
			LimpL="Protectron_Move_Slow";
			LimpR="Protectron_Move_Slow";
			LimpB="Protectron_Move_Slow";
			LimpLB="Protectron_Move_Slow";
			LimpRB="Protectron_Move_Slow";
		    stop="Protectron_Idle_1";
			default="Protectron_Idle_1";
			stopRelaxed="Protectron_Idle_1";
			TurnL="Protectron_Turn_L";
			TurnR="Protectron_Turn_R";
			TurnLRelaxed="Protectron_Turn_L";
			TurnRRelaxed="Protectron_Turn_R";
			WalkF="Protectron_Move_Slow";
			PlayerWalkF="Protectron_Move_Slow";
			WalkLF="Protectron_Move_Slow";
			PlayerWalkLF="Protectron_Move_Slow";
			WalkRF="Protectron_Move_Slow";
			PlayerWalkRF="Protectron_Move_Slow";
			WalkL="Protectron_Move_Slow";
			PlayerWalkL="Protectron_Move_Slow";
			WalkR="Protectron_Move_Slow";
			PlayerWalkR="Protectron_Move_Slow";
			WalkB="Protectron_Move_Slow";
			PlayerWalkB="Protectron_Move_Slow";
			WalkLB="Protectron_Move_Slow";
			PlayerWalkLB="Protectron_Move_Slow";
			WalkRB="Protectron_Move_Slow";
			PlayerWalkRB="Protectron_Move_Slow";
			SlowF="Protectron_Move_Slow";
			PlayerSlowF="Protectron_Move_Slow";
			SlowB="Protectron_Move_Slow";
			PlayerSlowB="Protectron_Move_Slow";
			PlayerFastF="Protectron_Move_Fast";
			combat="Protectron_Idle_1";
			up="Protectron_Move_Slow";
			down="Protectron_Move_Slow";
			gear="Protectron_Idle_1";
			upDegree="ManPosNoWeapon";
			PlayerSlowLF="Protectron_Move_Slow";
			PlayerSlowRF="Protectron_Move_Slow";
			PlayerSlowL="Protectron_Move_Slow";
			PlayerSlowR="Protectron_Move_Slow";
			PlayerSlowLB="Protectron_Move_Slow";
			PlayerSlowRB="Protectron_Move_Slow";
			FastF="Protectron_Move_Fast";
			FastLF="Protectron_Move_Fast";
			FastRF="Protectron_Move_Fast";
			FastL="Protectron_Move_Fast";
			FastR="Protectron_Move_Fast";
			FastLB="Protectron_Move_Fast";
			FastRB="Protectron_Move_Fast";
			TactF="Protectron_Move_Slow";
			TactLF="Protectron_Move_Slow";
			TactRF="Protectron_Move_Slow";
			TactL="Protectron_Move_Slow";
			TactR="Protectron_Move_Slow";
			TactLB="Protectron_Move_Slow";
			TactRB="Protectron_Move_Slow";
			TactB="Protectron_Move_Slow";
			PlayerTactF="Protectron_Move_Slow";
			PlayerTactLF="Protectron_Move_Slow";
			PlayerTactRF="Protectron_Move_Slow";
			PlayerTactL="Protectron_Move_Slow";
			PlayerTactR="Protectron_Move_Slow";
			PlayerTactLB="Protectron_Move_Slow";
			PlayerTactRB="Protectron_Move_Slow";
			PlayerTactB="Protectron_Move_Slow";
			Die="Protectron_Death_1";
			StartFreefall="Protectron_Move_Slow";
			Unconscious = "Protectron_Move_Slow";
		};
		class WBK_Protectron_Moveset_Move: WBK_Protectron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_Move_Slow";
			Up="Protectron_Move_Slow";
			Crouch="Protectron_Move_Slow";
			AdjustB="";
			Stand="Protectron_Idle_1";
		};
		class WBK_Protectron_Moveset_Move_Fast: WBK_Protectron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_Move_Fast";
			Up="Protectron_Move_Fast";
			Crouch="Protectron_Move_Fast";
			AdjustB="";
			Stand="Protectron_Idle_1";
		};
		class WBK_Protectron_Moveset_TurnL: WBK_Protectron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_Turn_L";
			Up="Protectron_Turn_L";
			Crouch="Protectron_Turn_L";
			AdjustB="";
			Stand="Protectron_Idle_1";
		};
		class WBK_Protectron_Moveset_TurnR: WBK_Protectron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_Turn_R";
			Up="Protectron_Turn_R";
			Crouch="Protectron_Turn_R";
			AdjustB="";
			Stand="Protectron_Idle_1";
		};
		class WBK_Protectron_Moveset_Death_1: WBK_Protectron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_Death_1";
			Up="Protectron_Death_1";
			Crouch="Protectron_Death_1";
			AdjustB="";
			Stand="Protectron_Death_1";
		};
		class WBK_Protectron_Moveset_Death_2: WBK_Protectron_Moveset
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_Death_2";
			Up="Protectron_Death_2";
			Crouch="Protectron_Death_2";
			AdjustB="";
			Stand="Protectron_Death_2";
		};
		class WBK_Protectron_Moveset_FiringPos: NoActions
		{
			Disable_Gesture[]=
			{
			    "Disable_Gesture",
			    "Gesture"
			};
			stance="ManStanceUndefined";
			useFastMove = 1;
			turnSpeed = 2;
			LimpF="Protectron_FirePosition_MoveF";
			LimpLF="Protectron_FirePosition_MoveF";
			LimpRF="Protectron_FirePosition_MoveF";
			LimpL="Protectron_FirePosition_MoveF";
			LimpR="Protectron_FirePosition_MoveF";
			LimpB="Protectron_FirePosition_MoveF";
			LimpLB="Protectron_FirePosition_MoveF";
			LimpRB="Protectron_FirePosition_MoveF";
		    stop="Protectron_FirePosition";
			default="Protectron_FirePosition";
			stopRelaxed="Protectron_FirePosition";
			TurnL="Protectron_FirePosition";
			TurnR="Protectron_FirePosition";
			TurnLRelaxed="Protectron_FirePosition";
			TurnRRelaxed="Protectron_FirePosition";
			WalkF="Protectron_FirePosition_MoveF";
			PlayerWalkF="Protectron_FirePosition_MoveF";
			WalkLF="Protectron_FirePosition_MoveF";
			PlayerWalkLF="Protectron_FirePosition_MoveF";
			WalkRF="Protectron_FirePosition_MoveF";
			PlayerWalkRF="Protectron_FirePosition_MoveF";
			WalkL="Protectron_FirePosition_MoveF";
			PlayerWalkL="Protectron_FirePosition_MoveF";
			WalkR="Protectron_FirePosition_MoveF";
			PlayerWalkR="Protectron_FirePosition_MoveF";
			WalkB="Protectron_FirePosition_MoveF";
			PlayerWalkB="Protectron_FirePosition_MoveF";
			WalkLB="Protectron_FirePosition_MoveF";
			PlayerWalkLB="Protectron_FirePosition_MoveF";
			WalkRB="Protectron_FirePosition_MoveF";
			PlayerWalkRB="Protectron_FirePosition_MoveF";
			SlowF="Protectron_FirePosition_MoveF";
			PlayerSlowF="Protectron_FirePosition_MoveF";
			SlowB="Protectron_FirePosition_MoveF";
			PlayerSlowB="Protectron_FirePosition_MoveF";
			PlayerFastF="Protectron_FirePosition_MoveF_FAST";
			combat="Protectron_FirePosition";
			up="Protectron_FirePosition_MoveF";
			down="Protectron_FirePosition_MoveF";
			gear="Protectron_FirePosition";
			upDegree="ManPosNoWeapon";
			PlayerSlowLF="Protectron_FirePosition_MoveF";
			PlayerSlowRF="Protectron_FirePosition_MoveF";
			PlayerSlowL="Protectron_FirePosition_MoveF";
			PlayerSlowR="Protectron_FirePosition_MoveF";
			PlayerSlowLB="Protectron_FirePosition_MoveF";
			PlayerSlowRB="Protectron_FirePosition_MoveF";
			FastF="Protectron_FirePosition_MoveF_FAST";
			FastLF="Protectron_FirePosition_MoveF_FAST";
			FastRF="Protectron_FirePosition_MoveF_FAST";
			FastL="Protectron_FirePosition_MoveF_FAST";
			FastR="Protectron_FirePosition_MoveF_FAST";
			FastLB="Protectron_FirePosition_MoveF_FAST";
			FastRB="Protectron_FirePosition_MoveF_FAST";
			TactF="Protectron_FirePosition_MoveF";
			TactLF="Protectron_FirePosition_MoveF";
			TactRF="Protectron_FirePosition_MoveF";
			TactL="Protectron_FirePosition_MoveF";
			TactR="Protectron_FirePosition_MoveF";
			TactLB="Protectron_FirePosition_MoveF";
			TactRB="Protectron_FirePosition_MoveF";
			TactB="Protectron_FirePosition_MoveF";
			PlayerTactF="Protectron_FirePosition_MoveF";
			PlayerTactLF="Protectron_FirePosition_MoveF";
			PlayerTactRF="Protectron_FirePosition_MoveF";
			PlayerTactL="Protectron_FirePosition_MoveF";
			PlayerTactR="Protectron_FirePosition_MoveF";
			PlayerTactLB="Protectron_FirePosition_MoveF";
			PlayerTactRB="Protectron_FirePosition_MoveF";
			PlayerTactB="Protectron_FirePosition_MoveF";
			Die="Securitron_Death_1";
			StartFreefall="Protectron_FirePosition_MoveF";
			Unconscious = "Protectron_FirePosition_MoveF";
		};
		class WBK_Protectron_Moveset_FiringPos_MoveF: WBK_Protectron_Moveset_FiringPos
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_FirePosition_MoveF";
			Up="Protectron_FirePosition_MoveF";
			Crouch="Protectron_FirePosition_MoveF";
			AdjustB="";
			Stand="Protectron_FirePosition";
		};
		class WBK_Protectron_Moveset_FiringPos_MoveF_FAST: WBK_Protectron_Moveset_FiringPos
		{
			turnSpeed=4.5;
			PlayerCrouch="Protectron_FirePosition_MoveF_FAST";
			Up="Protectron_FirePosition_MoveF_FAST";
			Crouch="Protectron_FirePosition_MoveF_FAST";
			AdjustB="";
			Stand="Protectron_FirePosition";
		};
	};
};

class CfgGestures_WBK_Securitron: CfgGesturesMale
{
	skeletonName = "WBK_Securitron_Skeleton";
	class ManActions
	{
	};
	class Actions;
	class Default;
	class BlendAnims;
	class States
	{
		class Disable_Gesture: Default
		{
			speed=1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Idle_1.rtm";
			disableWeapons=0;
			interpolationRestart=2;
			enableOptics=1;
			weaponIK=0;
			looped=0;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={0};
			rightHandIKEnd=0;
		};
	};
};

class CfgGestures_WBK_Protectron: CfgGesturesMale
{
	skeletonName = "WBK_Protectron_Skeleton";
	class ManActions
	{
	};
	class Actions;
	class Default;
	class BlendAnims;
	class States
	{
		class Disable_Gesture: Default
		{
			speed=1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Idle_1.rtm";
			disableWeapons=0;
			interpolationRestart=2;
			enableOptics=1;
			weaponIK=0;
			looped=0;
			leftHandIKBeg=0;
			leftHandIKCurve[]={0};
			leftHandIKEnd=0;
			rightHandIKBeg=0;
			rightHandIKCurve[]={0};
			rightHandIKEnd=0;
		};
	};
};
class CfgMoves_WBK_Securitron: CfgMovesMaleSdr
{
	gestures="CfgGestures_WBK_Securitron";
	skeletonName = "WBK_Securitron_Skeleton";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
    {
        actions = "WBK_Securitron_Moveset";
		file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Idle_1.rtm";
    };
	class StandBase: StandBase
    {
        actions = "WBK_Securitron_Moveset";
		file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Idle_1.rtm";
    };
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge[]={0.44999999};
		soundEnabled=0;
	};
	class States
	{
		class Securitron_Idle_1: StandBase
		{
			relSpeedMin=0.60000002;
			relSpeedMax=1;
			minPlayTime=0.8;
			ignoreMinPlayTime[] = 
            {
				"Securitron_Move_Slow",
				"Securitron_Move_Fast",
				"Securitron_Turn_L",
				"Securitron_Turn_R",
				"Securitron_Death_1",
				"Securitron_Death_2",
				"Securitron_Melee",
				"Securitron_Hit_f",
				"Securitron_Hit_b"
            };
			boundingSphere = 2;
			interpolationSpeed = 3;
			interpolationRestart = 1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Idle_1.rtm";
			duty = 0.1;
			actions = "WBK_Securitron_Moveset";
			variantAfter[]={2,3,5};
			variantsAI[] = {"Securitron_Idle_1", 0.4, "Securitron_Idle_2", 0.3, "Securitron_Idle_3", 0.3};
			variantsPlayer[] = {"Securitron_Idle_1", 0.4, "Securitron_Idle_2", 0.3, "Securitron_Idle_3", 0.3};
			speed = -3;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 0.5;
			headBobStrength=0;
			headBobMode=0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "empty";
			legs="legsDefault_WBK_Securitron";
			InterpolateTo[]=
			{
				"Securitron_Idle_1",
				0.01,
				"Securitron_Idle_2",
				0.01,
				"Securitron_Idle_3",
				0.01,
				"Securitron_Turn_L",
				0.01,
				"Securitron_Turn_R",
				0.01,
				"Securitron_Melee",
				0.01,
				"Securitron_Move_Slow",
				0.01,
				"Securitron_Move_Mid",
				0.01,
				"Securitron_Move_Fast",
				0.01,
				"Securitron_Death_1",
				0.01,
				"Securitron_Death_2",
				0.01,
				"Securitron_Melee",
				0.01,
				"Securitron_Hit_b",
				0.01,
				"Securitron_Hit_f",
				0.01,
				"Securitron_FirePosition_Transit_IN",
				0.01
			};
			InterpolateFrom[]=
			{
			};
			preload = 1;
		};
		class Securitron_Idle_2: Securitron_Idle_1
		{
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Idle_2.rtm";
			soundOverride = "idle2";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
		};
		class Securitron_Idle_3: Securitron_Idle_1
		{
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Idle_3.rtm";
			speed = -6;
			soundOverride = "idle3";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
		};
		class Securitron_Move_Slow: Securitron_Idle_1
		{
			interpolationRestart = 1;
			minPlayTime=0;
			speed = -2;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Move_Slow.rtm";
			soundOverride = "run";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
			variantsAI[] = {};
			variantsPlayer[] = {};
			actions = "WBK_Securitron_Moveset_Move";
		};
		class Securitron_Move_Fast: Securitron_Move_Slow
		{
			interpolationRestart = 1;
			speed = -1.4;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Move_Fast.rtm";
			actions = "WBK_Securitron_Moveset_Move_Fast";
		};
		class Securitron_Turn_L: Securitron_Move_Slow
		{
			interpolationSpeed = 3.5;
			interpolationRestart = 1;
			speed = -1.3;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Turn_L.rtm";
			soundEdge[] = {0.01};   
			actions = "WBK_Securitron_Moveset_TurnL";
			looped = false;
		};
		class Securitron_Turn_R: Securitron_Turn_L
		{
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Turn_R.rtm";
			actions = "WBK_Securitron_Moveset_TurnR";
		};
		class Securitron_Death_1: Securitron_Turn_L
		{
			soundOverride = "death";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
			minPlayTime=0.99;
			speed = -1.3;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Death_1.rtm";
			actions = "WBK_Securitron_Moveset_Death_1";
			InterpolateTo[]={};
			InterpolateFrom[]={};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Securitron_Death_2: Securitron_Death_1
		{
			speed = -1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Death_2.rtm";
			actions = "WBK_Securitron_Moveset_Death_2";
		};
		class Securitron_Melee: Securitron_Idle_1
		{
			actions = "WBK_Securitron_Moveset_Melee";
			variantsAI[] = {};
			variantsPlayer[] = {};
			interpolationSpeed = 3.5;
			interpolationRestart = 1;
			looped = false;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Melee.rtm";
			speed = -1.55;
			soundOverride = "melee";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
			minPlayTime=0.99;
			ignoreMinPlayTime[] = 
            {
				"Securitron_Death_1",
				"Securitron_Death_2"
            };
		};
		class Securitron_Hit_b: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset_Hit_B";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Hit_b.rtm";
			speed = -1.3; 
			soundOverride = "hit";
		};
		class Securitron_Hit_f: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset_Hit_F";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Hit_f.rtm";
			soundOverride = "hit";
		};
		class Securitron_FirePosition_Transit_IN: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset_FiringPos";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_FirePosition_Transit_IN.rtm";
			soundOverride = "hit";
			speed = -1; 
			InterpolateTo[]=
			{
				"Securitron_FirePosition",
				0.01
			};
		};
		class Securitron_FirePosition: StandBase
		{
			relSpeedMin=0.60000002;
			relSpeedMax=1;
			minPlayTime=0;
			ignoreMinPlayTime[] = 
            {
				"Securitron_Death_1",
				"Securitron_Death_2",
				"Securitron_Melee",
				"Securitron_Hit_f",
				"Securitron_Hit_b",
				"Securitron_Reload"
            };
			boundingSphere = 2;
			interpolationSpeed = 3;
			interpolationRestart = 1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_FirePosition.rtm";
			duty = 0.1;
			actions = "WBK_Securitron_Moveset_FiringPos";
			variantAfter[]={2,3,5};
			variantsAI[] = {};
			variantsPlayer[] = {};
			speed = -3;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 0.5;
			headBobStrength=0;
			headBobMode=0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "empty";
			legs="legsDefault_WBK_Securitron";
			InterpolateTo[]=
			{
				"Securitron_FirePosition",
				0.2,
				"Securitron_FirePosition_MoveB",
				0.2,
				"Securitron_FirePosition_MoveF",
				0.2,
				"Securitron_Melee",
				0.4,
				"Securitron_Death_1",
				0.4,
				"Securitron_Death_2",
				0.4,
				"Securitron_Melee",
				0.5,
				"Securitron_Hit_b",
				0.5,
				"Securitron_Hit_f",
				0.5,
				"Securitron_Reload",
				0.5,
				"Securitron_FirePosition_Transit_OUT",
				0.01
			};
			InterpolateFrom[]=
			{
			};
			preload = 1;
		};
		class Securitron_FirePosition_MoveF: Securitron_FirePosition
		{
			interpolationRestart = 1;
			minPlayTime=0;
			speed = -2;
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_FirePosition_MoveF.rtm";
			soundOverride = "run";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
			variantsAI[] = {};
			variantsPlayer[] = {};
			actions = "WBK_Securitron_Moveset_FiringPos_MoveF";
		};
		class Securitron_FirePosition_MoveB: Securitron_FirePosition_MoveF
		{
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_FirePosition_MoveB.rtm";
			actions = "WBK_Securitron_Moveset_FiringPos_MoveB";
		};
		class Securitron_FirePosition_Transit_OUT: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_FirePosition_Transit_OUT.rtm";
			soundOverride = "hit";
			speed = -0.9; 
			InterpolateTo[]=
			{
				"Securitron_Idle_1",
				0.01
			};
		};
		class Securitron_Reload: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset_FiringPos";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Reload.rtm";
			soundOverride = "hit";
			speed = -2.3; 
			InterpolateTo[]=
			{
				"Securitron_FirePosition",
				0.01
			};
		};
		class Securitron_MissileLaunch: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset_FiringPos";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_MissileLaunch.rtm";
			soundOverride = "hit";
			speed = -2.3; 
			InterpolateTo[]=
			{
				"Securitron_FirePosition",
				0.01
			};
		};
		class Securitron_Talking_1: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Talking_1.rtm";
			soundOverride = "hit";
			speed = -2.3; 
			InterpolateTo[]=
			{
				"Securitron_Idle_1",
				0.01
			};
		};
		class Securitron_Talking_2: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_Talking_2.rtm";
			soundOverride = "hit";
			speed = -2.3; 
			InterpolateTo[]=
			{
				"Securitron_Idle_1",
				0.01
			};
		};
		class Securitron_FirePosition_GrenadeOut: Securitron_Melee
		{
			actions = "WBK_Securitron_Moveset_FiringPos";
			file = "\WBK_AM_CustomSkelCreatures\anims\Securitron_FirePosition_GrenadeOut.rtm";
			soundOverride = "hit";
			speed = -1.5; 
			InterpolateTo[]=
			{
				"Securitron_FirePosition",
				0.01
			};
		};
	};
	class BlendAnims: BlendAnims
	{
		legsDefault_WBK_Securitron[]=
		{
			"Hips",
			0.69999998,
			"Tire",
			1
		};
	};
};

class CfgMoves_WBK_Protectron: CfgMovesMaleSdr
{
	gestures="CfgGestures_WBK_Protectron";
	skeletonName = "WBK_Protectron_Skeleton";
	collisionVertexPattern[] = {"1a","2a","3a","4a","5a","6a","7a","8a","9a","10a","11a","12a","13a","14a","15a","16a","17a","18a","19a","20a","21a","22a","23a","24a","25a","26a","27a","28a","29a","30a","31a","32a","33a","34a"};
	collisionGeomCompPattern[] = {1};
	class Default: Default
    {
        actions = "WBK_Protectron_Moveset";
		file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Idle_1.rtm";
    };
	class StandBase: StandBase
    {
        actions = "WBK_Protectron_Moveset";
		file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Idle_1.rtm";
    };
	class DefaultDie: Default
	{
		aiming="aimingNo";
		legs="legsNo";
		head="headNo";
		disableWeapons=1;
		interpolationRestart=1;
		soundOverride="fallbody";
		soundEdge[]={0.44999999};
		soundEnabled=0;
	};
	class States
	{
		class Protectron_Idle_1: StandBase
		{
			relSpeedMin=0.60000002;
			relSpeedMax=1;
			minPlayTime=0.8;
			ignoreMinPlayTime[] = 
            {
				"Protectron_Move_Slow",
				"Protectron_Move_Fast",
				"Protectron_Turn_L",
				"Protectron_Turn_R",
				"Protectron_Death_1",
				"Protectron_Death_2",
				"Protectron_Melee",
				"Protectron_Hit_f",
				"Protectron_Hit_b"
            };
			boundingSphere = 2;
			interpolationSpeed = 3;
			interpolationRestart = 1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Idle_1.rtm";
			duty = 0.1;
			actions = "WBK_Protectron_Moveset";
			variantAfter[]={2,3,5};
			variantsAI[] = {"Protectron_Idle_1", 0.4, "Protectron_Idle_2", 0.3, "Protectron_Idle_3", 0.3};
			variantsPlayer[] = {"Protectron_Idle_1", 0.4, "Protectron_Idle_2", 0.3, "Protectron_Idle_3", 0.3};
			speed = -3;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 0.5;
			headBobStrength=0;
			headBobMode=0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "empty";
			legs="legsDefault_WBK_Protectron";
			InterpolateTo[]=
			{
				"Protectron_Idle_1",
				0.01,
				"Protectron_Idle_2",
				0.01,
				"Protectron_Idle_3",
				0.01,
				"Protectron_Turn_L",
				0.01,
				"Protectron_Turn_R",
				0.01,
				"Protectron_Melee",
				0.01,
				"Protectron_Move_Slow",
				0.01,
				"Protectron_Move_Fast",
				0.01,
				"Protectron_Death_1",
				0.01,
				"Protectron_Death_2",
				0.01,
				"Protectron_Melee",
				0.01,
				"Protectron_Hit_b",
				0.01,
				"Protectron_Hit_f",
				0.01,
				"Protectron_FirePosition_Transit_IN",
				0.01
			};
			InterpolateFrom[]=
			{
			};
			preload = 1;
		};
		class Protectron_Idle_2: Protectron_Idle_1
		{
			speed = -6;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Idle_2.rtm";
		};
		class Protectron_Idle_3: Protectron_Idle_1
		{
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Idle_3.rtm";
			speed = -6;
		};
		class Protectron_Move_Slow: Protectron_Idle_1
		{
			interpolationRestart = 1;
			minPlayTime=0;
			speed = -3.7;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Walk.rtm";
			soundOverride = "run";
			soundEdge[] = {0.11,0.37,0.61,0.88};   
			soundEnabled = 1;
			variantsAI[] = {};
			variantsPlayer[] = {};
			actions = "WBK_Protectron_Moveset_Move";
		};
		class Protectron_Move_Fast: Protectron_Move_Slow
		{
			interpolationRestart = 0;
			speed = -2.5;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Walk.rtm";
			actions = "WBK_Protectron_Moveset_Move_Fast";
		};
		class Protectron_Turn_L: Protectron_Move_Slow
		{
			interpolationSpeed = 3.5;
			interpolationRestart = 1;
			speed = -1.5;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Turn_L.rtm";
			soundEdge[] = {0.4};   
			actions = "WBK_Protectron_Moveset_TurnL";
			looped = false;
		};
		class Protectron_Turn_R: Protectron_Turn_L
		{
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Turn_R.rtm";
			actions = "WBK_Protectron_Moveset_TurnR";
		};
		class Protectron_Death_1: Protectron_Turn_L
		{
			minPlayTime=0.99;
			speed = -2;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Death_1.rtm";
			actions = "WBK_Protectron_Moveset_Death_1";
			InterpolateTo[]={};
			InterpolateFrom[]={};
			variantsAI[] = {};
			variantsPlayer[] = {};
		};
		class Protectron_Death_2: Protectron_Death_1
		{
			speed = -2.7;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Death_2.rtm";
			actions = "WBK_Protectron_Moveset_Death_2";
		};
		class Protectron_Melee: Protectron_Idle_1
		{
			variantsAI[] = {};
			variantsPlayer[] = {};
			interpolationSpeed = 3.5;
			interpolationRestart = 1;
			looped = false;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Melee.rtm";
			speed = -1.55;
			soundOverride = "melee";
			soundEdge[] = {0.01};  
			soundEnabled = 1;
			minPlayTime=0.99;
			ignoreMinPlayTime[] = 
            {
				"Protectron_Death_1",
				"Protectron_Death_2"
            };
		};
		class Protectron_FirePosition_Transit_IN: Protectron_Melee
		{
			actions = "WBK_Protectron_Moveset_FiringPos";
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_FromIdle_To_FirePos.rtm";
			soundOverride = "hit";
			speed = -0.9; 
			InterpolateTo[]=
			{
				"Protectron_FirePosition",
				0.01
			};
		};
		class Protectron_FirePosition_Transit_OUT: Protectron_Melee
		{
			actions = "WBK_Protectron_Moveset";
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_FromFirePosToIdle.rtm";
			soundOverride = "hit";
			speed = -0.9; 
			InterpolateTo[]=
			{
				"Protectron_Idle_1",
				0.01
			};
		};
		class Protectron_FirePosition: StandBase
		{
			relSpeedMin=0.60000002;
			relSpeedMax=1;
			minPlayTime=0;
			ignoreMinPlayTime[] = 
            {
				"Protectron_FirePosition",
				"Protectron_FirePosition_MoveF",
				"Protectron_Death_1",
				"Protectron_Death_2",
				"Protectron_Melee"
            };
			boundingSphere = 2;
			interpolationSpeed = 3;
			interpolationRestart = 1;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_FirePos.rtm";
			duty = 0.1;
			actions = "WBK_Protectron_Moveset_FiringPos";
			variantAfter[]={2,3,5};
			variantsAI[] = {};
			variantsPlayer[] = {};
			speed = -3;
            canPullTrigger = 1;
			canReload = 1;
            limitGunMovement = 0.5;
			headBobStrength=0;
			headBobMode=0;
			disableWeapons = 0;
			disableWeaponsLong = 0;
			enableMissile = 1;
			enableOptics = 1;
			leaning="empty";
			aiming="empty";
		    aimingBody="empty";
			head = "empty";
			legs="legsDefault_WBK_Protectron";
			InterpolateTo[]=
			{
				"Protectron_FirePosition_MoveF",
				0.01,
				"Protectron_FirePosition",
				0.01,
				"Protectron_FirePosition_Transit_IN",
				0.01,
				"Protectron_Death_1",
				0.01,
				"Protectron_Death_2",
				0.01,
				"Protectron_FirePosition_MoveF_FAST",
				0.01,
				"Protectron_FirePosition_Transit_OUT",
				0.01
			};
			InterpolateFrom[]=
			{
			};
			preload = 1;
		};
		class Protectron_FirePosition_MoveF: Protectron_FirePosition
		{
			interpolationRestart = 1;
			minPlayTime=0;
			speed = -3.3;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Walk_FirePos.rtm";
			soundOverride = "run";
			soundEdge[] = {0.11,0.37,0.61,0.88};   
			soundEnabled = 1;
			variantsAI[] = {};
			variantsPlayer[] = {};
			actions = "WBK_Protectron_Moveset_FiringPos_MoveF";
		};
		class Protectron_FirePosition_MoveF_FAST: Protectron_FirePosition_MoveF
		{
			speed = -2.5;
			file = "\WBK_AM_CustomSkelCreatures\anims\Protectron_Walk_FirePos.rtm";
			actions = "WBK_Protectron_Moveset_FiringPos_MoveF_FAST";
		};
	};
	class BlendAnims: BlendAnims
	{
		legsDefault_WBK_Protectron[]=
		{
			"Leg_1_R",
			0.29999998,
			"Leg_1_L",
			0.29999998,
			"Leg_2_R",
			0.69999998,
			"Leg_2_L",
			0.69999998,
			"Leg_3_L",
			1,
			"Leg_3_R",
			1
		};
	};
};
class CfgSounds
{
    sounds[] = {};
	class Securitron_engineloop
    {
    name = "Securitron_engineloop";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\engineloop.ogg", db+6, 1};
    titles[]={};
	};
	class Protectron_engineloop
    {
    name = "Protectron_engineloop";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\robot_protectron_idle_lp.wav", db+12, 1};
    titles[]={};
	};
	class Protectron_Fall
    {
    name = "Protectron_Fall";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\bodyFall.wav", db+10, 1};
    titles[]={};
	};
	class Protectron_greet_1
    {
    name = "Protectron_greet_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\greet_1.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_greet_2
    {
    name = "Protectron_greet_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\greet_2.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_greet_3
    {
    name = "Protectron_greet_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\greet_3.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_goodbye_1
    {
    name = "Protectron_goodbye_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\goodbye_1.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_goodbye_2
    {
    name = "Protectron_goodbye_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\goodbye_2.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_death_1
    {
    name = "Protectron_death_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\death_1.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_death_2
    {
    name = "Protectron_death_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\death_2.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_death_3
    {
    name = "Protectron_death_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\death_3.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_death_4
    {
    name = "Protectron_death_4";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\death_4.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_1
    {
    name = "Protectron_attack_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_1.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_2
    {
    name = "Protectron_attack_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_2.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_3
    {
    name = "Protectron_attack_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_3.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_4
    {
    name = "Protectron_attack_4";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_4.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_5
    {
    name = "Protectron_attack_5";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_5.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_6
    {
    name = "Protectron_attack_6";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_6.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_7
    {
    name = "Protectron_attack_7";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_7.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_8
    {
    name = "Protectron_attack_8";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_8.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_9
    {
    name = "Protectron_attack_9";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_9.ogg", db+10, 1};
    titles[]={};
	};
	class Protectron_attack_10
    {
    name = "Protectron_attack_10";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\protectron\attack_10.ogg", db+10, 1};
    titles[]={};
	};
	
	class Securitron_allyDown_1
    {
    name = "Securitron_allyDown_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_allyDown_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_allyDown_2
    {
    name = "Securitron_allyDown_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_allyDown_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_1
    {
    name = "Securitron_attack_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_2
    {
    name = "Securitron_attack_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_3
    {
    name = "Securitron_attack_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_3.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_4
    {
    name = "Securitron_attack_4";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_4.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_5
    {
    name = "Securitron_attack_5";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_5.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_6
    {
    name = "Securitron_attack_6";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_6.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_7
    {
    name = "Securitron_attack_7";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_7.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_8
    {
    name = "Securitron_attack_8";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_8.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_9
    {
    name = "Securitron_attack_9";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_9.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_attack_10
    {
    name = "Securitron_attack_10";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_attack_10.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_death_1
    {
    name = "Securitron_death_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_death_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_death_2
    {
    name = "Securitron_death_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_death_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_death_3
    {
    name = "Securitron_death_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_death_3.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_grenade_1
    {
    name = "Securitron_grenade_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_grenade_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_grenade_2
    {
    name = "Securitron_grenade_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_grenade_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_hit_1
    {
    name = "Securitron_hit_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_hit_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_hit_2
    {
    name = "Securitron_hit_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_hit_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_hit_3
    {
    name = "Securitron_hit_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_hit_3.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_melee_1
    {
    name = "Securitron_melee_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_melee_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_melee_2
    {
    name = "Securitron_melee_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_melee_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_greet_1
    {
    name = "Securitron_greet_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_greet_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_greet_2
    {
    name = "Securitron_greet_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_greet_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_greet_3
    {
    name = "Securitron_greet_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_greet_3.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_goodbye_1
    {
    name = "Securitron_goodbye_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_goodbye_1.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_goodbye_2
    {
    name = "Securitron_goodbye_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_goodbye_2.wav", db+10, 1};
    titles[]={};
	};
	class Securitron_goodbye_3
    {
    name = "Securitron_goodbye_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\s_goodbye_3.wav", db+10, 1};
    titles[]={};
	};
	
	class Securitron_Victor_greet_1
    {
    name = "Securitron_Victor_greet_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_greeting_0010777c_1.ogg", db+10, 1};
    titles[]={};
	};
	class Securitron_Victor_greet_2
    {
    name = "Securitron_Victor_greet_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_greeting_0010777d_1.ogg", db+10, 1};
    titles[]={};
	};
	class Securitron_Victor_greet_evening_1
    {
    name = "Securitron_Victor_greet_evening_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vcg00_vcg00rescue_0010722d_1.ogg", db+10, 1};
    titles[]={};
	};
	class Securitron_Victor_greet_evening_2
    {
    name = "Securitron_Victor_greet_evening_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vcg00_vcg00rescue_00103dfa_1.ogg", db+10, 1};
    titles[]={};
	};
	class Securitron_Victor_greet_special
    {
    name = "Securitron_Victor_greet_special";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vcg00_vcg00rescue_0010722e_1.ogg", db+10, 1};
    titles[]={};
	};
	
	class Securitron_Victor_goodbye_1
    {
    name = "Securitron_Victor_goodbye_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_goodbye_00151d0b_1.ogg", db+10, 1};
    titles[]={};
	};
	class Securitron_Victor_goodbye_2
    {
    name = "Securitron_Victor_goodbye_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vdialoguel_vdialoguelucky3_00157256_1.ogg", db+10, 1};
    titles[]={};
	};
	
	class Securitron_Victor_attack_1
    {
    name = "Securitron_Victor_attack_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_lostidle_00126f0e_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_2
    {
    name = "Securitron_Victor_attack_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_lostidle_00126f0f_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_3
    {
    name = "Securitron_Victor_attack_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_losttocombat_00126e92_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_4
    {
    name = "Securitron_Victor_attack_4";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_losttocombat_00126e93_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_5
    {
    name = "Securitron_Victor_attack_5";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_losttocombat_00126e94_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_6
    {
    name = "Securitron_Victor_attack_6";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_murder_00126eb0_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_7
    {
    name = "Securitron_Victor_attack_7";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_murder_00126eb2_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_8
    {
    name = "Securitron_Victor_attack_8";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_normaltocombat_00126e74_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_attack_9
    {
    name = "Securitron_Victor_attack_9";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_normaltocombat_00126e75_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_grenade_1
    {
    name = "Securitron_Victor_grenade_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vfreeformg_normaltocombat_00126e76_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Victor_grenade_2
    {
    name = "Securitron_Victor_grenade_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vdialoguel_vdialoguesecuri_001650f9_1.ogg", db+15, 1};
    titles[]={};
	};
	
	class Securitron_Berserk_noise_1
    {
    name = "Securitron_Berserk_noise_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_noise_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_noise_2
    {
    name = "Securitron_Berserk_noise_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_noise_2.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_noise_3
    {
    name = "Securitron_Berserk_noise_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_noise_3.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_noise_4
    {
    name = "Securitron_Berserk_noise_4";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_noise_4.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_noise_5
    {
    name = "Securitron_Berserk_noise_5";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_noise_5.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_hit_1
    {
    name = "Securitron_Berserk_hit_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_hit_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_hit_2
    {
    name = "Securitron_Berserk_hit_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_hit_2.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_death_1
    {
    name = "Securitron_Berserk_death_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_death_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_Berserk_death_2
    {
    name = "Securitron_Berserk_death_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\berserk_death_2.ogg", db+15, 1};
    titles[]={};
	};
	
	class Securitron_YesMan_death_1
    {
    name = "Securitron_YesMan_death_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_death_0015ff31_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_death_2
    {
    name = "Securitron_YesMan_death_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_death_0015ff34_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_GoodBye_1
    {
    name = "Securitron_YesMan_GoodBye_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_goodbye_0015ff29_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_GoodBye_2
    {
    name = "Securitron_YesMan_GoodBye_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_goodbye_001164ef_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Greet_1
    {
    name = "Securitron_YesMan_Greet_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_greeting_001164f1_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Greet_2
    {
    name = "Securitron_YesMan_Greet_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_hello_0015ff3f_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Attack_1
    {
    name = "Securitron_YesMan_Attack_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_hit_0015ff16_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Attack_2
    {
    name = "Securitron_YesMan_Attack_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_startcombatrespons_0015ff0e_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Attack_3
    {
    name = "Securitron_YesMan_Attack_3";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_startcombatrespons_0015ff10_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Hit_1
    {
    name = "Securitron_YesMan_Hit_1";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_hit_0015ff17_1.ogg", db+15, 1};
    titles[]={};
	};
	class Securitron_YesMan_Hit_2
    {
    name = "Securitron_YesMan_Hit_2";
    sound[] = {"\WBK_AM_CustomSkelCreatures\sounds\vmqtops_hit_0015ff18_1.ogg", db+15, 1};
    titles[]={};
	};
};




class WeaponFireGun;
class WeaponCloudsGun;
class WeaponFireMGun;
class WeaponCloudsMGun;
class Mode_SemiAuto;
class Mode_Burst;
class Mode_FullAuto;
class SlotInfo;
class MuzzleSlot;
class CowsSlot;
class PointerSlot;
class UnderBarrelSlot;
class CfgWeapons 
{
	class ItemCore;	// External class reference
	class UniformItem;	// External class reference
	class Uniform_Base;	// External class reference
	class HeadgearItem;	// External class reference
	class Vest_Camo_Base;	// External class reference
	class VestItem;	// External class reference

	class Securitron_Uniform: Uniform_Base
	{
		displayname="Securitron";
		model = "WBK_AM_CustomSkelCreatures\models\AM_Securitron.p3d";
		scope=1;
		picture="";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			containerclass="Supply200";
			mass=30;
			uniformclass="Securitron_Uniform";
			uniformmodel="-";
		};
	};
	class Protectron_Uniform: Uniform_Base
	{
		displayname="Protectron";
		model = "PSC_Creatures\robots\models\PSC_Protectron.p3d";
		scope=1;
		picture="";
		hiddenSelections[] = {};
		hiddenSelectionsTextures[] = {};
		class ItemInfo: UniformItem
		{
			containerclass="Supply200";
			mass=30;
			uniformclass="Protectron_Uniform";
			uniformmodel="-";
		};
	};
};

class CfgVehicles
{
	class B_Soldier_base_F;	// External class reference
	class WBK_C_ExportClass : B_Soldier_base_F {
		identityTypes[] = {"empty_Face"};
	};
	class WBK_Securitron_1 : WBK_C_ExportClass {
		side = 1;
		editorSubcategory = "WBK_Robots_Securitrons";
		faction = "WBK_AM_ROBOTS";
		WBK_LootableCreature = ["AM_metalJunk","AM_metal_wire","30Rnd_10mm_HP_Mag","AM_cartridges_10"];
		WBK_Securitron_CanUseRockets = false;
		WBK_Securitron_CanUseGrenades = true;
		WBK_Securitron_CanUseMainWeapons = true;
		WBK_Securitron_IsMainWeaponLaser = false;
		WBK_Securitron_Faces = ["sterben_top\am_items\npc\robots\data\copsec.paa","WBK_AM_CustomSkelCreatures\textures\copsec_angry.paa"];
		WBK_Robot_Health = 250;
		WBK_RobotVoiceovers = [["Securitron_attack_1","Securitron_attack_2","Securitron_attack_3","Securitron_attack_4","Securitron_attack_5","Securitron_attack_6","Securitron_attack_7","Securitron_attack_8","Securitron_attack_9","Securitron_attack_10"],["Securitron_melee_1","Securitron_melee_2"],["Securitron_grenade_1","Securitron_grenade_2"],["Securitron_hit_1","Securitron_hit_2","Securitron_hit_3"],["Securitron_allyDown_1","Securitron_allyDown_2"],["Securitron_death_1","Securitron_death_2","Securitron_death_3"]];
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"sterben_top\am_items\npc\robots\data\copsec.paa","sterben_top\am_items\npc\robots\data\securitron1.paa"};
		_generalMacro = "WBK_Securitron_1";
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		gestures = "CfgGestures_WBK_Securitron";
		class SoundEnvironExt {		
			generic[] = {
			 {"idle2", {"\WBK_AM_CustomSkelCreatures\sounds\idle2.ogg", 3, 1, 25}},
			 {"idle3", {"\WBK_AM_CustomSkelCreatures\sounds\idle3.ogg", 3, 1, 25}},
			 {"death", {"\WBK_AM_CustomSkelCreatures\sounds\death_1.ogg", 2, 1, 100}},
			 {"death", {"\WBK_AM_CustomSkelCreatures\sounds\death_2.ogg", 2, 1, 100}},
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\tire_1.ogg", 1, 1, 30}},
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\tire_2.ogg", 1, 1, 30}}
			};
		};
		class SoundEquipment {	
		    soldier[] = {
			 {"idle2", {"\WBK_AM_CustomSkelCreatures\sounds\idle2.ogg", 3, 1, 25}},
			 {"idle3", {"\WBK_AM_CustomSkelCreatures\sounds\idle3.ogg", 3, 1, 25}},
			 {"death", {"\WBK_AM_CustomSkelCreatures\sounds\death_1.ogg", 2, 1, 100}},
			 {"death", {"\WBK_AM_CustomSkelCreatures\sounds\death_2.ogg", 2, 1, 100}},
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\tire_1.ogg", 1, 1, 30}},
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\tire_2.ogg", 1, 1, 30}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundInjured
		{
			person_moan1[] = {};
			person_moan2[] = {};
			person_moan3[] = {};
			person_moan4[] = {};
			person_moan5[] = {};
			person_moan6[] = {};
			person_moan7[] = {};
			person_moan8[] = {};
			person_moan9[] = {};
			person_moan10[] = {};
			person_moan11[] = {};
			person_moan12[] = {};
			person_moan13[] = {};
			person_moan14[] = {};
			person_moan15[] = {};
			person_moan16[] = {};
			person_moan17[] = {};
			person_moan18[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundRecovered
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
			breath0[] = {};
		};
		
		class SoundBreathInjured
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
		class SoundBurning
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
        items[] = {};
		uniformClass = "Securitron_Uniform";
		nakedUniform = "Securitron_Uniform";
		vehicleclass = "Men";
		displayName = "Securitron (Mark I)";
		moves = "CfgMoves_WBK_Securitron";
		model = "WBK_AM_CustomSkelCreatures\models\AM_Securitron.p3d";
		armor = 7;
		scope = 2;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		class Character {
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg", 0.4}, {"HitRightLeg", 0.4}, {"HitBody", 0.7}};
			armor = 7;
			attackDistances[] = {2, 3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			
			class Sounds {
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			
			class Animations {
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			
			class HitPoints {
				class HitFace {
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				
				class HitNeck : HitFace {
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				
				class HitHead : HitNeck {
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				
				class HitPelvis {
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitAbdomen : HitPelvis {
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitDiaphragm : HitAbdomen {
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitChest : HitDiaphragm {
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitBody : HitChest {
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				
				class HitArms {
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				
				class HitHands : HitArms {
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				
				class HitLegs {
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
		};
		linkedItems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		RespawnlinkedItems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class WBK_Securitron_2 : WBK_Securitron_1 {
		WBK_Securitron_CanUseRockets = true;
		WBK_Securitron_CanUseGrenades = false;
		WBK_Securitron_CanUseMainWeapons = true;
		WBK_Securitron_IsMainWeaponLaser = true;
		WBK_LootableCreature = ["AM_metalJunk","AM_metal_wire","24Rnd_MicroFusionCell_Mag","AM_DrainedSEC"];
		WBK_Robot_Health = 260;
		WBK_Securitron_Faces = ["sterben_top\am_items\npc\robots\data\soldiersec.paa","WBK_AM_CustomSkelCreatures\textures\soldiersec_angry.paa"];
		hiddenSelectionsTextures[] = {"sterben_top\am_items\npc\robots\data\soldiersec.paa","sterben_top\am_items\npc\robots\data\securitron1.paa"};
		_generalMacro = "WBK_Securitron_2";
		displayName = "Securitron (Mark II)";
	};
	class WBK_Securitron_Victor : WBK_Securitron_1 {
		WBK_Securitron_Faces = ["sterben_top\am_items\npc\robots\data\victorsec.paa","WBK_AM_CustomSkelCreatures\textures\victorsec_angry.paa"];
		WBK_Robot_Health = 5000;
		WBK_RobotVoiceovers = [["Securitron_Victor_attack_1","Securitron_Victor_attack_2","Securitron_Victor_attack_3","Securitron_Victor_attack_4","Securitron_Victor_attack_5","Securitron_Victor_attack_6","Securitron_Victor_attack_7","Securitron_Victor_attack_8","Securitron_Victor_attack_9"],["Securitron_Victor_attack_6","Securitron_Victor_attack_7"],["Securitron_Victor_grenade_1","Securitron_Victor_grenade_2"],["Securitron_Victor_grenade_1","Securitron_Victor_grenade_2"],["Securitron_Victor_attack_6","Securitron_Victor_attack_7"],["Securitron_death_1","Securitron_death_2","Securitron_death_3"]];
		hiddenSelectionsTextures[] = {"sterben_top\am_items\npc\robots\data\victorsec.paa","sterben_top\am_items\npc\robots\data\securitron1.paa"};
		_generalMacro = "WBK_Securitron_Victor";
		displayName = "Securitron (Victor)";
	};
	class WBK_Securitron_3 : WBK_Securitron_1 {
		WBK_Securitron_CanUseRockets = true;
		WBK_Securitron_CanUseGrenades = true;
		WBK_Securitron_CanUseMainWeapons = true;
		WBK_Securitron_IsMainWeaponLaser = true;
		WBK_LootableCreature = ["AM_metalJunk","AM_metal_wire","24Rnd_MicroFusionCell_Mag","AM_DrainedSEC","30Rnd_10mm_HP_Mag","AM_cartridges_10"];
		WBK_Robot_Health = 350;
		WBK_RobotVoiceovers = [["Securitron_Berserk_noise_1","Securitron_Berserk_noise_2","Securitron_Berserk_noise_3","Securitron_Berserk_noise_4","Securitron_Berserk_noise_5"],["Securitron_Berserk_noise_1","Securitron_Berserk_noise_2","Securitron_Berserk_noise_3","Securitron_Berserk_noise_4","Securitron_Berserk_noise_5"],["Securitron_Berserk_noise_1","Securitron_Berserk_noise_2","Securitron_Berserk_noise_3","Securitron_Berserk_noise_4","Securitron_Berserk_noise_5"],["Securitron_Berserk_hit_1","Securitron_Berserk_hit_2"],["Securitron_Berserk_noise_1","Securitron_Berserk_noise_2","Securitron_Berserk_noise_3","Securitron_Berserk_noise_4","Securitron_Berserk_noise_5"],["Securitron_Berserk_death_1","Securitron_Berserk_death_2"]];
		WBK_Securitron_Faces = ["WBK_AM_CustomSkelCreatures\textures\Beserksecuritron.paa","WBK_AM_CustomSkelCreatures\textures\Beserksecuritron_angry.paa"];
		hiddenSelectionsTextures[] = {"WBK_AM_CustomSkelCreatures\textures\Beserksecuritron.paa","sterben_top\am_items\npc\robots\data\securitron1.paa"};
		_generalMacro = "WBK_Securitron_3";
		displayName = "Securitron (Berserk)";
	};
	class WBK_Securitron_4 : WBK_Securitron_1 {
		WBK_Securitron_CanUseRockets = false;
		WBK_Securitron_CanUseGrenades = false;
		WBK_Securitron_CanUseMainWeapons = true;
		WBK_Securitron_IsMainWeaponLaser = false;
		WBK_RobotVoiceovers = [["Securitron_YesMan_Attack_1","Securitron_YesMan_Attack_2","Securitron_YesMan_Attack_3"],["Securitron_YesMan_Attack_1","Securitron_YesMan_Attack_2","Securitron_YesMan_Attack_3"],["Securitron_YesMan_Attack_1","Securitron_YesMan_Attack_2","Securitron_YesMan_Attack_3"],["Securitron_YesMan_Hit_1","Securitron_YesMan_Hit_2"],["Securitron_YesMan_Hit_2","Securitron_YesMan_Hit_1"],["Securitron_YesMan_death_1","Securitron_YesMan_death_2"]];
		WBK_Securitron_Faces = ["sterben_top\am_items\npc\robots\data\YesManSec.paa","WBK_AM_CustomSkelCreatures\textures\YesManSec_angry.paa"];
		hiddenSelectionsTextures[] = {"sterben_top\am_items\npc\robots\data\YesManSec.paa","sterben_top\am_items\npc\robots\data\securitron1.paa"};
		_generalMacro = "WBK_Securitron_4";
		displayName = "Securitron (YesMan)";
	};
	class WBK_Securitron_1_O : WBK_Securitron_1 {
		_generalMacro = "WBK_Securitron_1_O";
		side = 0;
	};
	class WBK_Securitron_2_O : WBK_Securitron_2 {
		_generalMacro = "WBK_Securitron_2_O";
		side = 0;
	};
	class WBK_Securitron_3_O : WBK_Securitron_3 {
		_generalMacro = "WBK_Securitron_3_O";
		side = 0;
	};
	class WBK_Securitron_4_O : WBK_Securitron_4 {
		_generalMacro = "WBK_Securitron_4_O";
		side = 0;
	};
	class WBK_Securitron_Victor_O : WBK_Securitron_Victor {
		_generalMacro = "WBK_Securitron_Victor_O";
		side = 0;
	};
	
	class WBK_Securitron_1_I : WBK_Securitron_1 {
		_generalMacro = "WBK_Securitron_1_I";
		side = 2;
	};
	class WBK_Securitron_2_I : WBK_Securitron_2 {
		_generalMacro = "WBK_Securitron_2_I";
		side = 2;
	};
	class WBK_Securitron_3_I : WBK_Securitron_3 {
		_generalMacro = "WBK_Securitron_3_I";
		side = 2;
	};
	class WBK_Securitron_4_I : WBK_Securitron_4 {
		_generalMacro = "WBK_Securitron_4_I";
		side = 2;
	};
	class WBK_Securitron_Victor_I : WBK_Securitron_Victor {
		_generalMacro = "WBK_Securitron_Victor_I";
		side = 2;
	};
	
	
	class WBK_Securitron_1_C : WBK_Securitron_1 {
		_generalMacro = "WBK_Securitron_1_C";
		side = 3;
	};
	class WBK_Securitron_2_C : WBK_Securitron_2 {
		_generalMacro = "WBK_Securitron_2_C";
		side = 3;
	};
	class WBK_Securitron_3_C : WBK_Securitron_3 {
		_generalMacro = "WBK_Securitron_3_C";
		side = 3;
	};
	class WBK_Securitron_4_C : WBK_Securitron_4 {
		_generalMacro = "WBK_Securitron_4_C";
		side = 3;
	};
	class WBK_Securitron_Victor_C : WBK_Securitron_Victor {
		_generalMacro = "WBK_Securitron_Victor_C";
		side = 3;
	};
	
	class WBK_Protectron_1 : WBK_C_ExportClass {
		side = 1;
		editorSubcategory = "WBK_Robots_Protectrons";
		faction = "WBK_AM_ROBOTS";
		WBK_Robot_Health = 120;
		WBK_LootableCreature = ["AM_metalJunk","AM_metal_wire","24Rnd_MicroFusionCell_Mag","AM_DrainedSEC"];
		WBK_RobotVoiceovers = [["Protectron_attack_1","Protectron_attack_2","Protectron_attack_3","Protectron_attack_4","Protectron_attack_5","Protectron_attack_6","Protectron_attack_7","Protectron_attack_8","Protectron_attack_9","Protectron_attack_10"],["Protectron_death_1","Protectron_death_2","Protectron_death_3","Protectron_death_4"]];
		hiddenSelections[] = {"camo1","camo2"};
		hiddenSelectionsTextures[] = {"sterben_top\am_items_2\npc\protectron\protectron_blue.paa","sterben_top\am_items_2\npc\protectron\protectronglass_on.paa"};
		_generalMacro = "WBK_Protectron_1";
		canBleed = 0;
		impactEffectsBlood = "ImpactMetal";
		impactEffectsNoBlood = "ImpactPlastic";
		gestures = "CfgGestures_WBK_Protectron";
		moves = "CfgMoves_WBK_Protectron";
		class SoundEnvironExt {		
			generic[] = {
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_l01.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_l02.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_l03.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_r01.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_r02.wav", 2, 1, 40}},
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_r03.wav", 2, 1, 40}}
			};
		};
		class SoundEquipment {	
		    soldier[] = {
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_l01.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_l02.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_l03.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_r01.wav", 2, 1, 40}},
			 {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_r02.wav", 2, 1, 40}},
             {"run", {"\WBK_AM_CustomSkelCreatures\sounds\protectron\protectron_foot_r03.wav", 2, 1, 40}}
			};
		};
		class SoundBreath
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundBreathAiming
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundDrown
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundInjured
		{
			person_moan1[] = {};
			person_moan2[] = {};
			person_moan3[] = {};
			person_moan4[] = {};
			person_moan5[] = {};
			person_moan6[] = {};
			person_moan7[] = {};
			person_moan8[] = {};
			person_moan9[] = {};
			person_moan10[] = {};
			person_moan11[] = {};
			person_moan12[] = {};
			person_moan13[] = {};
			person_moan14[] = {};
			person_moan15[] = {};
			person_moan16[] = {};
			person_moan17[] = {};
			person_moan18[] = {};
		};
		class SoundBleeding
		{
			breath[] = {};
		};
		class SoundChoke
		{
			breath[] = {};
			breath1[] = {};
			breath2[] = {};
			breath3[] = {};
			breath4[] = {};
			breath5[] = {};
			breath6[] = {};
			breath7[] = {};
			breath8[] = {};
			breath9[] = {};
			breath10[] = {};
			breath11[] = {};
			breath12[] = {};
			breath13[] = {};
			breath14[] = {};
			breath15[] = {};
			breath16[] = {};
			breath17[] = {};
			breath18[] = {};
		};
		class SoundRecovered
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
		class SoundBreathAutomatic
		{
			breath[] = {};
			breath0[] = {};
		};
		
		class SoundBreathInjured
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
		class SoundBurning
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
		class SoundBreathSwimming
		{
			breathSwimming1[] = {};
		};
		class SoundHitScream
		{
			Person1[] = {};
			Person2[] = {};
			Person3[] = {};
			Person4[] = {};
			Person5[] = {};
			Person6[] = {};
			Person7[] = {};
			Person8[] = {};
			Person9[] = {};
			Person10[] = {};
			Person11[] = {};
			Person12[] = {};
			Person13[] = {};
			Person14[] = {};
			Person15[] = {};
			Person16[] = {};
			Person17[] = {};
			Person18[] = {};
		};
        items[] = {};
		uniformClass = "Protectron_Uniform";
		nakedUniform = "Protectron_Uniform";
		vehicleclass = "Men";
		displayName = "Protectron";
		model = "WBK_AM_CustomSkelCreatures\models\AM_Protectron.p3d";
		armor = 7;
		scope = 2;
		canCarryBackPack = 1;
		canDeactivateMines = 0;
		engineer = 0;
		attendant = 1;
		class Character {
			radius = 200;
			detectionRadius = 500;
			chaseDistance = 51;
			coverRadius = 50;
			escapeRadius = 200;
			damage = 0.4;
			damageHitPoints[] = {{"HitLeftLeg", 0.4}, {"HitRightLeg", 0.4}, {"HitBody", 0.7}};
			armor = 7;
			attackDistances[] = {2, 3};
			allowWalk = 1;
			aggressive = 1;
			secrecy = 0.4;
			curious = 1;
			cowardice = 0;
			societal = 0;
			tactful = 1;
			courage = 1;
			friendly[] = {};
			
			class Sounds {
				idle[] = {};
				attack[] = {};
				hit[] = {};
				other[] = {};
			};
			
			class Animations {
				attack_1[] = {};
				attack_2[] = {};
				attack_3[] = {};
				agry[] = {};
				eat[] = {""};
			};
			
			class HitPoints {
				class HitFace {
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.08;
					explosionShielding = 0.1;
					minimalHit = 0.01;
				};
				
				class HitNeck : HitFace {
					armor = 1;
					material = -1;
					name = "bip01_neck";
					passThrough = 0.1;
					radius = 0.1;
					explosionShielding = 0.5;
					minimalHit = 0.01;
				};
				
				class HitHead : HitNeck {
					armor = 1;
					material = -1;
					name = "bip01_head";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 0.5;
					minimalHit = 0.01;
					depends = "HitFace max HitNeck";
				};
				
				class HitPelvis {
					armor = 1;
					material = -1;
					name = "bip01_pelvis";
					passThrough = 0.1;
					radius = 0.2;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitAbdomen : HitPelvis {
					armor = 1;
					material = -1;
					name = "bip01_spine1";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 1;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitDiaphragm : HitAbdomen {
					armor = 1;
					material = -1;
					name = "bip01_spine2";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitChest : HitDiaphragm {
					armor = 1;
					material = -1;
					name = "bip01_spine3";
					passThrough = 0.1;
					radius = 0.15;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
				};
				
				class HitBody : HitChest {
					armor = 6500;
					material = -1;
					name = "Body";
					passThrough = 0.1;
					radius = 0.16;
					explosionShielding = 6;
					visual = "injury_body";
					minimalHit = 0.01;
					depends = "HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
				};
				
				class HitArms {
					armor = 1;
					material = -1;
					name = "arms";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
				};
				
				class HitHands : HitArms {
					armor = 1;
					material = -1;
					name = "hands";
					passThrough = 1;
					radius = 0.1;
					explosionShielding = 1;
					visual = "injury_hands";
					minimalHit = 0.01;
					depends = "HitArms";
				};
				
				class HitLegs {
					armor = 1;
					material = -1;
					name = "legs";
					passThrough = 1;
					radius = 0.12;
					explosionShielding = 1;
					visual = "injury_legs";
					minimalHit = 0.01;
				};
			};
			armorStructural = 0.4;
			explosionShielding = 0.04;
			minTotalDamageThreshold = 0.001;
			impactDamageMultiplier = 0.5;
		};
		weapons[]=
		{
			"Throw",
			"Put"
		};
		magazines[]=
		{
		};
		respawnweapons[]=
		{
			"Throw",
			"Put"
		};
		respawnMagazines[]=
		{
		};
		linkedItems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
		RespawnlinkedItems[]=
		{
			"ItemGPS",
			"ItemMap",
			"ItemCompass",
			"ItemWatch",
			"ItemRadio"
		};
	};
	class WBK_Protectron_1_O : WBK_Protectron_1 {
		_generalMacro = "WBK_Protectron_1_O";
		side = 0;
	};
	class WBK_Protectron_1_I : WBK_Protectron_1 {
		_generalMacro = "WBK_Protectron_1_I";
		side = 2;
	};
	class WBK_Protectron_1_C : WBK_Protectron_1 {
		_generalMacro = "WBK_Protectron_1_C";
		side = 3;
	};
};

class Extended_InitPost_EventHandlers {
	class WBK_Securitron_1 {
        class AI_Securitron_Init {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\WBK_AM_CustomSkelCreatures\AI\Securitron_AI.sqf"";};";
        };
    };
	class WBK_Protectron_1 {
        class AI_Protectron_Init {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\WBK_AM_CustomSkelCreatures\AI\Protectron_AI.sqf"";};";
        };
    };
	class WBK_Deathclaw_1 {
        class AI_Deathclaw_Init {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\WBK_AM_CustomSkelCreatures\AI\AI_Deathclaw.sqf"";};";
        };
    };
	class WBK_Radroach_1 {
        class AI_Radroach_Init {
            init = "_unit = _this select 0; if (local _unit) then {_unit execVM ""\WBK_AM_CustomSkelCreatures\AI\AI_Radroach.sqf"";};";
        };
    };
};

class Extended_PostInit_EventHandlers 
{
    class AM_CustomCreature_PostInit 
	{
        init="call compile preprocessFileLineNumbers '\WBK_AM_CustomSkelCreatures\AI\XEH_postInit.sqf'";
    };
};
