#include "basicdefines_A3.hpp"
#include "CfgPatches.hpp"

// Declaration of Custom Info panels defaults
class DefaultVehicleSystemsDisplayManagerLeftSensors
{
	class components;
};
class DefaultVehicleSystemsDisplayManagerRightSensors
{
	class components;
};

class CfgVehicles
{
	//Needed class definitions since we are inheriting parameters from those classes
	class Air;
	class Plane: Air
	{
		class HitPoints;
	};

	class Plane_Base_F: Plane
	{
		class AnimationSources;
		class HitPoints: HitPoints
		{
			class HitHull;
		};
		class Components;
		class Turrets;
		class MainTurret;
		class NewTurret;
		class CopilotTurret;
		class ViewOptics;
		class Eventhandlers;
	};

	//Plane class
	class PSC_XVB_02_Base: Plane_Base_F
	{
		scope							= 0;  					//base class should be hidden
		displayName						= "(PSC) XVB-02";			// how is the plane displayed (named) in editor
		model							= "\PSC_Vehicles_A\XVB02_Base\PSC_XVB02_Base.p3d";		// path to model of the plane
		accuracy						= 0.2;												// how hard it is to distinguish the type of the vehicle (bigger number means harder)
		editorSubcategory				= "PSC_EdSubcat_Vertibird";		// category in which we want to see this plane in editor
		memoryPointTaskMarker			= "TaskMarker_1_pos";	// The memory point defines the position where the task marked will be displayed if the task is attached to the particular object


		armor							= 400;					// base value of the vehicle armor, reduces the damage taken from the direct hit. Affects armor parameter in the HitPoints class
		armorStructural					= 2;					// value affecting passThrough parameter in the HitPoints class (divides the extent of the damage transferred by passThrough). It also increases overall durability of the object (even if it has no hitpoints).
		armorLights						= 0.1;					// level of protection for lights located on hull
		epeImpulseDamageCoef			= 35;					// coeficient for physx damage
		damageResistance				= 0.04;					// for AI if it is worth to be shoot at
		destrType						= "DestructWreck";		// how does the vehicle behave while destroyed, this one changes to the Wreck lod of the model
		driverCanEject					= 0;					// needed for hiding engine "Eject" action if we want to use ejection seats instead
		explosionShielding = 40;
		waterLeakiness = 12;
		waterResistanceCoef = 0.2;
		ejectSpeed[] = {0,-2,0};
		enableSweep = 0;
		showAllTargets = 4;
		supplyRadius = 9;
		getInRadius = 4;
		cabinOpening = 0;
		gearRetracting = 1;
		maxSpeed = 450;
		landingAoa = "9*3.1415/180";
		landingSpeed = 90;
		stallSpeed = 70;
		stallWarningTreshold = 0.2;
		wheelSteeringSensitivity = 0.8;
		airBrake = 1;
		airBrakeFrictionCoef = 8;
		flaps = 1;
		flapsFrictionCoef = 2.5;
		angleOfIndicence = "3*3.1415/180";
		envelope[] = {0,0.05,0.3,1.2,3.4,3.8,4.0,4.1,4.2,4.3,4.3,4.1,3.8,1.0};
		altNoForce = 11000;
		altFullForce = 4000;
		throttleToThrustLogFactor = 3;
		thrustCoef[] = {1.4,1.39,1.37,1.35,1.32,1.29,1.24,1.15,1.1,1.05,0.5,0.0,0};
		aileronSensitivity = 0.5;
		aileronCoef[] = {0.0,0.5,0.9,1.0,1.05,1.1,1.12};
		elevatorSensitivity = 1.1;
		elevatorCoef[] = {0.0,0.4,0.9,1.0,1.05,1.1,1.15};
		rudderInfluence = 0.848;
		rudderCoef[] = {0.0,0.8,1.5,1.9,2.2,2.4,2.5,2.5,2.6,2.6,2.6};
		aileronControlsSensitivityCoef = 1.0;
		elevatorControlsSensitivityCoef = 2;
		rudderControlsSensitivityCoef = 1.0;
		draconicForceXCoef = 7;
		draconicForceYCoef = 2;
		draconicForceZCoef = 1;
		draconicTorqueXCoef[] = {16.0,15.5,15.0,14.5,14.0,14.0,14.5,15.0,16.0,17.0,18.0};
		draconicTorqueYCoef[] = {1.0,1.2,1.4,2.0,4.0,7.0,6.8,6.6,6.4,6.2,5.5,5.0,4.5,3.9,3.0,1.0};
		vtol = 3;
		VTOLYawInfluence = 20.0;
		VTOLPitchInfluence = 10.0;
		VTOLRollInfluence = 10.0;
		slingLoadCargoMemoryPoints[]	= {"SlingLoadCargo1","SlingLoadCargo2","SlingLoadCargo3","SlingLoadCargo4"};	//array of memory points for slingloading hook position

		driverAction					= "pilot_Heli_Light_02";	// what is the standard pose for the pilot, defined as animation state
		transportSoldier = 10;							/// how many cargo positions are available
		cargoAction[] = { 								/// the same array as getIn/getOut actions for actions to switch to for cargo while inside the heli
			passenger_apc_narrow_generic03,
			passenger_apc_generic02,
			passenger_apc_narrow_generic01,
			passenger_apc_generic04,
			passenger_apc_narrow_generic02,
			passenger_generic01_leanright,
			passenger_generic01_leanleft,
			passenger_apc_narrow_generic02,
			passenger_boat_holdright2,
			passenger_boat_holdleft2
		};

		cargoIsCoDriver[] = {0, 0}; 				/// the cargo don't utilize some special memory points to get in
		memoryPointsGetInCargo[] = {"pos_cargo_l","pos_cargo_r"};		/// on what memory points should the cargo get in the heli
		memoryPointsGetInCargoDir[] = {"pos_cargo_l_dir","pos_cargo_r_dir"};	/// what is the direction of the cargo facing during get in animation (and opposite for get out)
		hideWeaponsCargo = 1;						/// this makes the poses easier and adds some performance gain because the proxies don't need to be drawn
		cargoProxyIndexes[] = {1,2,3,4,5,6,7,8,9,10};		/// what indexes does regular cargo sit on

		viewDriverShadowDiff			= 0.5;					//diffuse light attenuation
		viewDriverShadowAmb				= 0.5;					//ambient light attenuation

		radarTargetSize					= 0.8;
		visualTargetSize				= 0.8;
		irTargetSize					= 0.8;

		driverLeftHandAnimName			= "throttle_pilot";		// conecting throttle animation to left hand of pilot

		icon							= "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Map_Plane_Fighter_03_CA.paa"; 	// icon in map/editor
		picture							= "A3\Air_F_Gamma\Plane_Fighter_03\Data\UI\Plane_Fighter_03_CA.paa";		// small picture in command menu



		LockDetectionSystem = CM_Lock_Radar;							// this uses macros from basicDefines_A3, just add more to gain more systems for the vehicle
		incomingMissileDetectionSystem = CM_Lock_Radar + CM_Missile;	// for example CM_Lock_Laser + CM_Lock_Radar, parser is able to evaluate that, or simply 12 in that case

		
		class Turrets: Turrets
		{
			class Copilot_gunner: CopilotTurret
			{
				body					= "minigun_left_upper";
				gun						= "minigun_left_lower";
				animationsourcebody		= "minigun_left_upper";
				animationSourceGun		= "minigun_left_lower";
				gunBeg					= "left_t_muz_end";
				gunEnd					= "left_t_muz_beg";
				minElev					= -45;
				maxElev					= 0;
				minTurn					= -120;
				maxTurn					= 120;
				initTurn				= 0;
				maxHorizontalRotSpeed	= 1.75;
				maxVerticalRotSpeed		= 1.5;
				gunnerLeftHandAnimName = "left_t_hl";			/// what bone in model is the left hand connected to via IK (pilot has it set by default in parent class)
				gunnerRightHandAnimName = "left_t_hr";
				gunnerAction			= "gunner_standup01_minigun";
				gunnerInAction			= "gunner_standup01_minigun";
				gunnerGetInAction		= "GetInMRAP_01";
				gunnerGetOutAction		= "GetOutMRAP_01";
				gunnerName				= "Copilot";
				proxyIndex              = 2;	
				hideWeaponsGunner		= 0;
				soundServo[]			= {"",0.01,1};
				stabilizedInAxes 		= 3;
				outGunnerMayFire		= 1;
				inGunnerMayFire			= 1;
				commanding				= 0;
				primaryGunner			= 1;
				memoryPointsGetInGunner	= "pos_cargo_r";
				memoryPointsGetInGunnerDir = "pos_cargo_r_dir";
				selectionFireAnim = "flashR";
				weapons[]				= {""};
				magazines[]				= {""};
				memoryPointGunnerOptics	= "left_t_sight";
				memoryPointGun = "left_t_end";
				gunnerOpticsShowCursor	= 1;
				castGunnerShadow		= 1;
				startEngine 			= 0;
				enableManualFire		= 0;
				gunnerOpticsModel		= "\A3\Weapons_F_Beta\Reticle\Heli_Attack_01_Optics_Gunner_wide_F";
				gunnerForceOptics		= 0;
				hasGunner				= true;
				//enabledByAnimationSource 	= "left_door";
				class ViewGunner: ViewOptics
				{
					initAngleX			= 90;
					minAngleX			= -45;
					maxAngleX			= 45;
					initFov				= 0.9;
					minFov				= 0.42;
					maxFov				= 0.9;
					visionMode[]		= {};
				};	
			};
		};	

		class TransportItems{};	// planes are usually not used to transport items, there could possibly be a few FAKs

		class HitPoints: HitPoints
		{
			class HitHull: HitHull				{armor = 4;		explosionShielding = 3;		name = "HitHull";			passThrough = 1;	visual = "Hit_Hull";		radius = 0.3;	minimalHit = 0.05;	depends = "0";	material = -1;};
			class HitEngine: HitHull			{armor = 4;		explosionShielding = 3.5;	name = "HitEngine";			passThrough = 1;	visual = "Hit_Engine";		radius = 0.3;	minimalHit = 0.05;	depends = "0";};
			class HitAvionics: HitHull			{armor = 3;		explosionShielding = 3.5;	name = "HitAvionics";		passThrough = 0.5;	visual = "";				radius = 0.2;	minimalHit = 0.05;	depends = "0";};
			// Main fueslage fuel tank
			class HitFuel: HitHull				{armor = 4.5;	explosionShielding = 4;		name = "HitFuel";			passThrough = 0.8;	visual = "";				radius = 0.3;	minimalHit = 0.1;	depends = "0";};
			// Wingtips fuel tanks
			class HitFuel_Lead_Left: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel1_Leads";	passThrough = 0;	visual = "Hit_AileronL";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Lead_Right: HitFuel	{armor = 1.8;	explosionShielding = 3;		name = "HitFuel2_leads";	passThrough = 0;	visual = "Hit_AileronR";	radius = 0.13;	minimalHit = 0.1;	};
			class HitFuel_Left: HitFuel			{armor = 2.5;	explosionShielding = 5;		name = "HitFuel1";			passThrough = 0.2;	visual = "Hit_Fuel2a";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Left";};
			class HitFuel_Right: HitFuel		{armor = 2.5;	explosionShielding = 5;		name = "HitFuel2";			passThrough = 0.2;	visual = "Hit_Fuel2b";		radius = 0.2;	minimalHit = 0.1;	depends = "HitFuel_Lead_Right";};
			class HitFuel2: HitFuel				{armor = 999;	explosionShielding = 0;		name = "HitFuel2";			passThrough = 0.2;	visual = "";				radius = 0.2;	minimalHit = 0.1;	depends = "(HitFuel_Left + HitFuel_Right)*0.5";};
			// Cockpit glass
			class HitGlass1: HitHull			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass1";			passThrough = 0;	visual = "glass1"; 			radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitGlass2: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass2";			passThrough = 0;	visual = "glass2"; 			radius = 0.2;	minimalHit = 0.1;	};
			class HitGlass3: HitGlass1			{armor = 1.2;	explosionShielding = 3;		name = "HitGlass3";			passThrough = 0;	visual = "glass3";			radius = 0.2;	minimalHit = 0.1;	};
			// Steering hitpoints	- LC means left or center
			class HitLAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitLAileron_Link";	passThrough = 0;	visual = "Hit_AileronL"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			class HitRAileron_Link: HitHull		{armor = 1.8;	explosionShielding = 3.5;	name = "HitRAileron_Link";	passThrough = 0;	visual = "Hit_AileronR"; 	radius = 0.09;	minimalHit = 0.1;	depends = "0";};
			class HitLAileron: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitLAileron";		passThrough = 0.3;	visual = "Hit_AileronL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitLAileron_Link";};
			class HitRAileron: HitLAileron		{armor = 1.5;	explosionShielding = 3;		name = "HitRAileron";		passThrough = 0.3;	visual = "Hit_AileronR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "HitRAileron_Link";};
			class HitLCRudder: HitHull			{armor = 2;		explosionShielding = 3;		name = "HitLCRudder";		passThrough = 0.3;	visual = "Hit_RudderC"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitLCElevator: HitHull		{armor = 1.5;	explosionShielding = 3;		name = "HitLCElevator";		passThrough = 0.3;	visual = "Hit_ElevatorL"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
			class HitRElevator: HitHull			{armor = 1.5;	explosionShielding = 3;		name = "HitRElevator";		passThrough = 0.3;	visual = "Hit_ElevatorR"; 	radius = 0.2;	minimalHit = 0.1;	depends = "0";};
		};

		class Exhausts
		{
			class Exhaust1
			{
				position = "Exhaust1";				// position of exhaust memory point from smoke is coming from
				direction = "Exhaust1_dir";			// direction of exhaust smoke
				effect = "ExhaustsEffectPlaneHP";	// efect used for exhaust - variant which reacts to engine damage

				engineIndex = 0; 					// index used for detection which engine is getting damage
			};
			
			class Exhaust2
			{
				position = "exhaust2";				// position of exhaust memory point from smoke is coming from
				direction = "exhaust2_dir";			// direction of exhaust smoke
				effect = "ExhaustsEffectPlaneHP";	// efect used for exhaust - variant which reacts to engine damage

				engineIndex = 0; 					// index used for detection which engine is getting damage
			};
		};

		class WingVortices
		{
			class WingTipLeft
			{
				effectName	= "WingVortices";		// name of the effect
				position	= "body_vapour_L_E";	// name of the memory point in model
			};

			class WingTipRight
			{
				effectName	= "WingVortices"; 		// name of the effect
				position	= "body_vapour_R_E";	// name of the memory point in model
			};
			class BodyLeft
			{
				effectName	= "BodyVortices";		// name of the effect
				position	= "body_vapour_L_S";	// name of the memory point in model
			};

			class BodyRight
			{
				effectName	= "BodyVortices";		// name of the effect
				position	= "body_vapour_R_S";	// name of the memory point in model
			};
		};

		#include "sounds.hpp" 						// sounds are included in separate file to prevent cluttering				// flight model is included in separate file to prevent cluttering, too
		#include "physx.hpp" 						// PhysX suspension setup

		driveOnComponent[] = {};  // array of components to be assigned special low-friction material (usually wheels) - not used anymore, for PhysX suspension use blank array (old array was - {"wheel_1","wheel_2","wheel_3"} )

		/*
		// These properties become obsolete with the new Sensor component configuration
		irScanRangeMin = 500;		// defines the range of IR sight of the vehicle
		irScanRangeMax = 5000;		// defines the range of IR sight of the vehicle
		irScanToEyeFactor = 2;		// defines the effectivity of IR sight of the vehicle
		laserScanner = 1;		// if the vehicle is able to see targets marked by laser marker
		*/

		gunAimDown = 0.029000;	// adjusts the aiming of gun relative to the axis of model
		headAimDown = 0.0000;	// adjusts the view of pilot to have crosshair centred

		
		memoryPointGun[] = {"Rocket_1","Rocket_2"};
		memoryPointLRocket = "Rocket_1"; // use this for simulating different rocked pods in case you don't want to mess with "maverick weapon" simulation
		memoryPointRRocket = "Rocket_2"; // it is used to alternate two points/pods of fire the missiles

		minFireTime = 30;			// how long does the pilot fire at one target before switching to another one

		threat[] = {1, 1, 1};		// multiplier of cost of the vehicle in eyes of soft, armoured and air enemies

		class Components : Components // class where various components can be defined and made available to the entity. Make sure you inherit from
		{
			class SensorsManagerComponent // Component containing the vehicle sensors
			{
				class Components
				{
					class IRSensorComponent // Individual sensor class. In this case an Infra-red Search & Track.
					{
						componentType = "IRSensorComponent"; 	// Type of the sensor. Options: IRSensorComponent, NVSensorComponent, LaserSensorComponent, ActiveRadarSensorComponent, PassiveRadarSensorComponent, VisualSensorComponent, ManSensorComponent

						class AirTarget      							// Sensor range for targets in look-up conditions, with sky background
						{
							minRange = 500;         					/// Minimum possible range in meters
							maxRange = 5000;       						/// Maximum possible range in meters
							objectDistanceLimitCoef = 1;    			/// Range in meters set as objectDistanceLimit = (objectDistanceLimitCoef * player's obj. view distance)
							viewDistanceLimitCoef = 1;      			/// Range in meters set as viewDistanceLimit = (viewDistanceLimitCoef * player's view distance)
							/// Smallest of [maxRange, objectDistanceLimit, viewDistanceLimit] is used as actual sensor's range. If this number is lower than minRange then minRange is used.
						};
						class GroundTarget : AirTarget     				// Sensor range for targets in look-down conditions, with ground background
						{
							maxRange = 3500; 			// Less than AirTarget - It's usually more difficult to detect something against ground clutter.
						};

						angleRangeHorizontal = 90;     	// Azimuth coverage in degrees
						angleRangeVertical = 90;       	// Elevation coverage in degrees
						groundNoiseDistanceCoef = 0.1;  // Portion of sensor-target-ground distance below which the target becomes invisible to the sensor
						maxGroundNoiseDistance = 100;   // Distance from the ground background in meters above which the target will be visible even if still below groundNoiseDistanceCoef
						minSpeedThreshold = 0;        	// Speed in km/h above which the target will start becoming visible. Useful for simulating doppler-radar.
						maxSpeedThreshold = 0;       	// Speed above which the target becomes visible even if below groundNoiseDistanceCoef. Linearly decreases to minSpeedThreshold
						minTrackableSpeed = -600;  		// Min speed of target to be detectable
						maxTrackableSpeed = 600;      	// Max speed of target to be detectable. In this case the sensor won't be able to detect fast moving targets.
						minTrackableATL = -1e10;       	// Min altitude above terrain level of target to be detectable
						maxTrackableATL = 1e10;        	// Max altitude above terrain level of target to be detectable
						typeRecognitionDistance = 1000; // Distance in meters at which the sensor recognizes the actual target vehicle type
						animDirection = "";  			// Model selection to set the sensor direction. In this case empty, but it can be useful on tanks or gunships.
						aimDown = 15;                   // Elevation offset in degrees of the sensor from the animDirection. Looking down 15° in this case.
					};

					class PassiveRadarSensorComponent
					{
						componentType = "PassiveRadarSensorComponent"; // Component for Radar Warning Receiver

						class AirTarget
						{
							minRange = 25;
							maxRange = 5000;

							objectDistanceLimitCoef = -1;    //Don't limit the range by obj. view distance
							viewDistanceLimitCoef = -1;      //Don't limit the range by view distance
						};
						class GroundTarget : AirTarget {};
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentLeft : DefaultVehicleSystemsDisplayManagerLeftSensors // inherit from the defaults to get correct display positioning
			{
				class Components : Components 	// Inherit from the defaults so we don't have to re-define each panel component
				{
					class VehicleDriverDisplay	// Add a new camera feed module to the left panel among the ones that were inherited from the defaults
					{
						componentType = "TransportFeedDisplayComponent"; 	// This component will provide a camera feeed
						source = Driver; 									// The camera feed source will be driver - driver's optics. In this case the pilotCamera
						resource = RscTransportCameraComponentDriver; 		// Define which resource will be used for the display
					};
				};
			};
			class VehicleSystemsDisplayManagerComponentRight : DefaultVehicleSystemsDisplayManagerRightSensors // inherit from the defaults to get correct display positioning
			{
				class Components : Components 	// Inherit from the defaults so we don't have to re-define each panel component
				{
					class SensorDisplay  		// Add another Sensor Display module to the right panel among the ones that were inherited from the defaults
					{
						componentType = "SensorsDisplayComponent"; 	// This component will provide a sensor displaye
						range = 8000; 								// Distance resolution - maximum range displayed on the sensor in meters
						resource = "RscCustomInfoSensors"; 			// Define which resource will be used for the display
					};
				};
			};
			class TransportPylonsComponent
			{
				class Pylons
				{
					class PylonLeft1
					{
						attachment = "PS_VB_200Rnd_40mm_G";
						priority = 2;
						hardpoints[] = {"20MM_TWIN_CANNON"};
						UIposition[] = {0.06,0.4};
						turret[] = {1};
						maxweight		= 10;
					};
					class PylonLeft2: PylonLeft1
					{
						attachment = "PS_VB_autocannon_mag_2000";
						priority = 3;
						hardpoints[] = {"B_A143_BUZZARD_CENTER_PYLON"};
						UIposition[] = {0.08,0.35};
						turret[] = {1};
					};
				};
			};
			class TransportCounterMeasuresComponent;
		};

		class Reflectors		// landing lights of the plane, turned on by AI while in night and "careless" or "safe"
		{
			class Left
			{
				color[] = {7000, 7500, 10000, 1}; 	// defines red, green, blue and alpha components of the light
				ambient[] = {100, 100, 100};		// the same definition format for colouring the environment around
				position = "Light_L";				// name of memory point in model to take the origin of the light
				direction = "Light_L_end";			// name of memory point in the model to make a vector of direction of light from it's position
				hitpoint = "Light_L";				// name of hitpoint selection in hitpoint lod of the model to be affected by damage
				selection = "Light_L";				// name of selection in visual lods of the model that are going to be hidden while the light is off
				innerAngle = 20;					// angle from light direction vector where the light is at full strength
				outerAngle = 60;					// angle from light direction vector where the light is completely faded out
				coneFadeCoef = 10;					// coefficient of fading the light between inner and outer cone angles
				intensity = 50;						// how much does the light shine (in some strange units, just tweak until it is satisfying), rough approximation is intensity = (brightness * 50) ^ 2
				useFlare = true;					// boolean switch if the light produces flare or not
				dayLight = false;					// boolean switch if the light is used during day or not
				FlareSize = 4;						// how big is the flare, using the same metrics as intensity
				size = 1;							// defines the visible size of light, has not much of an effect now
				class Attenuation					// describes how fast does the light dim
				{
					start = 1;						// offset of start of the attenuation
					constant = 0;					// constant attenuation of the light in any distance from source
					linear = 0;						// coefficient for linear attenuation
					quadratic = 4;					// coefficient for attenuation with square of distance from source

					hardLimitStart = 150;			// distance from source where the light intensity decreases for drawing
					hardLimitEnd = 300;				// distance from source where the light is not displayed (shorter distances increase performance)
				};
			};
			class Right: Left
			{
				position = "Light_R";
				direction = "Light_R_end";
				hitpoint = "Light_R";
				selection = "Light_R";
			};
		};

		class Damage 			// damage changes material in specific places (visual in hitPoint)
		{
			tex[] = {};
			mat[] =
			{
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1.rvmat",			// material mapped in model
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_damage.rvmat",	// changes to this one once damage of the part reaches 0.5
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_1_destruct.rvmat",	// changes to this one once damage of the part reaches 1

				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_body_2_destruct.rvmat",

				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat",

				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_in.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_damage.rvmat",
				"A3\Air_F_Gamma\Plane_Fighter_03\Data\Plane_Fighter_03_glass_destruct.rvmat"
			};
		};

		hiddenSelections[] =	// we want to allow changing of colours, this defines on what selection are the textures used
		{
			"camo1",
			"camo2"
		};

		memoryPointDriverOptics	= "PilotCamera_pos";		//mem. point for pilot camera
		unitInfoType			= "RscOptics_CAS_Pilot";	//rsc with DriverOptics elements
		driverWeaponsInfoType	= "RscOptics_CAS_01_TGP";	//resource with Weapon UI elements that will be used when looking through the pilotCamera

		class MFD							// class for helmet mounted displays, is going to be documented separately
		{
			class AirplaneHUD
			{
				enableParallax = true;		//enables parallax effect for plane's HUD
				#define PosY0Center (0.383)
				#define PosY0CenterAdjust 0.13
				#define PosYCenterHorizont 0.38
				#define PosX0Center 0.4975
				#define SizeX10deg (0.94+0.03-0.02)
				#define SizeY10deg (1.3-0.2-0.03)
				#include "cfgHUD.hpp"		// here we are including file with HUD configuration itself
			};
		};

		class pilotCamera // A class that creates a turret-like slewable secondary optics for the pilot. Used to simulate Targeting Pods.
		{
			class OpticsIn
			{
				class Wide
				{
					initAngleX			= 0; minAngleX=0; maxAngleX=0;
					initAngleY			= 0; minAngleY=0; maxAngleY=0;
					initFov				= 0.25; 			// Zoom level of the magnification mode. In this case discrete - min/max/init set to the same value
					minFov				= 0.25;
					maxFov				= 0.25;
					directionStabilized	= 1; 				// Allows stabilization of the turret
					visionMode[]		= {"Normal","Ti"};	// Available spectrum modes - in this case visible and thermal
					thermalMode[]		= {0,1};			// TI modes - in this case WHOT and BHOT
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_wide_F.p3d"; // model used for the reticle
					opticsPPEffects[]	= {};  				// post-process effects used in the optics
				};
				class Medium : Wide
				{
					opticsDisplayName	= "MFOV";
					initFov				= 0.19;
					minFov				= 0.19;
					maxFov				= 0.19;
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_medium_F.p3d";
				};
				class Narrow : Wide
				{
					initFov				= 0.125;
					minFov				= 0.125;
					maxFov				= 0.125;
					gunnerOpticsModel	= "\A3\Drones_F\Weapons_F_Gamma\Reticle\UAV_Optics_Gunner_narrow_F.p3d";
				};
				showMiniMapInOptics				= true;
				showUAVViewInOptics				= false;
				showSlingLoadManagerInOptics	= false;
			};

			minTurn					= -160;		// yaw limits
			maxTurn					= +160; 	// yaw limits
			initTurn				= 0;		// initial yaw angle
			minElev					= -10;		// pitch limits
			maxElev					= 90;		// pitch limits
			initElev				= 0;		// initial pitch angle
			maxXRotSpeed			= 0.3;		// yawing speed
			maxYRotSpeed			= 0.3;		// pitching speed
			maxMouseXRotSpeed		= 0.5;		// yawing speed for mouse
			maxMouseYRotSpeed		= 0.5;		// pitching speed for mouse
			pilotOpticsShowCursor	= 1;		// aimCursor is display inside optics (is useful to see plane direction)
			controllable			= true;		// camera can be slewed, set to 0 to have static camera
		};

		class AnimationSources: AnimationSources	// custom made animation sources to show/hide all the different parts for different loadout
		{
			class Muzzle_flash {source = "ammorandom"; weapon = "gatling_20mm";};	// used to rotate the muzzle flash, dependent on the weapon selected
			// animation sources for EJS
			// antimation sources for suspension animations and wheel rotation
			class Wheel_1_source			{source = wheel; wheel = Wheel_1;};
			class Wheel_2_source			{source = wheel; wheel = Wheel_2;};
			class Wheel_3_source			{source = wheel; wheel = Wheel_3;};
			class Wheel_4_source			{source = wheel; wheel = Wheel_4;};
			class Damper_1_source			{source = damper; wheel = Wheel_1;};
			class Damper_2_source			{source = damper; wheel = Wheel_2;};
			class Damper_3_source			{source = damper; wheel = Wheel_3;};
			class Damper_4_source			{source = damper; wheel = Wheel_4;};
			
			//extra animations sources for damage representation
			class HitGlass1 				{source="Hit"; hitpoint="HitGlass1"; 			raw=1;};
			class HitGlass2: HitGlass1 		{hitpoint = "HitGlass2";};
			class HitGlass3: HitGlass1 		{hitpoint = "HitGlass3";};
			class HitAvionics               {source = "Hit"; hitpoint = "HitAvionics"; 		raw=1;};
		};

		class UserActions		//used only when "driverCanEject" is zero and we want to use ejection system
		{
		};

		class Eventhandlers: Eventhandlers
		{
			hit = "_this call bis_fnc_planeAiEject";	//event handler used for AI to use ejection seats
		};

		weapons[] =	// lets use the weapons from Buzzard
		{
			"PS_Mininuke_PW1","CMFlareLauncher"
		};

		magazines[] = // and their respective magazines
		{
			"Pylon_PS_Mininuke_P_16rnd","Pylon_PS_Mininuke_P_16rnd","120Rnd_CMFlare_Chaff_Magazine","120Rnd_CMFlare_Chaff_Magazine"
		};
	};

	class PSC_NCR_XVB_02_Base: PSC_XVB_02_Base 
	{
		scope			= 2;				
		scopeCurator	= 2;				
		displayName		= "(NCR) XVB-02"; 

		side			= 1;					
		faction			= PSC_NCR;				
		crew			= "B_Fighter_Pilot_F";	

		availableForSupportTypes[]	= {"CAS_Bombing"};
		cost						= 3000000;
	};

	class PlaneWreck;

	class PSC_XVB_02_Base_wreck: PlaneWreck
	{
		scope				= 1;	
		model				= "\PSC_Vehicles_A\XVB02_Base\PSC_XVB02_Base_wreck.p3d";
		typicalCargo[]		= {};	
		irTarget			= 0;
		transportAmmo		= 0;
		transportRepair		= 0;
		transportFuel		= 0;
		transportSoldier	= 12;
		class Eventhandlers{};
	};
};