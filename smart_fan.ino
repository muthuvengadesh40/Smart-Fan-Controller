#include <DHT.h>

#define DHT_PIN 2
#define FAN_PIN 9
#define DHT_TYPE DHT11

DHT dht(DHT_PIN, DHT_TYPE);

void setup() {
  Serial.begin(9600);
  dht.begin();
  pinMode(FAN_PIN, OUTPUT);
  Serial.println("Smart Fan Controller Initialized...");
}

void loop() {
  delay(2000);

  float temperature = dht.readTemperature();

  if (isnan(temperature)) {
    Serial.println("Error: Failed to read from DHT11 sensor.");
    return;
  }

  Serial.print("Temperature: ");
  Serial.print(temperature);
  Serial.println(" °C");

  int fanSpeed = map(temperature, 25, 40, 0, 255);
  fanSpeed = constrain(fanSpeed, 0, 255);

  analogWrite(FAN_PIN, fanSpeed);

  Serial.print("Fan Speed: ");
  Serial.println(fanSpeed);
}
