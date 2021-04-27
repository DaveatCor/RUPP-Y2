
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

const int buzzer = 9;

void setup()
{
	pinMode(buzzer, OUTPUT);
}

void loop()
{
	tone(buzzer, 1000);// set 1Khz sound signal
	delay(1000);
	noTone(buzzer); // Stop sound
	delay(1000);
}
