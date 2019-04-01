#include <Servo.h>

Servo myservo;

int servoControl;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  myservo.attach(9);

}

void loop() {
  // put your main code here, to run repeatedly:
  int sensorValue = analogRead(A0);

  float voltage = sensorValue * (5.0/1023);

  Serial.print("Voltage: ");
  Serial.println(voltage);

  servoControl = map(voltage, 0, 5, 0, 180);

  myservo.write(servoControl);
  delay(15);
}
