#define TEMP_SENSOR_PIN A0 
#define RELAY_PIN 5         

void setup() {
  Serial.begin(9600);        
  pinMode(RELAY_PIN, OUTPUT); 
  digitalWrite(RELAY_PIN, LOW); 
}

void loop() {
  int sensorValue = analogRead(TEMP_SENSOR_PIN);  
  float voltage = sensorValue * (5.0 / 1023.0);   
  float temperatureC = (voltage - 0.5) * 100;     

  Serial.print("Temperature: "); 
  Serial.print(temperatureC);     
  Serial.println(" *C");          

  // Fan control logic: If temperature > 30°C, turn on the fan (LED)
  if (temperatureC > 30) {
    digitalWrite(RELAY_PIN, HIGH); 
  } else {
    digitalWrite(RELAY_PIN, LOW);   
  }

  delay(2000);  
}

