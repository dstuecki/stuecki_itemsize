class CfgPatches
{
	class AmmoStacks
	{
		units[]={};
		weapons[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"DZ_Data",
			"DZ_Weapons_Firearms",
			"DZ_Weapons_Ammunition",
			"DZ_Weapons_Projectiles",
			"DayZExpansion_Objects_Firearms_LAW",
			"DZ_Weapons_Magazines"
		};
	};
};
class CfgMagazines
{
	class Magazine_Base;
	class Ammunition_Base: Magazine_Base
	{
	};
	class Ammo_127x55: Ammunition_Base
	{
		count=100;
	};
	class Ammo_45ACP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_308Win: Ammunition_Base
	{
		count=100;
	};
	class Ammo_308WinTracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x19: Ammunition_Base
	{
		count=100;
	};
	class Ammo_380: Ammunition_Base
	{
		count=1200;
	};
	class Ammo_556x45: Ammunition_Base
	{
		count=100;
	};
	class Ammo_556x45Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x54: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x54Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x39AP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_22: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaPellets: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaSlug: Ammunition_Base
	{
		count=100;
	};
	class Ammo_357: Ammunition_Base
	{
		count=100;
	};
	class Ammo_545x39: Ammunition_Base
	{
		count=100;
	};
	class Ammo_545x39Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_ArrowComposite: Ammunition_Base
	{
		count=100;
	};
	class Ammo_SharpStick: Ammunition_Base
	{
		count=100;
	};
	class Ammo_ArrowPrimitive: Ammunition_Base
	{
		count=100;
	};
	class Ammo_ArrowBoned: Ammunition_Base
	{
		count=100;
	};
	class Ammo_ArrowBolt: Ammunition_Base
	{
		count=100;
	};
	class Ammo_46x30: Ammunition_Base
	{
		count=100;
	};
	class Ammo_8mm: Ammunition_Base
	{
		count=100;
	};
	class Ammo_338: Ammunition_Base
	{
		count=100;
	};
	class Ammo_408Chey: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12GaBB: Ammunition_Base
	{
		count=100;
	};
	class Ammo_303: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaNeedles: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12gaPellets_tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_4x30: Ammunition_Base
	{
		count=100;
	};
	class Ammo_338Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_408: Ammunition_Base
	{
		count=100;
	};
	class Ammo_408Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_792x33: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12_7x55: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12x99: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12x99Tracer_Green: Ammunition_Base
	{
		count=100;
	};
	class Ammo_12x99Tracer_Yell: Ammunition_Base
	{
		count=100;
	};
	class Ammo_nails: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x25: Ammunition_Base
	{
		count=100;
	};
	class Ammo_5_7x28: Ammunition_Base
	{
		count=100;
	};
	class Ammo_5_7x28Tracer: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x33: Ammunition_Base
	{
		count=100;
	};
	class Ammo_792x57: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x18: Ammunition_Base
	{
		count=100;
	};
	class Ammo_shock: Ammunition_Base
	{
		count=100;
	};
	class Expansion_Ammo_ArrowBolt: Ammunition_Base
	{
		count=100;
	};
	class Expansion_Ammo_8mm: Ammunition_Base
	{
		count=100;
	};
	class Ammo_LAW_HE: Ammunition_Base
	{
		count=100;
	};
	class ExpansionAmmoFlare: Ammunition_Base
	{
		count=100;
	};
	class ExpansionAmmoLAWHE: Ammunition_Base
	{
		count=100;
	};
	class ExpansionAmmoLAW: Ammunition_Base
	{
		count=100;
	};
	class ExpansionAmmoRPG: Ammunition_Base
	{
		count=100;
	};
	class Ammo_Expansion_M203_Smoke_Base: Ammunition_Base
	{
		count=10;
	};
	class Ammo_Expansion_M203_HE: Ammunition_Base
	{
		count=100;
	};
	class Ammo_Expansion_46x30: Ammunition_Base
	{
		count=100;
	};
	class Ammo_Expansion_338: Ammunition_Base
	{
		count=100;
	};
	class Ammo_300: Ammunition_Base
	{
		displayName=".300 AAC Blackout";
		descriptionShort="The .300 AAC Blackout, also known as 7.62×35mm is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		count=100;
	};
	class Ammo_300AP: Ammunition_Base
	{
		displayName=".300AP AAC Blackout";
		descriptionShort="The .300 AAC Blackout, also known as 7.62×35mm is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
		count=100;
	};
	class Ammo_792: Ammunition_Base
	{
		count=100;
	};
	class Ammo_556x45_AP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_308Win_AP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_545x39_BP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x39_BP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_3006: Ammunition_Base
	{
		count=100;
	};
	class Ammo_127x99: Ammunition_Base
	{
		count=100;
	};
	class Ammo_145x114: Ammunition_Base
	{
		count=100;
	};
	class Ammo_762x25tok: Ammunition_Base
	{
		count=100;
	};
	class Doc_Ammo_9x18: Ammunition_Base
	{
		count=1200;
	};
	class Ammo_12gaRubberSlug: Ammunition_Base
	{
		count=100;
	};
	class Ammo_375: Ammunition_Base
	{
		count=100;
	};
	class Ammo_9x19AP: Ammunition_Base
	{
		count=100;
	};
	class Ammo_7n39: Ammunition_Base
	{
		count=100;
	};
};
class CfgVehicles
{
	class AmmoBox_762x54_20Rnd;
	class AmmoBox_300: AmmoBox_762x54_20Rnd
	{
		displayName="Boxed .300 AAC Blackout";
		descriptionShort="The .300 AAC Blackout, also known as 7.62×35mm is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
	};
	class AmmoBox_300AP: AmmoBox_762x54_20Rnd
	{
		displayName="Boxed .300AP AAC Blackout";
		descriptionShort="The .300 AAC Blackout, also known as 7.62×35mm is an intermediate cartridge developed in the United States by Advanced Armament Corporation for use in the M4 carbine.";
	};
};
