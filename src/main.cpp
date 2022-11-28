#include <Arduino.h>
#include <wifiControl.h>
#include <mqtt.h>
#include <sense.h>

int actualValue;

void setup()
{
  Serial.begin(115200);

  // setupSensor();

  initWiFi();

  setClientData();
  MQTTconnection();

  subscribeTo("s1");

  publishTo("Angle", "50");

  delay(1000);
}

void loop()
{
  // actualValue = loopSensor();
}