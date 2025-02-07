/*
	Author: Jenna (I ain't write this shit, i just modified it)

	Description:
		Caches weapon data for laser system in hashmaps

	Parameter(s):
		none



	Returns:
		nothing

	Examples:
		call PSC_fnc_cacheLaserWeapons;
        meant for use in XEH_PostInit, or just any init. 
*/
#define GET_NUMBER(config,default) (if (isNumber (config)) then {getNumber (config)} else {default})
#define GET_TEXT(config,default) (if (typeName config == "STRING") then {getText (config)} else {default})

// find all cfgweapons entries with knd_rampup_doesRampUp and cache them in a hashmap (hashmaps are much more performant than config lookups)
private _ammo = "true" configClasses (configFile >> "CfgAmmo");
private _laserAmmo = _ammo select {(GET_NUMBER(_x >> "PSC_IsLaserAmmo",0)) == 1};
PSC_LaserAmmoCache = createHashMap;
{
    private _data = [];
    private _damage = GET_NUMBER(_x >> "PSC_LaserPower",10);
    private _onHit = GET_TEXT(_x >> "PSC_LaserOnHit","");
    private _range = GET_NUMBER(_x >> "PSC_LaserRange",600);
    _data = [configName _x,_damage,_onHit,_range];
    PSC_LaserAmmoCache set [configName _x,[true,_data]];
} foreach _laserAmmo;