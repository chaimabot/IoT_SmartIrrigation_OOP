#ifndef WIFI_MODULE_H
#define WIFI_MODULE_H

#include <WiFi.h>
#include "../config/Config.h"

class WiFiModule {
public:
    WiFiModule();
    void begin();
};

#endif
