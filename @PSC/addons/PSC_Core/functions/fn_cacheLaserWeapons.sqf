/*
	Author: Queen

	Description:
		Caches weapon data for laser system in hashmaps

	Parameter(s):
		none



	Returns:
		nothing

	Examples:
		call PSC_fnc_cacheLaserWeapons;
        meant for use in XEH_preInit, or just any init. 
*/
private _weapons = "true" configClasses (configFile >> "CfgWeapons");
private _ammo = "true" configClasses (configFile >> "CfgAmmo");

private _laserWeapons;
{
    private _ID = getNumber (_x >> "CfgWeapons" >> "PSC_IsLaserWeapon")
    if (_ID == 1) then
    {
        _laserWeapons pushBack _x;
    };
} forEach _weapons;

private _laserAmmo;
{
    private _ID = getNumber (_x >> "CfgAmmo" >> "PSC_IsLaserAmmo");
    
    if (_ID == 1) then
    {
        _laserAmmo pushBack _x;
    };
} forEach _ammo;




PSC_LaserWeaponsCache = createHashMap;

{
    private _weaponRange = getNumber (_x >> "CfgWeapons" >> "PSC_LaserWeaponRange")

    private _arr = [true, _weaponRange]
    PSC_LaserWeaponsCache set [_x, _arr]
} forEach _laserWeapons;


PSC_LaserAmmoCache = createHashMap;
{
    private _damage = getNumber (_x >> "CfgAmmo" >> "PSC_LaserDamage");
    private _onHit = getText (_x >> "CfgAmmo" >> "PSC_LaserOnHit");

    private _arr = [true,_damage, _onHit];
    PSC_LaserAmmoCache set [_x, _arr];
} forEach _laserAmmo;
