#define RELAY_PIN
7 void setup() {
pinMode(RELAY_PIN, OUTPUT);
Serial.begin(9600);
Serial.println("Relay Control Ready");
}
void loop() {
if (Serial.available()) {
char cmd = Serial.read();
if (cmd == '1') {
digitalWrite(RELAY_PIN, HIGH); // Turn bulb ON
Serial.println("Bulb ON");
} else if (cmd == '0') {
digitalWrite(RELAY_PIN, LOW); // Turn bulb OFF
Serial.println("Bulb OFF");
}
}
}
