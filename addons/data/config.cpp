class CfgPatches
{
	class Rebalance_Config
	{
		name = "Rebalance Config";
		author = "RoutOfWolves";
		units[] = {};
		weapons[] = {};
		requiredAddons[] =
		{
			"Rogue_CEMarine",
		};
	};
};

class CfgWeapons
{
	#include "helmets\config.hpp"
	#include "vests\config.hpp"
};

class CfgVehicles
{
	#include "uniforms\config.hpp"
};
