

#include <Wire.h>
#include <SparkFun_MMA8452Q.h>
MMA8452Q accel;

void setup() {
  Serial.begin(9600);
  accel.init();
}


void loop() {
  if(accel.available()) {
    accel.read();
    //printAccels();
    printCalculatedAccels();
    Serial.println();
    
  }
}


void printAccels()
{
  Serial.print(accel.x, 3);
  Serial.print(",");
  Serial.print(accel.y, 3);
  Serial.print(",");
  Serial.print(accel.z, 3);
  Serial.print(",");
}

void printCalculatedAccels()
{ 
  Serial.print(accel.cx, 3);
  Serial.print(",");
  Serial.print(accel.cy, 3);
  Serial.print(",");
  Serial.print(accel.cz, 3);
  Serial.print(",");
}
