# SmartIrrigation_IoT_OrientedObject

## Description

Ce projet implémente un système d'irrigation automatique intelligent pour les plantes en utilisant un **ESP32**, un **capteur DHT22** pour mesurer la température et l'humidité, et une **LED** simulant une pompe d'eau. L'architecture du projet est orientée objet, permettant de structurer le code de manière claire et modulaire. Le système s'active automatiquement pour arroser les plantes lorsque l'humidité est en dessous d'un seuil défini.

## Fonctionnalités

- **Mesure de la température et de l'humidité :**  
  Utilisation du capteur DHT22 pour surveiller les conditions environnementales des plantes.

- **Activation automatique de la pompe :**  
  La LED est allumée lorsque l'humidité est inférieure à un seuil défini, simulant l'activation d'une pompe pour arroser les plantes.

- **Connexion Wi-Fi :**  
  Le projet utilise un ESP32 pour se connecter à un réseau Wi-Fi et afficher l'adresse IP sur le terminal.

- **Architecture Orientée Objet :**  
  Le code est organisé en classes pour chaque fonctionnalité :  
  - **Wi-Fi Module**
  - **Capteur d'humidité (DHT22)**
  - **Contrôleur de la pompe (LED)**

## Matériel Nécessaire

- **ESP32** : Microcontrôleur pour la gestion du système.
- **DHT22** : Capteur de température et d'humidité.
- **LED** : Simule la pompe d'irrigation.
- **Plateforme de développement :** PlatformIO pour la gestion de l'environnement de développement.




