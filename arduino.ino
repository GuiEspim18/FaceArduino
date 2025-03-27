#define RED_PIN 12
#define GREEN_PIN 13

void setup() {
    pinMode(RED_PIN, OUTPUT);
    pinMode(GREEN_PIN, OUTPOUT);
    Serial.begin(9600);
}

void loop() {
    if (Serial.avaliable() > 0) {
        char command = Serial.read();
        if (command == "R") {
            digitalWrite(RED_PIN, HIGH);
            digitalWrite(GREEN_PIN, LOW);
        }
        if (command == "G") {
            digitalWrite(RED_PIN, LOW);
            digitalWrite(GREEN_PIN, HIGH);
        }
    }
}