const int  analogPin = A0;// Analog input pin A0
int sensorValue=0; // Variable to store the value
void setup() {
  Serial.begin(9600);
  delay(1000);

  Serial.println("Board Info:");

  #if defined(__AVR_ATmega328P__)
    Serial.println("Microcontroller: ATmega328P");
  #elif defined(__AVR_ATmega2560__)
    Serial.println("Microcontroller: ATmega2560");
  #elif defined(__SAM3X8E__)
    Serial.println("Microcontroller: SAM3X8E (Arduino Due)");
  #elif defined(__SAMD21G18A__)
    Serial.println("Microcontroller: SAMD21G18A (Arduino Zero/MKR)");
  #else
    Serial.println("Microcontroller: Unknown");
  #endif

  Serial.print("Clock Speed: ");
  Serial.print(F_CPU / 1000000);
  Serial.println(" MHz");
}

void loop() {
  // Print "Hello, World!" to the Serial Monitor
  // Serial.println("Hello, World!");
  sensorValue = analogRead(analogPin); // Read the analog input
  Serial.println(sensorValue);         // Print the value to Serial Monitor
    // Wait for 1 second before sending again
  delay(500);                  

  // Moisture Sensor:GND to GND/ VCC to 5V, AOUT to Analog Input Port i.e., A0
  // On Air is 469, 430 very dr soil, Freshly wet soil is 200

  // Connecting the water sensor reader, + to 5V, - to GND, S to Analog Input Port i.e., A0
  // Readin of 660 is fully submerged, if taken out of the water readingg oes to 340
  // If water is removed reading goes back to 0
  

  // delay(1000);
}
