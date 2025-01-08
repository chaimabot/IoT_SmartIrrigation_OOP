#include <Arduino.h>
#include <WiFi.h>
#include <LiquidCrystal_I2C.h>
#include "wifi/WiFiModule.h"
#include "moisture/MoistureSensor.h"
#include "pump/PumpController.h"
#include "config/Config.h"

// Initialisation des modules
WiFiModule wifiModule;
MoistureSensor moistureSensor;
PumpController pumpController;

// Initialiser l'écran LCD (adresse I2C 0x27, 16 colonnes, 2 lignes)
LiquidCrystal_I2C lcd(LCD_ADDRESS, LCD_COLUMNS, LCD_ROWS);

// Fonction d'initialisation du système
void setup() {
    // Démarrer la communication série
    Serial.begin(115200);

    // Connexion Wi-Fi
    wifiModule.begin();

    // Initialisation du capteur d'humidité et de température
    moistureSensor.begin();

    // Initialisation du contrôle de la pompe (LED)
    pumpController.begin();

    // Initialisation de l'écran LCD
    lcd.init();           // Initialiser l'écran LCD
    lcd.backlight();      // Activer le rétroéclairage
    lcd.setCursor(0, 0);
    lcd.print("Initialisation...");
    lcd.setCursor(0, 1);
    lcd.print("En cours...");
}

// Fonction principale de la boucle
void loop() {
    // Lire la température et l'humidité à partir du capteur
    float temperature = moistureSensor.readTemperature();
    float humidity = moistureSensor.readHumidity();

    // Vérifier si les valeurs sont valides
    if (isnan(temperature) || isnan(humidity)) {
        // Si une erreur de lecture se produit, afficher un message d'erreur
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Erreur capteur!");
        Serial.println("Erreur de lecture du capteur!");
    } else {
        // Afficher les valeurs de température et d'humidité sur l'écran LCD
        lcd.clear();
        lcd.setCursor(0, 0);
        lcd.print("Temp: ");
        lcd.print(temperature);
        lcd.print(" C");

        lcd.setCursor(0, 1);
        lcd.print("Hum: ");
        lcd.print(humidity);
        lcd.print(" %");



        // Contrôler la pompe (LED) en fonction de l'humidité et de la température
        pumpController.controlPump(humidity, temperature);
    }

    // Attendre 2 secondes avant la prochaine lecture
    delay(2000);
}
