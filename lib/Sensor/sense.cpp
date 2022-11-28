#include "sense.h"

const int sensorPin = 34;
int value, adjustedValue;

void setupSensor()
{
    pinMode(sensorPin, INPUT);
}

int loopSensor()
{
    value = analogRead(sensorPin);

    adjustedValue = map(value, 0, 4096, 0, 100);
    Serial.print("Sensor value =");
    Serial.println(adjustedValue);
    return adjustedValue;
}