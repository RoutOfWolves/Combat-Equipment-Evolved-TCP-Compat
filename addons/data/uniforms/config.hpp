class I_G_Soldier_base_F;
class Rogue_CEUniformbase:I_G_Soldier_base_F
{
	armor				= 2;
	armorStructural		= 0.4;
	explosionShielding	= 0.04;
	minTotalDamageThreshold	= 0.001;
	impactDamageMultiplier	= 0.5;
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			passThrough=0.1;
			radius=0.08;
			explosionShielding=0.1;
			minimalHit=0.01;
		};
		class HitNeck:HitFace
		{
			armor=1;
			passThrough=0.1;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.01;
		};
		class HitHead:HitNeck
		{
			armor=1;
			passThrough=0.1;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.01;
			depends="HitFace max HitNeck";
		};
		class HitPelvis
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=1;
			minimalHit=0.01;
		};
		class HitAbdomen:HitPelvis
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=6;
			minimalHit=0.01;
		};
		class HitDiaphragm:HitAbdomen
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=6;
			minimalHit=0.01;
		};
		class HitChest:HitDiaphragm
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=6;
			minimalHit=0.01;
		};
		class HitBody:HitChest
		{
			armor=1000;
			material=-1;
			passThrough=0.1;
			radius=0.16;
			explosionShielding=6;
			minimalHit=0.01;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms
		{
			armor=1;
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			minimalHit=0.01;
		};
		class HitHands:HitArms
		{
			armor=1;
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			minimalHit=0.01;
			depends	= "HitArms";
		};
		class HitLegs:HitHands
		{
			armor=4;
			passThrough=0.5;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.01;
		};
		class HitLeftArm
		{
			armor=1;
			passThrough=1;
			radius=0.1;
			explosionShielding=1;
			minimalHit=0.01;
		};
		class HitRightArm : HitLeftArm
		{};
		class HitLeftLeg
		{
			armor=4;
			passThrough=0.5;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.01;
		};
		class HitRightLeg:HitLeftLeg
		{};
	};
};
class Rogue_CEUniformRolled_base:I_G_Soldier_base_F
{
	armor				= 2;
	armorStructural		= 0.4;
	explosionShielding	= 0.04;
	minTotalDamageThreshold	= 0.001;
	impactDamageMultiplier	= 0.5;
	class HitPoints
	{
		class HitFace
		{
			armor=1;
			passThrough=0.1;
			radius=0.08;
			explosionShielding=0.1;
			minimalHit=0.01;
		};
		class HitNeck:HitFace
		{
			armor=1;
			passThrough=0.1;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.01;
		};
		class HitHead:HitNeck
		{
			armor=1;
			passThrough=0.1;
			radius=0.2;
			explosionShielding=0.5;
			minimalHit=0.01;
			depends="HitFace max HitNeck";
		};
		class HitPelvis
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=1;
			minimalHit=0.01;
		};
		class HitAbdomen:HitPelvis
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=6;
			minimalHit=0.01;
		};
		class HitDiaphragm:HitAbdomen
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=6;
			minimalHit=0.01;
		};
		class HitChest:HitDiaphragm
		{
			armor=1;
			passThrough=0.1;
			radius=0.15;
			explosionShielding=6;
			minimalHit=0.01;
		};
		class HitBody:HitChest
		{
			armor=1000;
			material=-1;
			passThrough=0.1;
			radius=0.16;
			explosionShielding=6;
			minimalHit=0.01;
			depends="HitPelvis max HitAbdomen max HitDiaphragm max HitChest";
		};
		class HitArms
		{
			armor=0.5;
			passThrough=1;
			radius=0.1;
			explosionShielding=1.1;
			minimalHit=0.01;
		};
		class HitHands:HitArms
		{
			armor=0.5;
			passThrough=1;
			radius=0.1;
			explosionShielding=1.1;
			minimalHit=0.01;
			depends	= "HitArms";
		};
		class HitLegs:HitHands
		{
			armor=4;
			passThrough=0.5;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.01;
		};
		class HitLeftArm
		{
			armor=0.5;
			passThrough=1;
			radius=0.1;
			explosionShielding=1.1;
			minimalHit=0.01;
		};
		class HitRightArm : HitLeftArm
		{};
		class HitLeftLeg
		{
			armor=4;
			passThrough=0.5;
			radius=0.1;
			explosionShielding=0.5;
			minimalHit=0.01;
		};
		class HitRightLeg:HitLeftLeg
		{};
	};
};
