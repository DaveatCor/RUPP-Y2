
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int input;

void setup()
{
	Serial.begin(9600);
	pinMode(10, OUTPUT);
}

void loop()
{
	if (Serial.available()){
		input = Serial.parseInt();
		if (input == 1){	
			digitalWrite(10, 1);
			Serial.println("LED4 turn ON");
		} else if (input == 0){
			digitalWrite(10, 0);
			Serial.println("LED4 turn OFF");
		} else {
			Serial.println("Wrong input");
		}
	}
}
