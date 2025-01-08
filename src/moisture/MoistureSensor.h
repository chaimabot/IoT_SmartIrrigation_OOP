
#include <DHT.h>    // Inclure la bibliothèque DHT
#include "../config/Config.h" // Inclure les configurations globales

class MoistureSensor {
public:
    MoistureSensor();      // Constructeur
    void begin();          // Initialisation du capteur
    float readTemperature(); // Lecture de la température
    float readHumidity();    // Lecture de l'humidité

private:
    DHT dht; // Instance du capteur DHT
};

