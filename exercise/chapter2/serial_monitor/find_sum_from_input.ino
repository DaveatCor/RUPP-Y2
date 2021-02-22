
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int count;
int sum;

void setup()
{
	Serial.begin(9600);
}

void loop()
{
	if (Serial.available() > 0) {
		count = Serial.parseInt();
		for (int i= 1; i<= count; i++){
			sum += i;
		}
		
		Serial.println(sum);
	}
	delay(100);
}
