
/*	This is a default program--
	Use File->Load Prog to load a different program
*/
#include<Servo.h>
Servo servo;

void setup()
{
	servo.attach(9); // connect pin 9 arduino to signal pin
}

void loop()
{
	servo.write(180);
	//for(int i = 0; i<=100; i++){
	//digitalWrite(9, 1);
	//delay(10);
	//}
	//for(int i = 0; i>=0; i++){
	//digitalWrite(9, 1);
	//delay(10);
	//}
}
