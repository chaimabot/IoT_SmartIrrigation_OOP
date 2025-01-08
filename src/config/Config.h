#ifndef CONFIG_H
#define CONFIG_H

// Définir les informations Wi-Fi
#define WIFI_SSID "Wokwi-GUEST"
#define WIFI_PASSWORD ""

// Configuration du serveur NTP
#define NTP_SERVER "pool.ntp.org"
#define UTC_OFFSET 0
#define UTC_OFFSET_DST 0

// Définir les pins
#define DHT_PIN 5
#define LED_PIN 2

// Définir le type de capteur DHT
#define DHT_TYPE DHT22
#define LCD_ADDRESS 0x27   // Adresse I2C de l'écran LCD
#define LCD_COLUMNS 16     // Nombre de colonnes de l'écran LCD
#define LCD_ROWS 2 
#endif // CONFIG_H
