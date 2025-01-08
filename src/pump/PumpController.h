#ifndef PUMP_CONTROLLER_H
#define PUMP_CONTROLLER_H

#include "../config/Config.h"

class PumpController {
public:
    PumpController();
    void begin();
    void controlPump(float humidity, float temperature);
};

#endif
