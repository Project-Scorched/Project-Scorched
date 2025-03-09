#define _ARMA_
class CfgPatches
{
	class PSC_Vertibird_pylons
	{
		author = "Fishinchips";
		name = "Vertibird_Pylons_weapons";
        requiredAddons[] = {"PSC_Core"};
        requiredVersion = 0.1;
		units[] = {};
		weapons[] = {"PS_Mininuke_PW1","PS_VB_autocannon_20mm","PS_VB_GMG_40mm"};
	};
};
class SensorTemplateLaser;
class CfgCloudlets {
    class Default;

    class PSCNukeFireball : Default {
        interval = 0.01;
        circleRadius = 0;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Explosion_4x4";
        animationSpeed[] = {1};
        lifeTime = 1.5;
        positionVar[] = {1, 1, 1};
        moveVelocity[] = {0, 6, 0};
        rotationVelocity = 1;
        weight = 1;
        volume = 1;
        rubbing = 0.05;
        size[] = {10, 50, 100};
        color[] = {{1, 0.8, 0.3, 1}, {1, 0.5, 0.1, 1}, {0.1, 0.1, 0.1, 0}};
        animationSpeedCoef = 1;
        emissiveColor[] = {{10, 8, 5, 1}, {5, 3, 1, 1}, {0, 0, 0, 0}};
    };

    class PSCNukeColumn : Default {
        interval = 0.1;
        lifeTime = 10;
        circleRadius = 0.5;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        animationSpeed[] = {0.5};
        moveVelocity[] = {0, 5, 0};
        size[] = {5, 25, 50};
        color[] = {{0.2, 0.2, 0.2, 1}, {0.1, 0.1, 0.1, 0.8}, {0, 0, 0, 0}};
    };

    class PSCNukeCap : Default {
        interval = 0.2;
        lifeTime = 15;
        circleRadius = 10;
        circleVelocity[] = {0, 0, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        moveVelocity[] = {0, 2, 0};
        rotationVelocity = 0.1;
        size[] = {15, 50, 120};
        color[] = {{0.3, 0.3, 0.3, 1}, {0.2, 0.2, 0.2, 0.8}, {0, 0, 0, 0}};
    };

    class PSCNukeShockwave : Default {
        interval = 0.03;
        lifeTime = 2;
        circleRadius = 1;
        circleVelocity[] = {10, 0, 10};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        moveVelocity[] = {20, 0, 20};
        size[] = {20, 60, 150};
        color[] = {{1, 1, 1, 1}, {0.5, 0.5, 0.5, 0.5}, {0, 0, 0, 0}};
    };

    class PSCNukeFallout : Default {
        interval = 0.2;
        lifeTime = 25;
        circleRadius = 20;
        circleVelocity[] = {0, -0.5, 0};
        particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
        moveVelocity[] = {0, -1, 0};
        size[] = {1, 5, 10}; 
        color[] = {{0.5, 0.5, 0.5, 0.8}, {0.2, 0.2, 0.2, 0.5}, {0, 0, 0, 0}};
    };
};
class CfgEffects {
    class PSCNukeExplosion {
        class Stages {
            class Fireball {
                type = "PSCNukeFireball";
                time = 0;
            };
            class Column {
                type = "PSCNukeColumn";
                time = 1;
            };
            class Cap {
                type = "PSCNukeCap";
                time = 3;
            };
            class Shockwave {
                type = "PSCNukeShockwave";
                time = 2;
            };
            class Fallout {
                type = "PSCNukeFallout";
                time = 5;
            };
        };
    };
};
class CfgLights {
    class NukeFlash {
        color[] = {1, 1, 0.8};
        ambient[] = {1, 1, 0.8};
        intensity = 500000;
        size = 100;
        innerAngle = 0;
        outerAngle = 360;
        flareSize = 100;
        flareMaxDistance = 2000;
    };
};
class CfgSoundShaders
{
    class PSC_Mininuke_SoundShader
    {
        samples[] = {{"PSC_Vehicles_A\ammunition\sounds\NUKE.ogg",1}};
        volume = 1.0;
        range = 2000;
    };
};
class CfgSoundSets
{
    class PSC_Mininuke_SoundSet
    {
        soundShaders[] = {"PSC_Mininuke_SoundShader"};
        volumeFactor = 1.5;
        volumeCurve = "LinearCurve";
        spatial = 1;
        doppler = 0;
        loop = 0;
        sound3DProcessingType = "ExplosionHeavy3DProcessingType";
        distanceFilter = "explosionDistanceFreqAttenuationFilter";
    };
};
class CfgAmmo
{
	class BulletBase;
    class Bo_GBU12_LGB;
    class PSC_20mm_AP: BulletBase
    {
        hit = 130;
        indirectHit = 13;
        indirectHitRange = 1.6;
        warheadName = "HEAT";
        caliber = 3.4;
        visibleFire = 32;
        audibleFire = 200;
        visibleFireTime = 3;
        dangerRadiusBulletClose = 22;
        dangerRadiusHit = 40;
        suppressionRadiusBulletClose = 10;
        suppressionRadiusHit = 14;
        explosive = 0.4;
        cost = 35;
        model = "\A3\Weapons_f\Data\bullettracer\tracer_red";
        tracerScale = 2.5;
        tracerStartTime = 0.1;
        tracerEndTime = 2;
        airFriction = -0.00042;
        muzzleEffect = "";
        deflecting = 15;
        typicalSpeed = 1620;
        airlock = 1;
        aiAmmoUsageFlags = "64 + 128";
        soundHit1[] = {"PSC_Vehicles_A\ammunition\sounds\1-converted.ogg",1.7782794,1,1600};
        soundHit2[] = {"PSC_Vehicles_A\ammunition\sounds\2-converted.ogg",1.7782794,1,1600};
        soundHit3[] = {"PSC_Vehicles_A\ammunition\sounds\3-converted.ogg",1.7782794,1,1600};
        soundHit4[] = {"PSC_Vehicles_A\ammunition\sounds\4-converted.ogg",1.7782794,1,1600};
        soundHit5[] = {"PSC_Vehicles_A\ammunition\sounds\5-converted.ogg",1.7782794,1,1600};
        soundHit6[] = {"PSC_Vehicles_A\ammunition\sounds\6-converted.ogg",1.7782794,1,1600};
        soundHit7[] = {"PSC_Vehicles_A\ammunition\sounds\7-converted.ogg",1.7782794,1,1600};
        soundHit8[] = {"PSC_Vehicles_A\ammunition\sounds\8-converted.ogg",1.7782794,1,1600};
        multiSoundHit[] = {"soundHit1",0.125,"soundHit2",0.125,"soundHit3",0.125,"soundHit4",0.125,"soundHit5",0.125,"soundHit6",0.125,"soundHit7",0.125,"soundHit8",0.125};
        CraterEffects = "ExploAmmoCrater";
        explosionEffects = "ExploAmmoExplosion";
        class CamShakeExplode
        {
            power = 5;
            duration = 1;
            frequency = 20;
            distance = 56;
        };
        class CamShakeHit
        {
            power = 50;
            duration = 0.6;
            frequency = 20;
            distance = 1;
        };
        class CamShakeFire
        {
            power = 2.23607;
            duration = 1;
            frequency = 20;
            distance = 40;
        };
        class CamShakePlayerFire
        {
            power = 0.01;
            duration = 0.1;
            frequency = 20;
            distance = 1;
        };
    };
    class PSC_Mininuke_A: Bo_GBU12_LGB
    {
        model = "\PSC_Vehicles_A\ammunition\PSC_Vertibird_Mininuke.p3d";
        proxyshape = "\PSC_Vehicles_A\ammunition\PSC_Vertibird_Mininuke.p3d";
        hit = 5000;
        indirectHit = 2200;
        indirectHitRange = 24;
        dangerRadiusHit = 10;
        suppressionRadiusHit = 5;
        whistleOnFire = 1;
        sideAirFriction = 0.12;
        laserLock = 0;
        trackOversteer = 0;
        trackLead = 0.95;
        maneuvrability = 4.6;
        maxSpeed = 600;
        timeToLive = 120;
        initSpeed = 30;
        soundFakeFall[] = {"\PSC_Vehicles_A\ammunition\sounds\NUKEDrop.ogg",db+10, 1};
        soundHit[] = {"\PSC_Vehicles_A\ammunition\sounds\NUKE.ogg", 2.5118864, 1, 1500};
        soundSetExplosion[] = {"PSC_Mininuke_SoundSet"};
        CraterEffects = "BombCrater";
        explosionEffects = "PSCMushroomExplosion";
        whistleDist = 150;
        class Eventhandlers
        {
            Init = "[_this select 0] execVM 'PSC_Vehicles_A\ammunition\Scripts\grpl_fired.sqf';";
        };
    };
};
class BaseSoundModeType;
class CfgMagazines {
    class VehicleMagazine;
    class AnimationSources;
    class PS_VB_autocannon_mag_2000: VehicleMagazine {
        displayName = "VB Autocannon 2000 Rounds";
        model = "PSC_Vehicles_A\ammunition\PSC_Vertibird_20mm.p3d";
        ammo = "PSC_20mm_AP";
        count = 2000;
        tracersEvery = 2;
        initSpeed = 1600;
        maxLeadSpeed = 83.3333;
        mass = 10;
        pylonWeapon = "PS_VB_autocannon_20mm"; // Correctly references weapon in CfgWeapons
        hardpoints[] = {"B_A143_BUZZARD_CENTER_PYLON"};
        // Remove or leave blank if undefined in the model
        muzzlePos = "";
        muzzleEnd = "";
    };
    class PS_VB_100Rnd_40mm_G: VehicleMagazine {
        displayName = "VB GrenadeLauncher 200 Rounds";
        model = "PSC_Vehicles_A\ammunition\PSC_Vertibird_40mm.p3d";
        ammo = "G_40mm_HEDP";
        count = 200;
        tracersEvery = 1;
        initSpeed = 600;
        maxLeadSpeed = 83.3333;
        mass = 10;
        pylonWeapon = "PS_VB_GMG_40mm"; // Correctly references weapon in CfgWeapons
        hardpoints[] = {"20MM_TWIN_CANNON"};
        // Remove or leave blank if undefined in the model
        muzzlePos = "";
        muzzleEnd = "";
    };
    class Pylon_PS_Mininuke_P_16rnd : VehicleMagazine
    {
        scope = 2;
        model = "\PSC_Vehicles_A\ammunition\PSC_Vertibird_Mininuke.p3d";
        hardpoints[] = {"B_BOMB_PYLON","B_MISSILE_PYLON","O_BOMB_PYLON","O_MISSILE_PYLON"};
        pylonWeapon = "PSC_Mininuke_PW1";
        class AnimationSources: AnimationSources
        {
            class Missiles_revolving
            {
                source = "revolving";
                weapon = "PS_Mininuke_PW1";
            };                  
        };  
        displayName = "Mininuke Launcher";
        displayNameShort = ".01KT";
        descriptionShort = ".01KT Nuclear Bomb";                  
        ammo = "PSC_Mininuke_A";
        initSpeed = 0;
        count = 16;
        maxLeadSpeed = 40;
        mass = 2000;

    };
};
class CfgNonAIVehicles
{
    class ProxyWeapon;
    class Mininuke_Proxy: ProxyWeapon
    {
        model = "\PSC_Vehicles_A\ammunition\PSC_Vertibird_Mininuke.p3d";
        simulation = "maverickweapon";
    };
};

class CfgWeapons {
    class GMG_F;
    class CannonCore;
    class RocketPods;
    class weapon_LGBLauncherBase: RocketPods
    {
        class LoalAltitude;
    };
    class autocannon_Base_F; // Base class for cannons
    class PS_VB_autocannon_20mm: autocannon_Base_F {
        scope = 2;
        displayName = "20mm Autocannon";
        magazines[] = {"PS_VB_autocannon_mag_2000"}; // Correctly references magazine class
        reloadTime = 0.02;
        burst = 5;
        autoFire = 1;
        autoReload = 1;
        canLock = 0;
        cursor = "EmptyCursor";
        cursorAim = "cannon";
        showAimCursorInternal = 1;
        sound[] = {"A3\sounds_f\dummysound",2.5118864,1,1800};
        soundContinuous = 0;

        modes[] = {"manual"};
        class GunParticles {
            class Effect {
                effectName = "AutoCannonFired";
                positionName = "VB_autocannon_beg";
                directionName = "VB_autocannon_end";
            };
        };
        class manual: CannonCore
        {
            displayName = "$STR_A3_GATLING_20MM0";
            autoFire = 1;
            textureType = "fullAuto";
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"PSC_Vehicles_A\ammunition\sounds\MINIGUN_CLOSE_NOSPIN.ogg",1.7782794,1,1300,{3,35740}};
                soundBegin[] = {"begin1",1};
            };
            soundContinuous = 1;
            soundBurst = 0;
            reloadTime = 0.04;
            dispersion = 0.0055;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
    };
    class PS_VB_GMG_40mm: GMG_F
    {
        scope = 1;
        displayName = "$STR_A3_GMG_40mm0";
        magazines[] = {"PS_VB_100Rnd_40mm_G","PS_VB_100Rnd_40mm_G"};
        magazineReloadTime = 20;
        showAimCursorInternal = 1;
        modes[] = {"manual","close","short","medium","far"};
        class manual: GMG_F
        {
            displayName = "$STR_A3_GMG_40mm0";
            sounds[] = {"StandardSound"};
            class StandardSound
            {
                begin1[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_01",1.1220185,1.0,1200};
                begin2[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_02",1.1220185,1.0,1200};
                begin3[] = {"A3\Sounds_F\arsenal\weapons_static\Static_GMG\GMG_03",1.1220185,1.0,1200};
                soundBegin[] = {"begin1",0.33,"begin2",0.33,"begin3",0.34};
            };
            soundContinuous = 0;
            soundBurst = 0;
            dispersion = 0.005;
            aiRateOfFire = 1;
            aiRateOfFireDistance = 10;
            minRange = 0;
            minRangeProbab = 0.01;
            midRange = 1;
            midRangeProbab = 0.01;
            maxRange = 2;
            maxRangeProbab = 0.01;
        };
        class close: manual
        {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 6;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 50;
            minRange = 16;
            minRangeProbab = 0.1;
            midRange = 100;
            midRangeProbab = 0.5;
            maxRange = 200;
            maxRangeProbab = 0.2;
        };
        class short: close
        {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 5;
            aiRateOfFire = 1;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 150;
            minRange = 100;
            minRangeProbab = 0.5;
            midRange = 250;
            midRangeProbab = 0.7;
            maxRange = 500;
            maxRangeProbab = 0.75;
        };
        class medium: close
        {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 5;
            aiRateOfFire = 2;
            aiRateOfFireDispersion = 2;
            aiRateOfFireDistance = 400;
            minRange = 400;
            minRangeProbab = 0.75;
            midRange = 800;
            midRangeProbab = 0.8;
            maxRange = 1200;
            maxRangeProbab = 0.75;
        };
        class far: close
        {
            aiBurstTerminable = 1;
            showToPlayer = 0;
            burst = 1;
            burstRangeMax = 3;
            aiRateOfFire = 4;
            aiRateOfFireDispersion = 4;
            aiRateOfFireDistance = 1000;
            minRange = 1000;
            minRangeProbab = 0.77;
            midRange = 1200;
            midRangeProbab = 0.75;
            maxRange = 1500;
            maxRangeProbab = 0.1;
        };
        class GunParticles
        {
            class effect1
            {
                positionName = "usti hlavne";
                directionName = "konec hlavne";
                effectName = "GrenadeLauncherCloud";
            };
        };
    };
    class PS_Mininuke_PW1: weapon_LGBLauncherBase
    {
        scope = 2;
        displayName = "Mininuke Launcher";
        displayNameMagazine = "Mininuke .01KT 16rnd";
        shortNameMagazine = "16rnd";
        cursoraim = "bomb";
        cursor = "EmptyCursor";
        sounds[] = { "StandardSound" };
        class StandardSound
        {
            begin1[] = { "FC_Release_crate", 1.5848932, 1.1, 2100 };
            soundBegin[] = { "begin1", 1 };
            weaponSoundEffect = "DefaultRifle";
        };
        magazines[] = { "Pylon_PS_Mininuke_P_16rnd" };      
        salvo = 1;
    };
};
