
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int count;
char input;
int incomingByte;

void setup()
{
	Serial.begin(9600);
}

void loop()
{

	// Send data only when receive data;
	if(Serial.available() > 0){
		input = Serial.read();
		if (input == 'f'){
			Serial.println("Robot go forward");
		} 
		else if (input == 'b') {
			Serial.println("Robot go back");
		}
		else if (input == 'r'){
			Serial.println("Robot go right");
		}
		else if (input == 'l'){
			Serial.println("Robot go left");
		}
		//Serial.print("I received ");
		//Serial.println(incomingByte, HEX);
	}
}
