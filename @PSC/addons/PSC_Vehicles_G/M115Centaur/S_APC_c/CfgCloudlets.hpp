class CfgCloudlets
{
	class Default
	{};
	class ExhaustSmokeCrawler: Default
	{
		interval = "(0.05 - 0.0494 * intensity)";
		circleRadius = 0;
		circleVelocity[] = {0,0,0};
		particleShape = "\A3\data_f\ParticleEffects\Universal\Universal";
		particleFSNtieth = 16;
		particleFSIndex = 7;
		particleFSFrameCount = 48;
		particleFSLoop = 1;
		angleVar = 1;
		animationName = "";
		particleType = "Billboard";
		timerPeriod = 1;
		lifeTime = "0.6 * (engineOn interpolate [0,1,2,1])";
		moveVelocity[] = {"speedX * 6","speedY * 6","speedZ * 6"};
		rotationVelocity = 1;
		weight = 1.55;
		volume = 1.2;
		rubbing = 0.2;
		size[] = {0.6,1.1,1.4,1.7,2.0,2.45};
		sizeCoef = 1;
		//color[] = {{0.06,0.06,0.06,0.04},{0.3,0.3,0.3,0.05},{0.3,0.3,0.3,0.005},{0.3,0.3,0.3,0.001}};
color[] = {{0.06,0.06,0.06,0.04},{0.06,0.06,0.06,0.04},{0.06,0.06,0.06,0.04},{0.3,0.3,0.3,0.001}};

		colorCoef[] = {"1 * (1 - engineOn)","1 * (1 - engineOn)","1 * (1 - engineOn)","0.9 + (4.8 * intensity * engineOn)"};
		animationSpeed[] = {2,1};
		animationSpeedCoef = 1;
		randomDirectionPeriod = 0.08;
		randomDirectionIntensity = 0.15;
		onTimerScript = "";
		beforeDestroyScript = "";
		blockAIVisibility = 0;
		destroyOnWaterSurface = 1;
		destroyOnWaterSurfaceOffset = -0.1;
		//lifeTimeVar = 0.75;
		lifeTimeVar = 1.75;
		position[] = {"positionX","positionY","positionZ"};
		positionVar[] = {0.02,0.02,0.02};
		MoveVelocityVar[] = {0.7,0.7,0.7};
		rotationVelocityVar = 20;
		sizeVar = 0.1;
		colorVar[] = {0,0,0,0};
		randomDirectionPeriodVar = 0;
		randomDirectionIntensityVar = 0;
	};
};