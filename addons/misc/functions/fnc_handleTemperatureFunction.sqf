#include "..\script_component.hpp"
/*
 * Author: Glowbal
 * Update the temperature of the patient
 *
 * Arguments:
 * 0: The Unit <OBJECT>
 * 1: Temperature Adjustments <NUMBER>
 * 2: Time since last update <NUMBER>
 * 3: Sync value? <BOOL>
 *
 * ReturnValue:
 * Current Temperature <NUMBER>
 *
 * Example:
 * [player, 0, 1, false] call ace_medical_vitals_fnc_updateHeartRate
 *
 * Public: No
 */

params ["_unit", "_altitudeAdjustment", "_bloodVolume", "_deltaT", "_syncValue"];

private _mapPosition = if (count([worldName] call ACEFUNC(common,getMapData)) != 0) then { abs([worldName] call ACEFUNC(common,getMapData) select 0) } else { 25 };
// Decrease of 0.7C for each degree of lattitude gained. Middle lattitudes between 20N and 20S have average temperatures of 27C, everything decreases from there.
private _mapHighTemperature = if ((_mapPosition - 20) > 0) then { 27 + (-0.7 * (_mapPosition - 27)) } else { 27 };

// Diurnal Width increases as lattitudes increase, generally
private _mapTemperature = _mapHighTemperature - ((linearConversion[0,90, _mapPosition ,15,5, true]) * (linearConversion[0,1, sunOrMoon ,1,0, true]));

private _currentTemperature = 37 min ((-3.5 * (0.95 ^ _mapTemperature) + 37 + _altitudeAdjustment) + (_bloodVolume / 6));

_unit setVariable [QEGVAR(circulation,temperature), _currentTemperature, _syncValue];

0 max (_currentTemperature - 37)