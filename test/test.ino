

#include "MQ135.h"

#define SENSOR2 34
//#define SENSOR1 35
//#define SENSOR3 A19

void setup()
{
  Serial.begin(9600);
  pinMode(SENSOR1,OUTPUT);
  //pinMode(SENSOR2,OUTPUT);
  //pinMode(SENSOR3,OUTPUT);
    delay(5000);
}


  void loop()
  {
    float air_quality1 = analogRead(SENSOR1);
    Serial.print("Air Quality1: ");
    Serial.print(air_quality1-192,DEC);
    Serial.println("  PPM");   
    Serial.println();

    float air_quality2 = analogRead(SENSOR2);
    Serial.print("Air Quality2: ");  
    Serial.print(air_quality2-50,DEC);
    Serial.println("  PPM");   
    Serial.println();

    float air_quality3 = analogRead(SENSOR3);
    Serial.print("Air Quality3: ");  
    Serial.print(air_quality3+68,DEC);
    Serial.println("  PPM");   
    Serial.println();

    Serial.println("Waiting...");

    delay(2000);    
}
