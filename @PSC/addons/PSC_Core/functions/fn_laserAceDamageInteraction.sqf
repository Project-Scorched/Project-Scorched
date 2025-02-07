/*
	Author: Queen

	Description:
		Handles ace damage for laser hit 

	Parameter(s):
		0: <Object \ Unit> - Object \ Unit taking damage 
		1: <Object \ Unit> - Object \ Unit Giving Damage
        2: <String> - Ammo used
        3: <Array> - Inital positon of laser in ASL
        4: <Array> - Final position of laser in ASL
        5: <Array> - hitpoints of what to be damaged



	Returns:
		<return type>

	Examples:
		<example>
*/

params ["_target", "_killer", "_ammo", "_initialPos", "_endPos", "_hitpoints"];

private _ammoData = PSC_laserAmmoCache get _ammo;

private _power = _ammoData # 1;
_power = power * 100;
private _pos1 = ASLToAGL _initialPos;
private _pos2 = ASLToAGL _endPos;

private _distance = _pos1 distance _pos2;

private _damage = _power / (4 * pi * _distance);

_damage = round _damage;

private _damageInitial = _damage + 1;

{
    [_target, [_damage, _X, _damageInitial], "PSC_laserDamage"] call ace_medical_damage_fnc_woundsHandlerBase;
} forEach _hitpoints;