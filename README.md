# 🌡️ Station Météo ESP32 avec Capteur DHT11

Ce projet utilise une carte **ESP32** et un capteur **DHT11** pour lire la température et l’humidité, et les afficher via le moniteur série.

## 🔧 Matériel nécessaire

- 1x ESP32 Dev Module
- 1x Capteur DHT11 (version 3 broches, avec résistance intégrée)
- Fils Dupont
- Breadboard

## ⚙️ Schéma de câblage

| DHT11 (Module) | ESP32 GPIO |
|----------------|-------------|
| VCC (+)        | 5V          |
| DATA (milieu)  | GPIO4 (modifiable) |
| GND (-)        | GND         |

> ⚠️ Le capteur doit être alimenté en **5V**, et **le GPIO utilisé ne doit pas interférer avec le démarrage de l’ESP32** (éviter GPIO0, GPIO12).

## 💻 Code

Le programme utilise la bibliothèque `DHT` d’Adafruit. Il lit la température et l'humidité toutes les 2 secondes et les affiche sur le moniteur série.
