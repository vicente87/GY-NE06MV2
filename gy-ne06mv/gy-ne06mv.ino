#include <SoftwareSerial.h>


SoftwareSerial gps(4,3);

char dato=' ';

void setup()
{
 Serial.begin(115200);            
 gps.begin(9600); 
 Serial.println("Hola GPS");
}


void loop()
{
  if(gps.available())
  {
    
    dato=gps.read();
    Serial.print(dato);
     delay (50);
  }
}