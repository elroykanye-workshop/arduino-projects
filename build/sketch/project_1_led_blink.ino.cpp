#include <Arduino.h>
#line 1 "C:\\Users\\elroy\\source\\GitHub\\arduino-projects\\project_1_led_blink\\project_1_led_blink.ino"
/* 
 *  Project1 Blink
 *  Turns on the LED for one second, then off for one second repeatedly.
 */

// Pin 13 has an LED connected to it on host Arduino Board
// Initialise pin13 with a name
int led = 13;
int delay_ms = 1000;
// the setup routine runs once when you press reset:
#line 11 "C:\\Users\\elroy\\source\\GitHub\\arduino-projects\\project_1_led_blink\\project_1_led_blink.ino"
void setup();
#line 17 "C:\\Users\\elroy\\source\\GitHub\\arduino-projects\\project_1_led_blink\\project_1_led_blink.ino"
void loop();
#line 11 "C:\\Users\\elroy\\source\\GitHub\\arduino-projects\\project_1_led_blink\\project_1_led_blink.ino"
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
  delay(delay_ms);
}

