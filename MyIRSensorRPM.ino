unsigned long initialTime = millis();
unsigned long finalTime;
unsigned long elapsedTime;
unsigned long rpm;
const unsigned long dist = 17; //in centimeters
int irSensor2 = 5;

void setup() {
  pinMode(irSensor2, INPUT);
  Serial.begin(9600);
}

void loop() {
  finalTime = millis();

  if (digitalRead(irSensor2) == LOW)
  {
    elapsedTime = (finalTime - initialTime) / 1000UL;
    rpm = 60 / elapsedTime;
    initialTime = finalTime;
    Serial.print("RPM: ");
    Serial.print(rpm);
  }
}