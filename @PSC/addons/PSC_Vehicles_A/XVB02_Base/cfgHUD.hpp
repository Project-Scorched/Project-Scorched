// common definition for all vectors projected into HUD space

#define XtoYscale (SizeX10deg / SizeY10deg)

#define XY_Scaled(xx,yy) __EVAL(xx),__EVAL((yy) / (XtoYscale))



#define CIRCLE(bone,scale) \
{bone,	{0,						__EVAL(-scale / XtoYscale)},		1}, \
{bone,	{__EVAL(+0.7 * scale),	__EVAL(-0.7 * scale / XtoYscale)},	1}, \
{bone,	{+scale,				0},									1}, \
{bone,	{__EVAL(+0.7 * scale),	__EVAL(+0.7 * scale / XtoYscale)},	1}, \
{bone,	{0,						__EVAL(+scale / XtoYscale)},		1}, \
{bone,	{__EVAL(-0.7 * scale),	__EVAL(+0.7 * scale / XtoYscale)},	1}, \
{bone,	{-scale,				0},									1}, \
{bone,	{__EVAL(-0.7 * scale),	__EVAL(-0.7 * scale / XtoYscale)},	1}, \
{bone,	{0,						__EVAL(-scale / XtoYscale)},		1}

#define CIRCLE_LIMIT(limit,bone,scale) \
{bone, 1, limit, 1,	{0,			__EVAL(-scale / XtoYscale)},		1}, \
{bone, 1, limit, 1,	{__EVAL(+0.7 * scale),	__EVAL(-0.7 * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{+scale,		0},					1}, \
{bone, 1, limit, 1,	{__EVAL(+0.7 * scale),	__EVAL(+0.7 * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{0,			__EVAL(+scale / XtoYscale)},		1}, \
{bone, 1, limit, 1,	{__EVAL(-0.7 * scale),	__EVAL(+0.7 * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{-scale,		0},					1}, \
{bone, 1, limit, 1,	{__EVAL(-0.7 * scale),	__EVAL(-0.7 * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{0, 			__EVAL(-scale / XtoYscale)},		1}

#define CIRCLE_LIMIT_SPACE(limit,bone,scale) \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 1 + 11.25) + cos(22.5 * 1 + 11.25)) * scale),	__EVAL((cos(22.5 * 1 + 11.25) - sin(22.5 * 1 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 2 + 11.25) + cos(22.5 * 2 + 11.25)) * scale),	__EVAL((cos(22.5 * 2 + 11.25) - sin(22.5 * 2 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 3 + 11.25) + cos(22.5 * 3 + 11.25)) * scale),	__EVAL((cos(22.5 * 3 + 11.25) - sin(22.5 * 3 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 4 + 11.25) + cos(22.5 * 4 + 11.25)) * scale),	__EVAL((cos(22.5 * 4 + 11.25) - sin(22.5 * 4 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 5 + 11.25) + cos(22.5 * 5 + 11.25)) * scale),	__EVAL((cos(22.5 * 5 + 11.25) - sin(22.5 * 5 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 6 + 11.25) + cos(22.5 * 6 + 11.25)) * scale),	__EVAL((cos(22.5 * 6 + 11.25) - sin(22.5 * 6 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 7 + 11.25) + cos(22.5 * 7 + 11.25)) * scale),	__EVAL((cos(22.5 * 7 + 11.25) - sin(22.5 * 7 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 8 + 11.25) + cos(22.5 * 8 + 11.25)) * scale),	__EVAL((cos(22.5 * 8 + 11.25) - sin(22.5 * 8 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 9 + 11.25) + cos(22.5 * 9 + 11.25)) * scale),	__EVAL((cos(22.5 * 9 + 11.25) - sin(22.5 * 9 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 10 + 11.25) + cos(22.5 * 10 + 11.25)) * scale),	__EVAL((cos(22.5 * 10 + 11.25) - sin(22.5 * 10 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 11 + 11.25) + cos(22.5 * 11 + 11.25)) * scale),	__EVAL((cos(22.5 * 11 + 11.25) - sin(22.5 * 11 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 12 + 11.25) + cos(22.5 * 12 + 11.25)) * scale),	__EVAL((cos(22.5 * 12 + 11.25) - sin(22.5 * 12 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 13 + 11.25) + cos(22.5 * 13 + 11.25)) * scale),	__EVAL((cos(22.5 * 13 + 11.25) - sin(22.5 * 13 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 14 + 11.25) + cos(22.5 * 14 + 11.25)) * scale),	__EVAL((cos(22.5 * 14 + 11.25) - sin(22.5 * 14 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 15 + 11.25) + cos(22.5 * 15 + 11.25)) * scale),	__EVAL((cos(22.5 * 15 + 11.25) - sin(22.5 * 15 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 16 + 11.25) + cos(22.5 * 16 + 11.25)) * scale),	__EVAL((cos(22.5 * 16 + 11.25) - sin(22.5 * 16 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 17 + 11.25) + cos(22.5 * 17 + 11.25)) * scale),	__EVAL((cos(22.5 * 17 + 11.25) - sin(22.5 * 17 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 18 + 11.25) + cos(22.5 * 18 + 11.25)) * scale),	__EVAL((cos(22.5 * 18 + 11.25) - sin(22.5 * 18 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 19 + 11.25) + cos(22.5 * 19 + 11.25)) * scale),	__EVAL((cos(22.5 * 19 + 11.25) - sin(22.5 * 19 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 20 + 11.25) + cos(22.5 * 20 + 11.25)) * scale),	__EVAL((cos(22.5 * 20 + 11.25) - sin(22.5 * 20 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 21 + 11.25) + cos(22.5 * 21 + 11.25)) * scale),	__EVAL((cos(22.5 * 21 + 11.25) - sin(22.5 * 21 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 22 + 11.25) + cos(22.5 * 22 + 11.25)) * scale),	__EVAL((cos(22.5 * 22 + 11.25) - sin(22.5 * 22 + 11.25)) * scale / XtoYscale)},	1}, \
{},\
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 23 + 11.25) + cos(22.5 * 23 + 11.25)) * scale),	__EVAL((cos(22.5 * 23 + 11.25) - sin(22.5 * 23 + 11.25)) * scale / XtoYscale)},	1}, \
{bone, 1, limit, 1,	{__EVAL((sin(22.5 * 24 + 11.25) + cos(22.5 * 24 + 11.25)) * scale),	__EVAL((cos(22.5 * 24 + 11.25) - sin(22.5 * 24 + 11.25)) * scale / XtoYscale)},	1}, \
{}



#define CIRCLE_LOCK_TIME(boneCenter,bone,scale) \
{boneCenter,{0,	__EVAL(-0.8000 * scale / XtoYscale)}, 1}, \
{boneCenter,{0,	__EVAL(-1.0000 * scale / XtoYscale)}, 1}, \
{bone##1,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##2,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##3,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##4,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##5,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##6,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##7,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##8,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##9,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##10,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##11,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##12,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##13,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##14,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##15,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##16,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##17,{0,	__EVAL(1.0000 * scale )}, 1,    boneCenter,	1}, \
{bone##17,{0,	__EVAL(0.8000 * scale )}, 1,    boneCenter,	1}


#define CIRCLE_BIG(bone,scale) \
{bone,	{0,							__EVAL(-1.0000 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.1736 * scale),	__EVAL(-0.9848 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.3420 * scale),	__EVAL(-0.9397 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.5000 * scale),	__EVAL(-0.8660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.6428 * scale),	__EVAL(-0.7660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.7660 * scale),	__EVAL(-0.6428 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.8660 * scale),	__EVAL(-0.5000 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.9397 * scale),	__EVAL(-0.3420 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.9848 * scale),	__EVAL(-0.1736 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+1.0000 * scale),	0},										1}, \
{bone,	{__EVAL(+0.9848 * scale),	__EVAL(+0.1736 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.9397 * scale),	__EVAL(+0.3420 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.8660 * scale),	__EVAL(+0.5000 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.7660 * scale),	__EVAL(+0.6428 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.6428 * scale),	__EVAL(+0.7660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.5000 * scale),	__EVAL(+0.8660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.3420 * scale),	__EVAL(+0.9397 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(+0.1736 * scale),	__EVAL(+0.9848 * scale / XtoYscale)},	1}, \
{bone,	{0,							__EVAL(+1.0000 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.1736 * scale),	__EVAL(+0.9848 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.3420 * scale),	__EVAL(+0.9397 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.5000 * scale),	__EVAL(+0.8660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.6428 * scale),	__EVAL(+0.7660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.7660 * scale),	__EVAL(+0.6428 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.8660 * scale),	__EVAL(+0.5000 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.9397 * scale),	__EVAL(+0.3420 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.9848 * scale),	__EVAL(+0.1736 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-1.0000 * scale),	0},										1}, \
{bone,	{__EVAL(-0.9848 * scale),	__EVAL(-0.1736 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.9397 * scale),	__EVAL(-0.3420 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.8660 * scale),	__EVAL(-0.5000 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.7660 * scale),	__EVAL(-0.6428 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.6428 * scale),	__EVAL(-0.7660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.5000 * scale),	__EVAL(-0.8660 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.3420 * scale),	__EVAL(-0.9397 * scale / XtoYscale)},	1}, \
{bone,	{__EVAL(-0.1736 * scale),	__EVAL(-0.9848 * scale / XtoYscale)},	1}, \
{bone,	{0,							__EVAL(-1.0000 * scale / XtoYscale)},	1}



#define POINT_ON_CIRCLE(bone,scale,angle) \
{bone,	{__EVAL(sin(angle) * scale),	__EVAL(cos(angle) * scale / XtoYscale)},	1}

#define CIRCLE_BIG2(bone,scale) \
POINT_ON_CIRCLE(bone,scale,0), \
POINT_ON_CIRCLE(bone,scale,15), \
POINT_ON_CIRCLE(bone,scale,30), \
POINT_ON_CIRCLE(bone,scale,45), \
POINT_ON_CIRCLE(bone,scale,60), \
POINT_ON_CIRCLE(bone,scale,75), \
POINT_ON_CIRCLE(bone,scale,90), \
POINT_ON_CIRCLE(bone,scale,105), \
POINT_ON_CIRCLE(bone,scale,120), \
POINT_ON_CIRCLE(bone,scale,135), \
POINT_ON_CIRCLE(bone,scale,150), \
POINT_ON_CIRCLE(bone,scale,165), \
POINT_ON_CIRCLE(bone,scale,180), \
POINT_ON_CIRCLE(bone,scale,195), \
POINT_ON_CIRCLE(bone,scale,210), \
POINT_ON_CIRCLE(bone,scale,225), \
POINT_ON_CIRCLE(bone,scale,240), \
POINT_ON_CIRCLE(bone,scale,255), \
POINT_ON_CIRCLE(bone,scale,270), \
POINT_ON_CIRCLE(bone,scale,285), \
POINT_ON_CIRCLE(bone,scale,300), \
POINT_ON_CIRCLE(bone,scale,315), \
POINT_ON_CIRCLE(bone,scale,330), \
POINT_ON_CIRCLE(bone,scale,345), \
POINT_ON_CIRCLE(bone,scale,360)



#define CIRCLE_MARK(bone,scaleIn,scaleOut,angle) \
{bone,	{__EVAL((scaleIn) * sin(angle)),	__EVAL(-(scaleIn) * cos(angle) / XtoYscale)},	1}, \
{bone,	{__EVAL((scaleOut) * sin(angle)),	__EVAL(-(scaleOut) * cos(angle) / XtoYscale)},	1}



#define CIRCLE_MARK_CENTER(XX,YY,scaleIn,scaleOut,angle) \
{{__EVAL(XX + (scaleIn) * sin(angle)),	__EVAL(YY - (scaleIn) * cos(angle) / XtoYscale)},	1}, \
{{__EVAL(XX + (scaleOut) * sin(angle)),	__EVAL(YY - (scaleOut) * cos(angle) / XtoYscale)},	1}



#define POINT(bone,xx,yy) \
{bone,	{__EVAL(xx),	__EVAL((yy) / (XtoYscale))},	1}



#define POINT2(xx,yy) \
{{__EVAL(xx),	__EVAL((yy) / (XtoYscale))},	1}



#define DOT(xx,yy) \
POINT2((xx) - 0.0075,yy), \
POINT2((xx) + 0.0075,yy), \
{}, \
POINT2(xx,(yy) - 0.0075), \
POINT2(xx,(yy) + 0.0075), \
{}



#define INSTRUMENT(xx,yy,scale) \
DOT(xx,(yy) + (scale)), \
DOT((xx) + ((scale) * sin 36),(yy) + ((scale) * cos 36)), \
DOT((xx) + ((scale) * sin (36 * 2)),(yy) + ((scale) * cos (36 * 2))), \
DOT((xx) + ((scale) * sin (36 * 3)),(yy) + ((scale) * cos (36 * 3))), \
DOT((xx) + ((scale) * sin (36 * 4)),(yy) + ((scale) * cos (36 * 4))), \
DOT((xx) + ((scale) * sin (36 * 5)),(yy) + ((scale) * cos (36 * 5))), \
DOT((xx) + ((scale) * sin (36 * 6)),(yy) + ((scale) * cos (36 * 6))), \
DOT((xx) + ((scale) * sin (36 * 7)),(yy) + ((scale) * cos (36 * 7))), \
DOT((xx) + ((scale) * sin (36 * 8)),(yy) + ((scale) * cos (36 * 8))), \
DOT((xx) + ((scale) * sin (36 * 9)),(yy) + ((scale) * cos (36 * 9)))



#define DEF_HORIZONTPlus(XX) \
	class LevelP##XX: Level0 \
	{ \
		type			= line; \
		points[]		= \
		{ \
			{LevelP##XX,{-0.20,+0.03},1}, \
			{LevelP##XX,{-0.20,0},1}, \
			{LevelP##XX,{-0.05,0},1}, \
			{}, \
			{LevelP##XX,{ 0.05,0},1}, \
			{LevelP##XX,{+0.20,0},1}, \
			{LevelP##XX,{+0.20,+0.03},1} \
		}; \
	}; \
	class VALP_1_##XX \
	{ \
		type			= text; \
		source			= static; \
		text			= #XX; \
		align			= right; \
		scale			= 1; \
		sourceScale		= 1; \
		pos[]			= {LevelP##XX,{__EVAL(-0.23 + 0.05),0.032},1}; \
		right[]			= {LevelP##XX,{__EVAL(-0.15 + 0.05),0.032},1}; \
		down[]			= {LevelP##XX,{__EVAL(-0.23 + 0.05),0.082},1}; \
	}



#define DEF_HORIZONTMinus(XX) \
	class LevelM##XX: Level0 \
	{ \
		type			= line; \
		points[]		= \
		{ \
			{LevelM##XX,{-0.20,__EVAL(XX * 0.001 * (20 - 5) / (20 - 5))},1}, \
			{LevelM##XX,{-0.17,__EVAL(XX * 0.001 * (17 - 5) / (20 - 5))},1}, \
			{}, \
			{LevelM##XX,{-0.14,__EVAL(XX * 0.001 * (14 - 5) / (20 - 5))},1}, \
			{LevelM##XX,{-0.11,__EVAL(XX * 0.001 * (11 - 5) / (20 - 5))},1}, \
			{}, \
			{LevelM##XX,{-0.08,__EVAL(XX * 0.001 * (8 - 5) / (20 - 5))},1}, \
			{LevelM##XX,{-0.05,0},1}, \
			{LevelM##XX,{-0.05,-0.03},1}, \
			{}, \
			{LevelM##XX,{+0.05,-0.03},1}, \
			{LevelM##XX,{0.05,0},1}, \
			{LevelM##XX,{+0.08,__EVAL(XX * 0.001 * (8 - 5) / (20 - 5))},1}, \
			{}, \
			{LevelM##XX,{+0.11,__EVAL(XX * 0.001 * (11 - 5) / (20 - 5))},1}, \
			{LevelM##XX,{+0.14,__EVAL(XX * 0.001 * (14 - 5) / (20 - 5))},1}, \
			{}, \
			{LevelM##XX,{+0.17,__EVAL(XX * 0.001 * (17 - 5) / (20 - 5))},1}, \
			{LevelM##XX,{+0.20,__EVAL(XX * 0.001 * (20 - 5) / (20 - 5))},1} \
		}; \
	}; \
	class VALM_1_##XX \
	{ \
		type			= text; \
		source			= static; \
		text			= -##XX; \
		align			= right; \
		scale			= 1; \
		sourceScale		= 1; \
		pos[]			= {LevelM##XX,{__EVAL(-0.23 + 0.05),-0.082},1}; \
		right[]			= {LevelM##XX,{__EVAL(-0.15 + 0.05),-0.082},1}; \
		down[]			= {LevelM##XX,{__EVAL(-0.23 + 0.05),-0.032},1}; \
	}



				topLeft					= "HUD_1_top_left";
				topRight				= "HUD_1_top_right";
				bottomLeft				= "HUD_1_bottom_left";
				/// adjust position inside of memory points LOD
				borderLeft				= 0;
				borderRight				= 0;
				borderTop				= 0;
				borderBottom				= 0;
				color[]					= {0.0, 0.5, 0.4, 1.0};

				class Bones
				{
					class PlaneW
					{
						type			= fixed;
						pos[]			= {PosX0Center, PosYCenterHorizont};
					};

					class Center
					{
						type			= fixed;
						pos[]			= {PosX0Center, __EVAL(PosY0Center)};
					};
					class ImpactPoint
					{
						type			= vector;
						source			= ImpactPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};

					class WPPoint
					{
						type			= vector;
						source			= WPPoint;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class TargetingPodTarget
					{
						source			= pilotcamera;
						type			= vector;
						pos0[]			= {__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]			= {__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};

					class Limit0109
					{
						type			= limit;
						limits[]		= {0.1,0.1,0.9,0.9};
					};

					class MissileFlightTimeRot1
					{
						type			= rotational;
						source			= MissileFlightTime;
						sourceScale		= 1.0;
						center[]		= {0, 0};
						min			= 0;
						max			= __EVAL(10 *0.05);
						minAngle		= 0;
						maxAngle		= __EVAL(360 * 0.05);
						aspectRatio		= __EVAL(1 / XtoYscale);
					};
					class MissileFlightTimeRot2: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.1);
						max  			= __EVAL(10 *0.1);
					};
					class MissileFlightTimeRot3: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.15);
						max  			= __EVAL(10 *0.15);
					};
					class MissileFlightTimeRot4: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.2);
						max  			= __EVAL(10 *0.2);
					};
					class MissileFlightTimeRot5: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.25);
						max  			= __EVAL(10 *0.25);
					};
					class MissileFlightTimeRot6: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.3);
						max  			= __EVAL(10 *0.3);
					};
					class MissileFlightTimeRot7: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.35);
						max  			= __EVAL(10 *0.35);
					};
					class MissileFlightTimeRot8: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.4);
						max  			= __EVAL(10 *0.4);
					};
					class MissileFlightTimeRot9: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.45);
						max  			= __EVAL(10 *0.45);
					};
					class MissileFlightTimeRot10: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.5);
						max  			= __EVAL(10 *0.5);
					};
					class MissileFlightTimeRot11: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.55);
						max  			= __EVAL(10 *0.55);
					};
					class MissileFlightTimeRot12: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.6);
						max  			= __EVAL(10 *0.6);
					};
					class MissileFlightTimeRot13: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.65);
						max  			= __EVAL(10 *0.65);
					};
					class MissileFlightTimeRot14: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.7);
						max  			= __EVAL(10 *0.7);
					};
					class MissileFlightTimeRot15: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.75);
						max  			= __EVAL(10 *0.75);
					};
					class MissileFlightTimeRot16: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.8);
						max  			= __EVAL(10 *0.8);
					};
					class MissileFlightTimeRot17: MissileFlightTimeRot1
					{
						maxAngle		= __EVAL(360 * 0.85);
						max  			= __EVAL(10 *0.85);
					};
					class Target
					{
						source=target;
						type=vector;
						pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center)};
						pos10[]={__EVAL(PosX0Center+SizeX10deg),__EVAL(PosY0Center+SizeY10deg)};
					};
					class Velocity
					{
						type			= vector;
						source			= velocity;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};

					class ILS_H
					{
						type=ils;
						pos0[]={0.5,__EVAL(PosY0Center)};
						pos3[]={__EVAL(0.5+(SizeX10deg)*3/10),__EVAL(PosY0Center)};
					};
					class ILS_W: ILS_H
					{
						pos3[]={0.5,__EVAL((PosY0Center)+(SizeY10deg)*3/10)};
					};

					class ASL_Instrument
					{
						type			= rotational;
						source			= altitudeASL;
						center[]		= {0.90, __EVAL(0.3 / XtoYscale)};
						min				= 0;
						max				= 20000;
						minAngle		= 0;
						maxAngle		= 72000;
						aspectRatio		= __EVAL(1 / XtoYscale);
					};
					class Speed_Instrument: ASL_Instrument
					{
						source			= speed;
						center[]		= {0.10, __EVAL(0.3 / XtoYscale)};
						max				= __EVAL(2000 / 3.6);
						maxAngle		= 7200;
					};

				#define HorizonBankScaleY 0.4
					class HorizonBankRot
					{
						type			= rotational;
						source			= horizonBank;
						center[]		= {PosX0Center, PosYCenterHorizont};
						min				= __EVAL(-3.1416 / 90 * 15);
						max				= __EVAL(3.1416 / 90 * 15);
						minAngle		= __EVAL(180 - 83 / 4);
						maxAngle		= __EVAL(180 + 83 / 4);
						aspectRatio		= 1;
					};
					class AOAindexer
					{
						type			= linear;
						source			= aoa;
						min			= __EVAL(-3.1416/180*45);
						max			= __EVAL(3.1416/180*45);
						maxPos[]		= {0,__EVAL(-2+0.1)};
						minPos[]		= {0,__EVAL(2+0.1)};
						aspectRatio		= 1;
					};

					class HorizonBankRotFull
					{
						type			= rotational;
						source			= horizonBank;
						center[]		= {0, 0};
						min			= __EVAL(-3.1416);
						max			= __EVAL(3.1416);
						minAngle		= __EVAL(-180);
						maxAngle		= __EVAL(180);
						aspectRatio		= 1;
					};

					class Level0
					{
						pos0[]			= {PosX0Center, PosYCenterHorizont};
						pos10[]			= {__EVAL(PosX0Center + SizeX10deg), __EVAL(PosYCenterHorizont + SizeY10deg)};
						type			= horizon;
						angle			= 0;
					};
					class LevelP5: Level0 {angle = +5;};
					class LevelM5: Level0 {angle = -5;};
					class LevelP10: Level0 {angle = +10;};
					class LevelM10: Level0 {angle = -10;};
					class LevelP15: Level0 {angle = +15;};
					class LevelM15: Level0 {angle = -15;};
					class LevelP20: Level0 {angle = +20;};
					class LevelM20: Level0 {angle = -20;};
					class LevelP25: Level0 {angle = +25;};
					class LevelM25: Level0 {angle = -25;};
					class LevelP30: Level0 {angle = +30;};
					class LevelM30: Level0 {angle = -30;};
					class LevelP35: Level0 {angle = +35;};
					class LevelM35: Level0 {angle = -35;};
					class LevelP40: Level0 {angle = +40;};
					class LevelM40: Level0 {angle = -40;};
					class LevelP45: Level0 {angle = +45;};
					class LevelM45: Level0 {angle = -45;};
					class LevelP50: Level0 {angle = +50;};
					class LevelM50: Level0 {angle = -50;};
					class LevelP55: Level0 {angle = +55;};
					class LevelM55: Level0 {angle = -55;};
					class LevelP60: Level0 {angle = +60;};
					class LevelM60: Level0 {angle = -60;};
					class LevelP65: Level0 {angle = +65;};
					class LevelM65: Level0 {angle = -65;};
					class LevelP70: Level0 {angle = +70;};
					class LevelM70: Level0 {angle = -70;};
					class LevelP75: Level0 {angle = +75;};
					class LevelM75: Level0 {angle = -75;};
					class LevelP80: Level0 {angle = +80;};
					class LevelM80: Level0 {angle = -80;};
					class LevelP85: Level0 {angle = +85;};
					class LevelM85: Level0 {angle = -85;};
					class LevelP90: Level0 {angle = +90;};
					class LevelM90: Level0 {angle = -90;};

					class Airport1
					{
						type			= vector;
						source			= airportCorner1;
						pos0[]			= {0.5, __EVAL(PosY0Center)};
						pos10[]			= {__EVAL(0.5 + SizeX10deg), __EVAL(PosY0Center + SizeY10deg)};
					};
					class Airport2: Airport1 {source	= airportCorner2;};
					class Airport3: Airport1 {source	= airportCorner3;};
					class Airport4: Airport1 {source	= airportCorner4;};

				};

				class Draw
				{
					alpha				= 1.0;
					color[]				= {0.0, 0.5, 0.4};
					condition			= on;

					class PlaneW
					{
						type			= line;
						points[]		=
						{
							POINT(PlaneW, -0.03, 0.0),
							POINT(PlaneW, -0.01, 0.0),
							{},
							POINT(PlaneW, 0.03, 0.0),
							POINT(PlaneW, 0.01, 0.0),
							{},
							POINT(PlaneW, 0.0, -0.03),
							POINT(PlaneW, 0.0, -0.01),
							{},
							POINT(PlaneW, 0.0, 0.03),
							POINT(PlaneW, 0.0, 0.01)
						};
					};

					class PlaneHeading
					{
						type			= line;
						points[]		=
						{
							CIRCLE_LIMIT(Limit0109, Velocity,0.02),
							{},
							{Velocity, 1, Limit0109, 1, { 0.04, __EVAL(0 / XtoYscale)}, 1},
							{Velocity, 1, Limit0109, 1, { 0.02, __EVAL(0 / XtoYscale)}, 1},
							{},
							{Velocity, 1, Limit0109, 1, {-0.04, __EVAL(0 / XtoYscale)}, 1},
							{Velocity, 1, Limit0109, 1, {-0.02, __EVAL(0 / XtoYscale)}, 1},
							{},
							{Velocity, 1, Limit0109, 1, {0, __EVAL(-0.04 / XtoYscale)}, 1},
							{Velocity, 1, Limit0109, 1, {0, __EVAL(-0.02 / XtoYscale)}, 1}
						};
					};
					class AOAIndexer
					{
						condition		= ils;
						class lines
						{
							type			= line;
							points[]		=
							{
								{Velocity, 1, Limit0109, 1, {AOAindexer, -0.04, __EVAL(0.1 / XtoYscale)}, 1},
								{Velocity, 1, Limit0109, 1, {AOAindexer, -0.06, __EVAL(0.1 / XtoYscale)}, 1},
								{Velocity, 1, Limit0109, 1, {AOAindexer, -0.06, __EVAL(0 / XtoYscale)}, 1},
								{Velocity, 1, Limit0109, 1, {AOAindexer, -0.05, __EVAL(0 / XtoYscale)}, 1},
								{},
								{Velocity, 1, Limit0109, 1, {AOAindexer,-0.06, __EVAL(0.0 / XtoYscale)}, 1},
								{Velocity, 1, Limit0109, 1, {AOAindexer,-0.06, __EVAL(-0.1 / XtoYscale)}, 1},
								{Velocity, 1, Limit0109, 1, {AOAindexer,-0.04, __EVAL(-0.1 / XtoYscale)}, 1}
							};
						};
					};

					class Static
					{
						type			= line;
						points[]		=
						{
							// Speed dial circle
							INSTRUMENT(0.10, 0.3, 0.0925),
							// Speed dial line
							{Speed_Instrument, {0, __EVAL(0.065)}, 1},
							{Speed_Instrument, {0, __EVAL(0.085)}, 1},
							{},
							// Altitude dial circle
							INSTRUMENT(0.90, 0.3, 0.0925),
							// Altitude dial line
							{ASL_Instrument, {0, __EVAL(0.065)}, 1},
							{ASL_Instrument, {0, __EVAL(0.085)}, 1},
							{},
							// Heading arrow
							{{XY_Scaled(0.50, 0.095)}, 1},
							{{XY_Scaled(0.51, 0.115)}, 1},
							{{XY_Scaled(0.49, 0.115)}, 1},
							{{XY_Scaled(0.50, 0.095)}, 1},
							{},
							// Left side quarter circle markings
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.32, 0.35, 180 - 45 * 3 / 6),
							{},
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.33, 0.35, 180 - 45 * 2 / 6),
							{},
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.33, 0.35, 180 - 45 * 1 / 6),
							{},
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.32, 0.35, 180),
							{},
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.33, 0.35, 180 + 45 * 1 / 6),
							{},
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.33, 0.35, 180 + 45 * 2 / 6),
							{},
							CIRCLE_MARK_CENTER(PosX0Center, PosYCenterHorizont, 0.32, 0.35, 180 + 45 * 3 / 6)
						};
					};

					class HorizonBankRot
					{
						type			= line;
						points[]		=
						{
							{HorizonBankRot, {XY_Scaled(0.00, 0.35)}, 1},
							{HorizonBankRot, {XY_Scaled(0.01, 0.37)}, 1},
							{HorizonBankRot, {XY_Scaled(-0.01, 0.37)}, 1},
							{HorizonBankRot, {XY_Scaled(0.00, 0.35)}, 1}
						};
					};

					class Horizont
					{
						clipTL[]		= {0.00, 0.15};
						clipBR[]		= {1.00, 0.75};

						class Dimmed
						{
							class Level0
							{
								type			= line;
								points[]		=
								{
									{Level0, {0.40, 0.0}, 1},
									{Level0, {0.05, 0.0}, 1},
									{},
									{Level0, {-0.05, 0.0}, 1},
									{Level0, {-0.40, 0.0}, 1}
								};
							};
							DEF_HORIZONTMinus(5);
							DEF_HORIZONTPlus(5);
							DEF_HORIZONTMinus(10);
							DEF_HORIZONTPlus(10);
							DEF_HORIZONTMinus(15);
							DEF_HORIZONTPlus(15);
							DEF_HORIZONTMinus(20);
							DEF_HORIZONTPlus(20);
							DEF_HORIZONTMinus(25);
							DEF_HORIZONTPlus(25);
							DEF_HORIZONTMinus(30);
							DEF_HORIZONTPlus(30);
							DEF_HORIZONTMinus(35);
							DEF_HORIZONTPlus(35);
							DEF_HORIZONTMinus(40);
							DEF_HORIZONTPlus(40);
							DEF_HORIZONTMinus(45);
							DEF_HORIZONTPlus(45);
							DEF_HORIZONTMinus(50);
							DEF_HORIZONTPlus(50);
							DEF_HORIZONTMinus(55);
							DEF_HORIZONTPlus(55);
							DEF_HORIZONTMinus(60);
							DEF_HORIZONTPlus(60);
							DEF_HORIZONTMinus(65);
							DEF_HORIZONTPlus(65);
							DEF_HORIZONTMinus(70);
							DEF_HORIZONTPlus(70);
							DEF_HORIZONTMinus(75);
							DEF_HORIZONTPlus(75);
							DEF_HORIZONTMinus(80);
							DEF_HORIZONTPlus(80);
							DEF_HORIZONTMinus(85);
							DEF_HORIZONTPlus(85);
							DEF_HORIZONTMinus(90);
							DEF_HORIZONTPlus(90);
						};
					};

					class SpeedNumber
					{
						type			= text;
						source			= speed;
						sourceScale		= 3.6;

						align			= center;
						scale			= 1;
						pos[]			= {{XY_Scaled(0.10 + 0.00, 0.30 - 0.025)}, 1};
						right[]			= {{XY_Scaled(0.10 + 0.06, 0.30 - 0.025)}, 1};
						down[]			= {{XY_Scaled(0.10 + 0.00, 0.30 + 0.025)}, 1};
					};
					class AltNumber: SpeedNumber
					{
						source			= altitudeASL;
						sourceScale		= 1;

						pos[]			= {{XY_Scaled(0.90 + 0.00, 0.30 - 0.025)}, 1};
						right[]			= {{XY_Scaled(0.90 + 0.06, 0.30 - 0.025)}, 1};
						down[]			= {{XY_Scaled(0.90 + 0.00, 0.30 + 0.025)}, 1};
					};

					class AltNumberAGL
					{
						class Text
						{
							type			= text;
							source			= static;
							text			= "H";

							align			= left;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.80 + 0.00, 0.5 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.80 + 0.06, 0.5 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.80 + 0.00, 0.5 + 0.025)}, 1};
						};

						class Box
						{
							type			= line;
							points[]		=
							{
								POINT2(0.81, 0.5 + 0.025),
								POINT2(1.00, 0.5 + 0.025),
								POINT2(1.00, 0.5 - 0.025),
								POINT2(0.81, 0.5 - 0.025),
								POINT2(0.81, 0.5 + 0.025)
							};
						};

						class AltNumber
						{
							type			= text;
							source			= altitudeAGL;
							sourceScale		= 1;

							align			= left;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.99 + 0.00, 0.5 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.99 + 0.06, 0.5 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.99 + 0.00, 0.5 + 0.025)}, 1};
						};
					};

					class Gear
					{
						color[]			= {0.0, 0.125, 0.1};

						class Text
						{
							type			= text;
							source			= static;
							text			= "GEAR";

							align			= left;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.99 + 0.00, 0.75 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.99 + 0.06, 0.75 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.99 + 0.00, 0.75 + 0.025)}, 1};
						};

						class Highlighted
						{
							condition		= ils;
							color[]			= {0.0, 0.375, 0.3};

							class Text
							{
								type			= text;
								source			= static;
								text			= "GEAR";

								align			= left;
								scale			= 1;
								pos[]			= {{XY_Scaled(0.99 + 0.00, 0.75 - 0.025)}, 1};
								right[]			= {{XY_Scaled(0.99 + 0.06, 0.75 - 0.025)}, 1};
								down[]			= {{XY_Scaled(0.99 + 0.00, 0.75 + 0.025)}, 1};
							};
						};
					};

					class Flaps
					{
						color[]			= {0.0, 0.125, 0.1};

						class Text
						{
							type			= text;
							source			= static;
							text			= "FLAPS";

							align			= left;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.99 + 0.00, 0.80 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.99 + 0.06, 0.80 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.99 + 0.00, 0.80 + 0.025)}, 1};
						};

						class Highlighted
						{
							condition		= flaps;
							color[]			= {0.0, 0.375, 0.3};

							class Text
							{
								type			= text;
								source			= static;
								text			= "FLAPS";

								align			= left;
								scale			= 1;
								pos[]			= {{XY_Scaled(0.99 + 0.00, 0.80 - 0.025)}, 1};
								right[]			= {{XY_Scaled(0.99 + 0.06, 0.80 - 0.025)}, 1};
								down[]			= {{XY_Scaled(0.99 + 0.00, 0.80 + 0.025)}, 1};
							};
						};
					};


					class Lights
					{
						color[]			= {0.0, 0.125, 0.1};

						class Text
						{
							type			= text;
							source			= static;
							text			= "LIGHTS";

							align			= right;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.01 + 0.00, 0.75 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.01 + 0.06, 0.75 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.01 + 0.00, 0.75 + 0.025)}, 1};
						};

						class Highlighted
						{
							condition		= lights;
							color[]			= {0.0, 0.375, 0.3};

							class Text
							{
								type			= text;
								source			= static;
								text			= "LIGHTS";

								align			= right;
								scale			= 1;
								pos[]			= {{XY_Scaled(0.01 + 0.00, 0.75 - 0.025)}, 1};
								right[]			= {{XY_Scaled(0.01 + 0.06, 0.75 - 0.025)}, 1};
								down[]			= {{XY_Scaled(0.01 + 0.00, 0.75 + 0.025)}, 1};
							};
						};
					};


					class CollisionLights
					{
						color[]			= {0.0, 0.125, 0.1};

						class Text
						{
							type			= text;
							source			= static;
							text			= "ANTI-COL";

							align			= right;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.01 + 0.00, 0.80 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.01 + 0.06, 0.80 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.01 + 0.00, 0.80 + 0.025)}, 1};
						};

						class Highlighted
						{
							condition		= collisionlights;
							color[]			= {0.0, 0.375, 0.3};

							class Text
							{
								type			= text;
								source			= static;
								text			= "ANTI-COL";

								align			= right;
								scale			= 1;
								pos[]			= {{XY_Scaled(0.01 + 0.00, 0.80 - 0.025)}, 1};
								right[]			= {{XY_Scaled(0.01 + 0.06, 0.80 - 0.025)}, 1};
								down[]			= {{XY_Scaled(0.01 + 0.00, 0.80 + 0.025)}, 1};
							};
						};
					};

					class RadarTargets
					{
						condition		= "1-ils";
						class RadarBoxes
						{
							type=radar;
							pos0[]={__EVAL(PosX0Center),__EVAL(PosY0Center)};
							pos10[]={__EVAL((PosX0Center)+(SizeX10deg)),__EVAL((PosY0Center)+(SizeY10deg))};

							width = 4;
							points[]={
								POINT2(-0.02,-0.02),
								POINT2(+0.02,-0.02),
								POINT2(+0.02,+0.02),
								POINT2(-0.02,+0.02),
								POINT2(-0.02,-0.02)
							};
						};
					};
					class TargetDiamond
					{
						condition		= "1-ils";
						class shape
						{
							type=line;
							width = 4;
							points[]={
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.03)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.03, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, 0.03)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(-0.03, 0.0)}, 1},
								{Target, 1, Limit0109, 1, {XY_Scaled(0.0, -0.03)}, 1}
							};
						};
					};
					// TGP direction pos
					class TargetingPodGroup
					{
						condition = "1-pilotcameralock";
						class TargetingPodDir
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.040)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.035)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.030)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.025)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.020)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.015)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.010)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0, -0.005)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.040)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.035)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.030)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.025)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.020)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.015)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.010)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(0.0,  0.005)}, 1},{},

								{TargetingPodTarget, 1, {XY_Scaled(-0.040, -0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(-0.035, -0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(-0.030, -0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(-0.025, -0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(-0.020, -0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(-0.015, -0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled(-0.010, -0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled(-0.005, -0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled( 0.040, -0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled( 0.035, -0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled( 0.030,  0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled( 0.025,  0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled( 0.020,  0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled( 0.015,  0.00)}, 1},{},
								{TargetingPodTarget, 1, {XY_Scaled( 0.010,  0.00)}, 1},
								{TargetingPodTarget, 1, {XY_Scaled( 0.005,  0.00)}, 1},{}
							};
						};
					};
					class TargetingPodGroupOn
					{
						condition = "pilotcameralock";
						class TargetingPodDir
						{
							type			= line;
							width			= 3.0;
							points[]		=
							{
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.040)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.035)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.030)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.025)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.020)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.015)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.010)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0, -0.005)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.040)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.035)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.030)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.025)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.020)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.015)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.010)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(0.0,  0.005)}, 1},{},

								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.040, -0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.035, -0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.030, -0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.025, -0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.020, -0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.015, -0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.010, -0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled(-0.005, -0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.040, -0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.035, -0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.030,  0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.025,  0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.020,  0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.015,  0.00)}, 1},{},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.010,  0.00)}, 1},
								{TargetingPodTarget, 1, Limit0109, 1, {XY_Scaled( 0.005,  0.00)}, 1},{}
							};
						};
					};


					class Stall
					{
						condition		= stall;
						color[]			= {1.0, 0.0, 0.0};
						blinkingPattern[]	= {0.2, 0.2};
						blinkingStartsOn	= true;

						class Text
						{
							type			= text;
							source			= static;
							text			= "STALL";
							align			= center;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.5 + 0.00, 0.38 - 0.20)}, 1};
							right[]			= {{XY_Scaled(0.5 + 0.06, 0.38 - 0.20)}, 1};
							down[]			= {{XY_Scaled(0.5 + 0.00, 0.38 - 0.15)}, 1};
						};
					};
					class IncomingMissile: Stall
					{
						condition		= incomingmissile;
						class Text: Text
						{
							text			= "!INCOMING!";
							pos[]			= {{XY_Scaled(0.485 + 0.00, 0.62 - 0.20)}, 1};
							right[]			= {{XY_Scaled(0.485 + 0.06, 0.62 - 0.20)}, 1};
							down[]			= {{XY_Scaled(0.485 + 0.00, 0.62 - 0.15)}, 1};
						};
					};

					class Ammo
					{
						type			= text;
						source			= ammo;
						sourceScale		= 1;

						align			= center;
						scale			= 1;
						pos[]			= {{XY_Scaled(0.5 + 0.00, 0.75 - 0.025)}, 1};
						right[]			= {{XY_Scaled(0.5 + 0.06, 0.75 - 0.025)}, 1};
						down[]			= {{XY_Scaled(0.5 + 0.00, 0.75 + 0.025)}, 1};
					};

					class Weapons
					{
						type			= text;
						source			= weapon;
						sourceScale		= 1;

						align			= center;
						scale			= 1;
						pos[]			= {{XY_Scaled(0.5 + 0.00, 0.80 - 0.025)}, 1};
						right[]			= {{XY_Scaled(0.5 + 0.06, 0.80 - 0.025)}, 1};
						down[]			= {{XY_Scaled(0.5 + 0.00, 0.80 + 0.025)}, 1};
					};
					class WeaponsLocking
					{
						condition		= missilelocking;
						blinkingPattern[]	= {0.2, 0.2};
						blinkingStartsOn	= true;
						class Text
						{
							type			= text;
							source			= static;
							text			= ">LOCKING<";
							align			= center;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.485 + 0.00, 0.58 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.485 + 0.06, 0.58 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.485 + 0.00, 0.58 + 0.025)}, 1};
						};
					};
					class WeaponsLocked
					{
						condition		= missilelocked;
						class Text
						{
							type			= text;
							source			= static;
							text			= "<LOCKED>";
							align			= center;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.485 + 0.00, 0.58 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.485 + 0.06, 0.58 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.485 + 0.00, 0.58 + 0.025)}, 1};
						};
					};

					class WP
					{
						condition		= wpvalid;
						class WPdist
						{
							type			= text;
							source			= wpdist;
							sourceScale		= 0.01;

							align			= left;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.945 + 0.00, 0.65 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.945 + 0.06, 0.65 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.945 + 0.00, 0.65 + 0.025)}, 1};
						};
						class WPstatic
						{
							type			= text;
							source			= static;
							text			= ">";
							align			= center;
							scale			= 2;
							pos[]			= {{XY_Scaled(0.96 + 0.00, 0.65 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.96 + 0.02, 0.65 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.96 + 0.00, 0.65 + 0.025)}, 1};
						};
						class WPIndex
						{
							type			= text;
							source			= wpIndex;
							sourceScale		= 1;

							align			= right;
							scale			= 1;
							pos[]			= {{XY_Scaled(0.97 + 0.00, 0.65 - 0.025)}, 1};
							right[]			= {{XY_Scaled(0.97 + 0.06, 0.65 - 0.025)}, 1};
							down[]			= {{XY_Scaled(0.97 + 0.00, 0.65 + 0.025)}, 1};
						};
						class WP
						{
							type			= line;
							points[]		=
							{
								{wppoint, 1, Limit0109, 1, {HorizonBankRotFull, +0.015, -0.035}, 1},
								{wppoint, 1, Limit0109, 1, {HorizonBankRotFull, 0.0, 0.0}, 1},
								{wppoint, 1, Limit0109, 1, {HorizonBankRotFull, -0.015, -0.035}, 1}
							};
						};
					};

					class HeadingScale
					{
						type			= scale;
						horizontal		= true;
						source			= Heading;
						sourceScale		= 0.1;

						top			= 0.20;
						center			= 0.50;
						bottom			= 0.80;

						lineXleft		= __EVAL(0.09 / XtoYscale);
						lineYright		= __EVAL(0.08 / XtoYscale);
						lineXleftMajor		= __EVAL(0.09 / XtoYscale);
						lineYrightMajor		= __EVAL(0.07 / XtoYscale);
						majorLineEach		= 5;
						numberEach		= 5;
						step			= __EVAL(18 / 90);
						StepSize		= __EVAL((0.80 - 0.2) / 20);

						align			= center;
						scale			= 1;
						pos[]			= {XY_Scaled(0.20, 0.0175)};
						right[]			= {XY_Scaled(0.26, 0.0175)};
						down[]			= {XY_Scaled(0.20, 0.0675)};
					};

				#define SCALE 0.6
					class ILS
					{
						condition		= ils;

						class Glideslope
						{
							clipTL[]		= {0.0,0.0};
							clipBR[]		= {1.0,1.0};

							class ILS
							{
								type			= line;
								points[]		=
								{
									POINT(ILS_W, -0.4 * SCALE, 0 * SCALE),
									POINT(ILS_W, +0.4 * SCALE, 0 * SCALE),
									{},

									POINT(ILS_W, -0.4 * SCALE, -0.04 * SCALE),
									POINT(ILS_W, -0.4 * SCALE, +0.04 * SCALE),
									{},
									POINT(ILS_W, -0.2 * SCALE, -0.03 * SCALE),
									POINT(ILS_W, -0.2 * SCALE, +0.03 * SCALE),
									{},
									POINT(ILS_W, 0 * SCALE, -0.04 * SCALE),
									POINT(ILS_W, 0 * SCALE, +0.04 * SCALE),
									{},
									POINT(ILS_W, 0.2 * SCALE, -0.03 * SCALE),
									POINT(ILS_W, 0.2 * SCALE, +0.03 * SCALE),
									{},
									POINT(ILS_W, 0.4 * SCALE, -0.04 * SCALE),
									POINT(ILS_W, 0.4 * SCALE, +0.04 * SCALE),
									{},

									POINT(ILS_H, 0 * SCALE, -0.4 * SCALE),
									POINT(ILS_H, 0 * SCALE, +0.4 * SCALE),
									{},

									POINT(ILS_H, -0.04 * SCALE, -0.4 * SCALE),
									POINT(ILS_H, +0.04 * SCALE, -0.4 * SCALE),
									{},
									POINT(ILS_H, -0.03 * SCALE, -0.2 * SCALE),
									POINT(ILS_H, +0.03 * SCALE, -0.2 * SCALE),
									{},
									POINT(ILS_H, -0.04 * SCALE, 0 * SCALE),
									POINT(ILS_H, +0.04 * SCALE, 0 * SCALE),
									{},
									POINT(ILS_H, -0.03 * SCALE, 0.2 * SCALE),
									POINT(ILS_H, +0.03 * SCALE, 0.2 * SCALE),
									{},
									POINT(ILS_H, -0.04 * SCALE, 0.4 * SCALE),
									POINT(ILS_H, +0.04 * SCALE, 0.4 * SCALE)
								};
							};
							class airport
							{
								type			= line;
								points[]		=
								{
									{airport1,1},{airport2,1},{airport4,1},{airport3,1},{airport1,1}
								};
							};
						};
					};
					class Bomb
					{
						condition		= bomb;

						class Circle
						{
							type			= line;
							points[]		=
							{
								CIRCLE_BIG(ImpactPoint, 0.1),{},
								CIRCLE_LIMIT(Limit0109, ImpactPoint, 0.02),
								{},
								{Velocity, 0.001, ImpactPoint, 1, Limit0109, 1, {0.0, 0.0}, 1},
								{Velocity, 1, Limit0109, 1, {0.0, 0.0}, 1}
							};
						};
					};
					class MGun
					{
						condition		= "mgun";

						class Circle
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE_LIMIT_SPACE(Limit0109, ImpactPoint, 0.02)
							};
						};
					};

					class AAMissile
					{
						condition		= AAmissile;

						class Circle
						{
							type			= line;
							points[]		=
							{
								CIRCLE_BIG(center, 0.20)
							};
						};
					};

					class ATMissile
					{
						condition		= ATmissile;

						class Circle
						{
							type			= line;
							points[]		=
							{
								CIRCLE_BIG(center, 0.16)
							};
						};
						class Time
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								CIRCLE_LOCK_TIME(center, MissileFlightTimeRot, 0.15)
							};
						};
					};

					class RocketCrosshair
					{
						type			= group;
						condition		= Rocket;

						class BombCrosshair
						{
							type			= line;
							width			= 4.0;
							points[]		=
							{
								{Velocity, 0.001, ImpactPoint, 1, Limit0109, 1, {0.0, 0.0}, 1},
								{Velocity, 1, Limit0109, 1, {0.0, 0.0}, 1},{},
								CIRCLE_BIG(ImpactPoint, 0.105)

							};
						};
						class Time
						{
							type			= line;
							width			= 6.0;
							points[]		=
							{
								CIRCLE_LOCK_TIME(ImpactPoint, MissileFlightTimeRot, 0.10)
							};
						};
					};
				};