class CfgCloudlets
{
    class Default;
    class NIA_Mflash1 : Default
    {
        interval = 0.05;
        circleRadius = 0;
        circleVelocity[] = { 0, 0, 0 };
        particleShape = "PSC_Core\MuzzleFlashes\Meshes\Particles";
        color[] = { { 0.9, 0.9, 0.9, 0.04 }, { 0.9, 0.9, 0.9, 0.018 }, { 0.9, 0.9, 0.9, 0.006 }, { 0.9, 0.9, 0.9, 0.001 } };
        particleFSNtieth = 16;
        particleFSIndex = 7;
        particleFSFrameCount = 48;
        particleFSLoop = 1;
        angleVar = 0;
        animationName = "";
        particleType = "Spaceobject";
        timerPeriod = 1;
        lifeTime = 0.1;
        moveVelocity[] = { "speedX", "speedY", "speedZ" };
        rotationVelocity = 0.5;
        weight = 1.2;
        volume = 1;
        rubbing = 0.1;
        size[] = { 1.1 };
        sizeCoef = 1;
        colorCoef[] = { 1, 1, 1, 1 };
        animationSpeed[] = { 2, 1 };
        animationSpeedCoef = 1;
        randomDirectionPeriod = 0.1;
        randomDirectionIntensity = 0.05;
        onTimerScript = "";
        beforeDestroyScript = "";
        destroyOnWaterSurface = 1;
        destroyOnWaterSurfaceOffset = -0.1;
        lifeTimeVar = 0;
        position[] = { "positionX", "positionY", "positionZ" };
        positionVar[] = { 0, 0, 0 };
        MoveVelocityVar[] = { 0.1, 0.1, 0.1 };
        rotationVelocityVar = 20;
        sizeVar = 0.25;
        colorVar[] = { 0, 0, 0, 0 };
        randomDirectionPeriodVar = 0;
        randomDirectionIntensityVar = 0;
    };
};
class NIA_muzzleFX
{
    class NIA_Mflash1
    {
        simulation = "particles";
        type = "NIA_Mflash1";
        position[] = { 0, 0, 0 };
        intensity = 1;
        interval = 1;
        lifeTime = 0.050000001;
        qualityLevel = 2;
    };
};
