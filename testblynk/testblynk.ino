#define BLYNK_TEMPLATE_ID "TMPLnSyRmJbb"
#define BLYNK_DEVICE_NAME "TEST"
#define BLYNK_AUTH_TOKEN "YskFu0cJ5mAxcpxvWu9B4S9qF0EzPUhw"

#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

int sensor_input = 36;
char auth[] = BLYNK_AUTH_TOKEN;
char ssid[] = "Harshith";
char pass[] = "Harshithappu123";

BlynkTimer timer;

void sendSensor()
{
  int analog_data = analogRead(sensor_input);
  Serial.println(analog_data);
  delay(200);

  Blynk.virtualWrite(V0,analog_data);
  delay(300);
}

void setup() {
  // put your setup code here, to run once:
  pinMode(sensor_input,INPUT);
  Serial.begin(9600);
  Blynk.begin(auth,ssid,pass);
  timer.setInterval(100L, sendSensor);
}

void loop() {
  // put your main code here, to run repeatedly:
Blynk.run();
timer.run();
}
