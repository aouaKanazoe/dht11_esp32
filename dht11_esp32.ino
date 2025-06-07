#include <DHT.h>

#define DHTPIN 4       // GPIO utilisé pour le signal DATA du DHT
#define DHTTYPE DHT11   // ou DHT22

DHT dht(DHTPIN, DHTTYPE);


void setup() {
  Serial.begin(9600);
  Serial.println("Test du capteur DHT11");
  dht.begin();
}

void loop() {

  delay(2000); // attendre 2 secondes

  float temp= dht.readTemperature();
  float hum= dht.readHumidity();

  if (isnan(temp) || isnan(hum)) {
    Serial.println("Erreur : lecture capteur DHT échouée !");
    return;
  } else {
  Serial.print("Température: ");
  Serial.print(temp);
  Serial.println(" °C");

  Serial.print("Humidité : ");
  Serial.print(hum);
  Serial.println(" % "); 

  }
  Serial.println("----------");
  
}