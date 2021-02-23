
/*	This is a default program--
	Use File->Load Prog to load a different program
*/

int math;
int c;
int avg;

void setup()
{
	Serial.begin(9600);
	Serial.println("Enter");	
	if (Serial.available()>0){
		//math = Serial.parseInt();
		//c = Serial.parseInt();
		//avg = (math+c) / 2;
		//Serial.println(avg);
	}
}

void loop()
{

}
