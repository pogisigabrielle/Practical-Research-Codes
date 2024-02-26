unsigned long initialTime = millis();
unsigned long finalTime;
unsigned long elapsedTime;
unsigned long speed;
const unsigned long dist = 17; //in centimeters
int irSensor1 = 4;

void setup() {
  pinMode(irSensor1, INPUT);
  Serial.begin(9600);
}

void loop() {
  finalTime = millis();

  if (digitalRead(irSensor1) == LOW)
  {
    elapsedTime = (finalTime - initialTime) / 1000UL;
    speed = dist / elapsedTime;
    initialTime = finalTime;
    Serial.print("Speed: ");
    Serial.print(speed);
    Serial.println("cm/s.");
  }
}
