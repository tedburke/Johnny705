//
// Robot control program for Johnny705 simulator
//
// Motor control pins:
//   D2 : Left motor forward
//   D3 : Left motor reverse
//   D4 : Right motor forward
//   D5 : Right motor reverse
//
// Sensor input pins:
//   A0 : Front left colour sensor
//   A1 : Front right colour sensor
//   A2 : Back left colour sensor
//   A3 : Back right colour sensor
//

void setup()
{
    // Set motor control pins as digital outputs
    pinMode(2, OUTPUT); // left motor forward pin
    pinMode(3, OUTPUT); // left motor reverse pin
    pinMode(4, OUTPUT); // right motor forward pin
    pinMode(5, OUTPUT); // right motor reverse pin
}

void loop()
{
	// Drive forward
	digitalWrite(2, HIGH);
	digitalWrite(3, LOW);
	digitalWrite(4, HIGH);
	digitalWrite(5, LOW);
}
