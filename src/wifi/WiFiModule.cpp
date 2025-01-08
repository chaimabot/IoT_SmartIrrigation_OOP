#include "WiFiModule.h"
#include <WiFi.h>

WiFiModule::WiFiModule() {}

void WiFiModule::begin() {
    WiFi.begin(WIFI_SSID, WIFI_PASSWORD);  // Connexion Wi-Fi
    while (WiFi.status() != WL_CONNECTED) {
        delay(250);
    }
    Serial.println("WiFi connected");
    Serial.print("IP address: ");
    Serial.println(WiFi.localIP());
}
