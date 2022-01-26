/* 
 *  Project1 Blink
 *  Turns on the LED for one second, then off for one second repeatedly.
 */

// Pin 13 has an LED connected to it on host Arduino Board
// Initialise pin13 with a name
int led = 13;
int delay_ms = 1000;
// the setup routine runs once when you press reset:
void setup() {
  // put your setup code here, to run once:
  pinMode(led, OUTPUT);
}

// the loop routine runs over and over again forever:
void loop() {
  // put your main code here, to run repeatedly:
  digitalWrite(led, HIGH);
  delay(delay_ms);
  digitalWrite(led, LOW);
  delay(delay_ms)
}
