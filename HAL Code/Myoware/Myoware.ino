/*
  ReadMyowareAnalogVoltage
  Max Luu
  2/14/19

  Reads EMG analog input on pin 0, converts it to voltage, and prints the result to the Serial Monitor.
  Graph using Serial Plotter (Tools > Serial Plotter menu)
  Attach the center pin of a Myoware Sensor to pin A0, and the outside pins to +5V and ground.

*/

void setup() {
  // initialize serial communication protoco at 115200 bits per second:
  Serial.begin(115200);
}

void loop() {
  // read the input on analog pin 0:
  int sensorValue = analogRead(A0);
  // Convert the analog reading (which ranges from 0 - 1023) to a voltage (0 - 5V):
  float voltage = sensorValue * (5.0 / 1023.0);
  // print out the value you read:
  Serial.println(voltage);
}