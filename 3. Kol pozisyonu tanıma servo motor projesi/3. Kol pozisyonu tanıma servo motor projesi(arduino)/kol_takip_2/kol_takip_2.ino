#include <Servo.h>
Servo servol;//servoları tanımlıyoruz
Servo servor;

int pozl=90;//ilk pozisyonu 90 derece tanmlıyoruz
int pozr=90;
int aci=0;
int aci1=90;
int aci2=180;
int nevl;
int nevr;

void setup() 
{
  Serial.begin(9600);
servor.attach(9); 
servol.attach(10);

}

void loop() 
{
  
 char c = Serial.read(); 

 if (c == '1')
 {
  nevr=aci2;
    pozr=nevr;
    servor.write(nevr);
    
 }
else if (c == '4')
 {
  nevr=aci1;
    pozr=nevr;
    servor.write(nevr);
 }
else if (c == '7')
 {
  nevr=aci;
    pozr=nevr;
    servor.write(nevr);
 }
else if (c == '3')
 {
  nevl=aci;
    pozl=nevl;
    servol.write(nevl);
 }
else if (c == '6')
 {
  nevl=aci1;
    pozl=nevl;
    servol.write(nevl);
 }
else if (c == '9')
 {
  nevl=aci2;
    pozl=nevl;
    servol.write(nevl);
 }
 
}
