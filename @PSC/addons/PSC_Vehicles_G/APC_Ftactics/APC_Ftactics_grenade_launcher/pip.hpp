		class RenderTargets
		{
			class RearCam
			{
				renderTarget = "rendertarget1";
				class CameraView1
				{
					pointPosition		= "PIP1_pos";
					pointDirection		= "PIP1_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.7;					
				}; 			
			};	
			class MinigunMirror
			{
				renderTarget = "rendertarget2";
				class CameraView2
				{
					pointPosition		= "pip2_pos"; 
					pointDirection		= "pip2_dir";
					renderQuality 		= 2;
					renderVisionMode 	= 0;
					fov 				= 0.3;
				}; 			
			};			
		};