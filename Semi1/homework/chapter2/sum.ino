/*  This is a default program--
  Use File->Load Prog to load a different program
*/

int array[5];
int sum = 0;
int i = 0;

void setup()
{
	Serial.begin(9600); //open serial port 9600
}

void loop()
{
	if (Serial.available()){
		if(i < 5){
			array[i] = Serial.parseInt();
			sum += array[i];
			Serial.println(array[i]);
			i++;

			if (i == 5) {
				Serial.print("Sum= "); Serial.println(sum);
			}
		}
	}
}
