#include "MoistureSensor.h"
// Constructeur : Initialise le capteur DHT avec la broche et le type
MoistureSensor::MoistureSensor() : dht(DHT_PIN, DHT_TYPE) {}

void MoistureSensor::begin() {
    dht.begin(); // Initialise le capteur DHT
}

float MoistureSensor::readTemperature() {
    return dht.readTemperature(); // Retourne la température en Celsius
}

float MoistureSensor::readHumidity() {
    return dht.readHumidity(); // Retourne l'humidité relative
}
