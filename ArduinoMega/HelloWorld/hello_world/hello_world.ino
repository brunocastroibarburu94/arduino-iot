const int  analogPin = A0;// Analog input pin A0
int sensorValue=0; // Variable to store the value
const int outputPin = 7; // A

// Connections:
// Moisture Sensor: GND to GND/ VCC to 5V, AOUT to Analog Input Port i.e., A0
// Water Level Sensor: Connecting the water sensor reader, + to 5V, - to GND, S to Analog Input Port i.e., A0

// Data:
// The relay when powered off is Closed
// When powered on if IN is 1 is Closed
// When powered on if IN is 0 is Open
const int CLOSE_RELAY=1;
const int OPEN_RELAY=0;

// Moisture Sensor: On Air is 469, 430 very dr soil, Freshly wet soil is 200 
const float max__moisture_dry=469.0;
const float hth__dry_soil=400.0;
const float lth__wet_soil=250.0;
const float min__moisture_wet=200.0;

// Water Level sensor:
// Reading of 660 is fully submerged, if taken out of the water readingg oes to 340
const float max__water_level=660.0; 
const float hth__water_level=600.0; 
const float lth__water_level=400.0; 
const float min__water_level=340.0; // When wet a layer of water accumulates at the bottom, if fully dry it can reach 0. 

int out_value=0;
int state = 0;
char buffer[50];
void setup() {
  delay(1000);
  Serial.begin(9600);
  delay(1000);
  // Set the pin as an output
  pinMode(outputPin, OUTPUT);
  Serial.println("Initializing...");
  digitalWrite(outputPin, out_value);  // Set pin to HIGH (1)
}

void loop() {

  // If water is removed reading goes back to 0

    // out_value = 1-out_value; // Toggle output value
    sprintf(buffer, "The value of output pin %d is been set to %d.", outputPin,out_value); //
    Serial.println(buffer);
    // digitalWrite(outputPin, out_value);  // Set pin to HIGH (1)
    delay(1000);                    // Wait for 1 second (1000 milliseconds)
    
  // delay(1000);
}
