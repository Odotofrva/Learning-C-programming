// Pin Definitions
const int button1Pin = 2;
const int button2Pin = 3;
const int button3Pin = 4;

// Button State Variables
int button1State = 0;
int button2State = 0;
int button3State = 0;

void setup() {
    // Initialize serial communication at 9600 bps
    Serial.begin(9600);

    // Set button pins as input
    pinMode(button1Pin, INPUT);
    pinMode(button2Pin, INPUT);
    pinMode(button3Pin, INPUT);
}

void loop() {
    // Read the state of the buttons
    button1State = digitalRead(button1Pin);
    button2State = digitalRead(button2Pin);
    button3State = digitalRead(button3Pin);

    // Check button 1
    if (button1State == HIGH) {
        Serial.println("Button 1 pressed");
        delay(300); // Debounce delay
    }

    // Check button 2
    if (button2State == HIGH) {
        Serial.println("Button 2 pressed");
        delay(300); // Debounce delay
    }

    // Check button 3
    if (button3State == HIGH) {
        Serial.println("Button 3 pressed");
        delay(300); // Debounce delay
    }

    // Small delay to avoid excessive serial output
    delay(50);

