
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int count;
int incomingByte;

void setup()
{
	float math = 6.50;
	float english = 7.25;
	float khmer = 8.75;
	float average = 0;
	average = (math+english+khmer)/3;
	Serial.begin(9600);
	Serial.println(average);
}

void loop()
{
}
