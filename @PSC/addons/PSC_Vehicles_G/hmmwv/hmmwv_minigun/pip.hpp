		class RenderTargets
		{
			class LeftMirror
			{
				renderTarget = "rendertarget0";
				class CameraView1
				{
					pointPosition		= "PIP0_pos"; 
					pointDirection		= "PIP0_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 1.0;
				}; 			
			};
			class MinigunMirror
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos"; 
					pointDirection		= "PIP1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.3;
				}; 			
			};
			class FrontCam
			{
				renderTarget = "rendertarget2";
				class CameraView1
				{
					pointPosition		= "PIP2_pos";
					pointDirection		= "PIP2_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 1.0;					
				}; 			
			};			
		};