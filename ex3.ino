#include "SonarEZ0pw.h"
SonarEZ0pw Sonar(7); // pin D7
float cm_dis=0.00;
float Inch_dis=0.00;
void setup() {
// put your setup code here, to run once:
Serial.begin(9600);
}

void loop() {
// put your main code here, to run repeatedly:
cm_dis= Sonar.Distance(cm); // To calculate the distance in cm
Inch_dis=Sonar.Distance(inch);// To calculate the distance in Inch
Serial.println("Distance " );
Serial.print(Inch_dis);
Serial.println(" inch ");
Serial.print(cm_dis);
Serial.println(" cm ");
delay(250);
}
