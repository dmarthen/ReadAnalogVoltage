void setup() {
  pinMode(LED_BUILTIN, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int sensorValue = analogRead(2);
  float voltage = sensorValue * (5.0/1023.0);
  digitalWrite(LED_BUILTIN, HIGH);  
  Serial.println(voltage); 
  delay(500);
  digitalWrite(LED_BUILTIN, LOW);    
  sensorValue = analogRead(2);
  voltage = sensorValue * (5.0/1023.0);
  Serial.println(voltage); 
  delay(500);                  
}
