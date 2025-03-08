#include <Arduino.h>

#define FLEX_PIN_1 2   // Pin P2 (Thumb)
#define FLEX_PIN_2 4   // Pin P4 (Index)
#define FLEX_PIN_3 15  // Pin P15 (Middle)
#define FLEX_PIN_4 35  // Pin P35 (Ring)
#define FLEX_PIN_5 34  // Pin P34 (Pinky)

void setup() {
  Serial.begin(115200);
}

void loop() {
    char receivedChar = Serial.read(); // Read the input

    int flexValue1 = analogRead(FLEX_PIN_1);
    int flexValue2 = analogRead(FLEX_PIN_2);
    int flexValue3 = analogRead(FLEX_PIN_3);
    int flexValue4 = analogRead(FLEX_PIN_4);
    int flexValue5 = analogRead(FLEX_PIN_5);

    float voltage1 = flexValue1 * (3.3 / 4095.0);
    float voltage2 = flexValue2 * (3.3 / 4095.0);
    float voltage3 = flexValue3 * (3.3 / 4095.0);
    float voltage4 = flexValue4 * (3.3 / 4095.0);
    float voltage5 = flexValue5 * (3.3 / 4095.0);

    if (receivedChar == ' ') {  // If spacebar is pressed

      Serial.println("\nFlex Sensor Readings:");
      
      //Serial.print("Thumb: ADC = ");
      //Serial.print(flexValue1);
      Serial.print("Thumb Voltage = ");
      Serial.println(voltage1, 3);

      //Serial.print("Index: ADC = ");
      //Serial.print(flexValue2);
      Serial.print("Index Voltage = ");
      Serial.println(voltage2, 3);

     // Serial.print("Middle: ADC = ");
      //Serial.print(flexValue3);
      Serial.print("Middle Voltage = ");
      Serial.println(voltage3, 3);

      //Serial.print("Ring: ADC = ");
      //Serial.print(flexValue4);
      Serial.print("Ring Voltage = ");
      Serial.println(voltage4, 3);

      //Serial.print("Pinky: ADC = ");
      //Serial.print(flexValue5);
      Serial.print("Pinky Voltage = ");
      Serial.println(voltage5, 3);

      Serial.println("------------------------");
    }
}
