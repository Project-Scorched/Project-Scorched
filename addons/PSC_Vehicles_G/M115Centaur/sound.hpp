////////////////////////////////////////////////////////////////////
//DeRap: Produced from mikero's Dos Tools Dll version 4.97
//Sun Feb 21 13:23:55 2016 : Source 'file' date Sun Feb 21 13:23:55 2016
//http://dev-heaven.net/projects/list_files/mikero-pbodll
////////////////////////////////////////////////////////////////////

#define _ARMA_

//Class C:/Users/Shvetz/Desktop/config.bin{



class CfgSoundShaders
{
	class Engine_Base_RPM0_EXT_SoundShader
	{
	};
	class Engine_Base_RPM1_EXT_SoundShader
	{
	};
	class Engine_Base_RPM2_EXT_SoundShader
	{
	};
	class Engine_Base_RPM3_EXT_SoundShader
	{
	};
	class Engine_Base_RPM4_EXT_SoundShader
	{
	};
	class Engine_Base_RPM5_EXT_SoundShader
	{
	};
	class Engine_Base_RPM6_EXT_SoundShader
	{
	};
	class Engine_Base_RPM7_EXT_SoundShader
	{
	};
	class Engine_Base_RPM8_EXT_SoundShader
	{
	};
	class Engine_Base_RPM0_INT_SoundShader
	{
	};
	class Engine_Base_RPM1_INT_SoundShader
	{
	};
	class Engine_Base_RPM2_INT_SoundShader
	{
	};
	class Engine_Base_RPM3_INT_SoundShader
	{
	};
	class Engine_Base_RPM4_INT_SoundShader
	{
	};
	class Engine_Base_RPM5_INT_SoundShader
	{
	};
	class Engine_Base_RPM6_INT_SoundShader
	{
	};
	class Engine_Base_RPM7_INT_SoundShader
	{
	};
	class Engine_Base_RPM8_INT_SoundShader
	{
	};
	class Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_01_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_02_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_03_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_04_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_05_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_06_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_Brake_Hard_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_Brake_Soft_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_Turn_Hard_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Tracks_Turn_Soft_EXT_SoundShader: Base_Tracks_EXT_SoundShader
	{
	};
	class Base_Drive_Water_EXT_SoundShader
	{
	};
	class Base_Drive_Dirt_EXT_SoundShader
	{
	};
	class Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_01_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_02_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_03_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_04_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_05_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_06_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_Brake_Hard_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_Brake_Soft_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_Turn_Hard_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Tracks_Turn_Soft_INT_SoundShader: Base_Tracks_INT_SoundShader
	{
	};
	class Base_Drive_Water_INT_SoundShader
	{
	};
	class Base_Drive_Dirt_INT_SoundShader
	{
	};
	class APC_Engine_RPM0_EXT_SoundShader: Engine_Base_RPM0_EXT_SoundShader 
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_EXT_RPM0",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - 0))";
		volume = "engineOn * 0.8 * 1 * (rpm factor [0 *500, (0 *500 + 0.5 *(500-0 *500))]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(900 - 500)/(2100 - 500) - (((900 - 500)/(2100 - 500) - 0) - (1.5 * ((900 - 500)/(2100 - 500) - 0)))/2, 0])";
		range = "3*210";
	};
	class APC_Engine_RPM1_EXT_SoundShader: Engine_Base_RPM1_EXT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_EXT_RPM1",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (900 - 500)/(2100 - 500)))";
		volume = "engineOn * 0.8 * 1 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[0, (900 - 500)/(2100 - 500) - (((900 - 500)/(2100 - 500) - 0) - (1.5 * ((900 - 500)/(2100 - 500) - 0)))/2]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(1300 - 500)/(2100 - 500) - (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2, (900 - 500)/(2100 - 500) + (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2])";
		range = "3*215";
	};
	class APC_Engine_RPM2_EXT_SoundShader: Engine_Base_RPM2_EXT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_EXT_RPM2",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (1300 - 500)/(2100 - 500)))";
		volume = "engineOn * 0.8 * 1 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[(900 - 500)/(2100 - 500) + (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2, (1300 - 500)/(2100 - 500) - (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(1700 - 500)/(2100 - 500) - (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2, (1300 - 500)/(2100 - 500) + (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2])";
		range = "3*220";
	};
	class APC_Engine_RPM3_EXT_SoundShader: Engine_Base_RPM3_EXT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_EXT_RPM3",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (1700 - 500)/(2100 - 500)))";
		volume = "engineOn * 0.8 * 1 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[(1300 - 500)/(2100 - 500) + (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2, (1700 - 500)/(2100 - 500) - (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(2100 - 500)/(2100 - 500) - (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2, (1700 - 500)/(2100 - 500) + (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2])";
		range = "3*225";
	};
	class APC_Engine_RPM4_EXT_SoundShader: Engine_Base_RPM4_EXT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_EXT_RPM4",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (2100 - 500)/(2100 - 500)))";
		volume = "engineOn * 1 * 1 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[(1700 - 500)/(2100 - 500) + (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2, (2100 - 500)/(2100 - 500) - (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2])";
		range = "3*230";
	};


	class APC_Engine_RPM0_INT_SoundShader: Engine_Base_RPM0_INT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_INT_RPM0",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - 0))";
		volume = "engineOn * 1.2 * 1.5 * (rpm factor [0 *500, (0 *500 + 0.5 *(500-0 *500))]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(900 - 500)/(2100 - 500) - (((900 - 500)/(2100 - 500) - 0) - (1.5 * ((900 - 500)/(2100 - 500) - 0)))/2, 0])";
		range = "3*210";
	};
	class APC_Engine_RPM1_INT_SoundShader: Engine_Base_RPM1_INT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_INT_RPM1",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (900 - 500)/(2100 - 500)))";
		volume = "engineOn * 1.4 * 1.5 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[0, (900 - 500)/(2100 - 500) - (((900 - 500)/(2100 - 500) - 0) - (1.5 * ((900 - 500)/(2100 - 500) - 0)))/2]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(1300 - 500)/(2100 - 500) - (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2, (900 - 500)/(2100 - 500) + (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2])";
		range = "3*215";
	};
	class APC_Engine_RPM2_INT_SoundShader: Engine_Base_RPM2_INT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_INT_RPM2",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (1300 - 500)/(2100 - 500)))";
		volume = "engineOn * 1.5 * 1.5 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[(900 - 500)/(2100 - 500) + (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2, (1300 - 500)/(2100 - 500) - (((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500)) - (1.5 * ((1300 - 500)/(2100 - 500) - (900 - 500)/(2100 - 500))))/2]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(1700 - 500)/(2100 - 500) - (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2, (1300 - 500)/(2100 - 500) + (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2])";
		range = "3*220";
	};
	class APC_Engine_RPM3_INT_SoundShader: Engine_Base_RPM3_INT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_INT_RPM3",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (1700 - 500)/(2100 - 500)))";
		volume = "engineOn * 1.5 * 1.5 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[(1300 - 500)/(2100 - 500) + (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2, (1700 - 500)/(2100 - 500) - (((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500)) - (1.5 * ((1700 - 500)/(2100 - 500) - (1300 - 500)/(2100 - 500))))/2]) * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor [(2100 - 500)/(2100 - 500) - (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2, (1700 - 500)/(2100 - 500) + (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2])";
		range = "3*225";
	};
	class APC_Engine_RPM4_INT_SoundShader: Engine_Base_RPM4_INT_SoundShader
	{
		samples[] = {{"PSC_Vehicles_G\M115Centaur\data\sounds\APC_Engine_INT_RPM4",1}};
		frequency = "1 * (1 + 0.8 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) - (2100 - 500)/(2100 - 500)))";
		volume = "engineOn * 2.0 * 1.5 * (((1+0.1*0.5 *thrust) * ((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4]) - 0.3 * (1 - 0.5 *thrust)*((1-0.8 ) * (speed factor [0, 25]) + 0.8  * (rpm factor [500,	2100])) - 0.2*((abs(speed)) factor [2, 6]) + 0.2*((abs(speed)) factor [0, 4])*((abs(speed)) factor [0, 4])) + 0.5*(speed factor[0.3,0]) * ((angVelocity factor[0,0.8]) - (rpm factor [500,	2100])) factor[(1700 - 500)/(2100 - 500) + (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2, (2100 - 500)/(2100 - 500) - (((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500)) - (1 * ((2100 - 500)/(2100 - 500) - (1700 - 500)/(2100 - 500))))/2])";
		range = "3*230";
	};
};
class CfgSoundSets
{
	class Engine_Base_EXT_SoundSet
	{
	};
	class Engine_Base_RPM0_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM0_EXT_SoundShader"};
	};
	class Engine_Base_RPM1_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM1_EXT_SoundShader"};
	};
	class Engine_Base_RPM2_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM2_EXT_SoundShader"};
	};
	class Engine_Base_RPM3_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM3_EXT_SoundShader"};
	};
	class Engine_Base_RPM4_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM4_EXT_SoundShader"};
	};
	class Engine_Base_RPM5_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM5_EXT_SoundShader"};
	};
	class Engine_Base_RPM6_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM6_EXT_SoundShader"};
	};
	class Engine_Base_RPM7_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM7_EXT_SoundShader"};
	};
	class Engine_Base_RPM8_EXT_SoundSet: Engine_Base_EXT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM8_EXT_SoundShader"};
	};
	class Engine_Base_INT_SoundSet
	{
	};
	class Engine_Base_RPM0_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM0_INT_SoundShader"};
	};
	class Engine_Base_RPM1_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM1_INT_SoundShader"};
	};
	class Engine_Base_RPM2_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM2_INT_SoundShader"};
	};
	class Engine_Base_RPM3_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM3_INT_SoundShader"};
	};
	class Engine_Base_RPM4_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM4_INT_SoundShader"};
	};
	class Engine_Base_RPM5_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM5_INT_SoundShader"};
	};
	class Engine_Base_RPM6_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM6_INT_SoundShader"};
	};
	class Engine_Base_RPM7_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM7_INT_SoundShader"};
	};
	class Engine_Base_RPM8_INT_SoundSet: Engine_Base_INT_SoundSet
	{
		soundShaders[] = {"Engine_Base_RPM8_INT_SoundShader"};
	};
	class Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_01_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_02_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_03_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_04_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_05_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_06_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_Brake_Hard_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_Brake_Soft_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_Turn_Hard_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Tracks_Turn_Soft_EXT_SoundSet: Base_Tracks_EXT_SoundSet
	{
	};
	class Base_Drive_Water_EXT_SoundSet
	{
	};
	class Base_Drive_Dirt_EXT_SoundSet
	{
	};
	class Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_01_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_02_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_03_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_04_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_05_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_06_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_Brake_Hard_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_Brake_Soft_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_Turn_Hard_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Tracks_Turn_Soft_INT_SoundSet: Base_Tracks_INT_SoundSet
	{
	};
	class Base_Drive_Water_INT_SoundSet
	{
	};
	class Base_Drive_Dirt_INT_SoundSet
	{
	};
	class Vehicle_Base_Body_INT_SoundSet
	{
	};
	class Vehicle_Base_Body_OPEN_SoundSet
	{
	};
	class Vehicle_Base_Body_EXT_SoundSet
	{
	};
	class APC_Engine_RPM0_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM0_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		posOffset[] = {0,0,-1};
		volumeFactor = 0.7;
	};
	class APC_Engine_RPM1_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM1_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,-1};
		volumeFactor = 0.85;
	};
	class APC_Engine_RPM2_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM2_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,-1};
		volumeFactor = 1.0;
	};
	class APC_Engine_RPM3_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM3_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,-1};
		volumeFactor = 1.0;
	};
	class APC_Engine_RPM4_EXT_SoundSet: Engine_Base_RPM0_EXT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM4_EXT_SoundShader"};
		sound3DProcessingType = "VehicleExt_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,-1};
		volumeFactor = 1.1;
	};
	class APC_Engine_RPM0_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM0_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		posOffset[] = {0,0,0};
		volumeFactor = 0.7;
	};
	class APC_Engine_RPM1_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM1_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,0};
		volumeFactor = 0.85;
	};
	class APC_Engine_RPM2_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM2_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,0};
		volumeFactor = 1.0;
	};
	class APC_Engine_RPM3_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM3_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,0};
		volumeFactor = 1.0;
	};
	class APC_Engine_RPM4_INT_SoundSet: Engine_Base_RPM0_INT_SoundSet
	{
		soundShaders[] = {"APC_Engine_RPM4_INT_SoundShader"};
		sound3DProcessingType = "VehicleInt_Back_3DProcessingType";
		volumeCurve = "InverseSquare2Curve";
		posOffset[] = {0,0,0};
		volumeFactor = 1.2;
	};
};