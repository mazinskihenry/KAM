#include "..\script_component.hpp"
/*
 * Author: Mazinski
 * Applies the opioid factor from Morphine
 *
 * Arguments:
 * 0: Patient <OBJECT>
 *
 * Return Value:
 * None
 *
 * Example:
 * [player, "Leftleg", opioidRelief] call kat_pharma_fnc_treatmentAdvanced_MorphineLocal;
 *
 * Public: No
 */

params ["_patient", "_bodyPart", "_opioidRelief"];

if !(alive _patient) exitWith {};
if (ACE_Player != _patient) exitWith {};

private _opioidFactor = _patient getVariable [QGVAR(opioidFactor), 0];
if (_opioidFactor == 1) then {
    _patient setVariable [QGVAR(opioidFactor), _opioidRelief, true];
};
