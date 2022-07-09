#include "script_component.hpp"
/*
 * Author: MiszczuZPolski
 * 
 *
 * Arguments:
 * 0: Medic <OBJECT>
 * 1: Item Classname <STRING>
 *
 * Return Value:
 * <BOOLEAN>
 *
 * Example:
 * [player, "Ketamine"] call kat_pharma_fnc_treatmentAdvanced_KetamineLocal;
 *
 * Public: No
 */

params ["_patient", "_medicationString"];

private _medicationArray = _patient getVariable ["ace_medical_medications", []];

{
    _x params ["_medication"];

    if (_medication isEqualTo "Morphine") exitWith {
    	_medicationArray deleteAt (_medicationArray find _x);
    };
} forEach (_medicationArray);

_patient setVariable ["ace_medical_medications", _medicationArray, true];

[_patient, "Naloxone"] call ace_medical_treatment_fnc_addToTriageCard;
[_patient, "activity", LSTRING(use_log), [[_medic] call ace_common_fnc_getName, "Naloxone"]] call ace_medical_treatment_fnc_addToLog;

true