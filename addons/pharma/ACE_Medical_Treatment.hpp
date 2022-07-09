class ADDON {
	class Medication {
		    class Carbonate {
			      painReduce = 0;
            hrIncreaseLow[] = {5, 10};
            hrIncreaseNormal[] = {10, 15};
            hrIncreaseHigh[] = {15, 20};
            timeInSystem = 30;
            timeTillMaxEffect = 2;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
        class TXA {
            painReduce = 0;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 600;
            timeTillMaxEffect = 15;
            maxDose = 3;
            incompatibleMedication[] = {};
            viscosityChange = 0;
        };
        class Norepinephrine {
            painReduce = 0;
            hrIncreaseLow[] = {0, 0};
            hrIncreaseNormal[] = {0, 0};
            hrIncreaseHigh[] = {0, 0};
            timeInSystem = 360;
            timeTillMaxEffect = 15;
            maxDose = 12;
            incompatibleMedication[] = {};
            viscosityChange = 25;
        };
        class Phenylephrine {
            painReduce = 0;
            hrIncreaseLow[] = {-5, -10};
            hrIncreaseNormal[] = {-10, -15};
            hrIncreaseHigh[] = {-10, -15};
            timeInSystem = 360;
            timeTillMaxEffect = 15;
            maxDose = 12;
            incompatibleMedication[] = {};
            viscosityChange = 50;
        };
        class Nitroglycerin {
            painReduce = 0;
            hrIncreaseLow[] = {5, 10};
            hrIncreaseNormal[] = {10, 15};
            hrIncreaseHigh[] = {10, 15};
            timeInSystem = 360;
            timeTillMaxEffect = 15;
            maxDose = 12;
            incompatibleMedication[] = {};
            viscosityChange = -25;
        };
        class Fentanyl {
            painReduce = 1;
            hrIncreaseLow[] = {-25, -20};
            hrIncreaseNormal[] = {-30, -25};
            hrIncreaseHigh[] = {-35, -25};
            timeInSystem = 1800;
            timeTillMaxEffect = 60;
            maxDose = 2;
            incompatibleMedication[] = {};
            viscosityChange = -35;
        };
        class Ketamine {
            painReduce = 0.8;
            hrIncreaseLow[] = {5, 10};
            hrIncreaseNormal[] = {10, 15};
            hrIncreaseHigh[] = {10, 15};
            timeInSystem = 900;
            timeTillMaxEffect = 15;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = 10;
        };
        class Morphine {
            painReduce = 0.7;
            hrIncreaseLow[] = {-20, -15};
            hrIncreaseNormal[] = {-25, -10};
            hrIncreaseHigh[] = {-25, -15};
            timeInSystem = 900;
            timeTillMaxEffect = 40;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -25;
        };
        class Nalbuphine {
            painReduce = 0.6;
            hrIncreaseLow[] = {-5, 0};
            hrIncreaseNormal[] = {-10, -5};
            hrIncreaseHigh[] = {-15, -5};
            timeInSystem = 900;
            timeTillMaxEffect = 30;
            maxDose = 4;
            incompatibleMedication[] = {};
            viscosityChange = -5;
        };
        class Painkillers {
            painReduce = 0.3;
            hrIncreaseLow[] = {0, 5};
            hrIncreaseNormal[] = {5, 10};
            hrIncreaseHigh[] = {5, 15};
            timeInSystem = 600;
            timeTillMaxEffect = 90;
            maxDose = 10;
            incompatibleMedication[] = {};
            viscosityChange = -5;
        };
    };
};
