#include <DHT.h>
#include <DHT_U.h>

#define CapteurTempHum D3
#define DHTTYPE DHT22

DHT dht(CapteurTempHum, DHTTYPE);

float Humidity;
float Temperature;

void setup() {
  Serial.begin(9600);
  dht.begin();
}

void loop() {
  delay(3000);
  
  float Humidity = dht.readHumidity();
  float Temperature = dht.readTemperature();
  delay(10000);

  if (isnan(Humidity) || isnan(Temperature)) {
  Serial.println("Reading failed.");
  return;
}

 //Affichage des données
 Serial.print("Humidité : ");
 Serial.print(Humidity);
 Serial.println(" %");
 Serial.print("Température: ");
 Serial.print(Temperature);
 Serial.println(" °C");
}
