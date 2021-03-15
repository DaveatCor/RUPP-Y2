int i = 13;
int input;

void setup()
{
	Serial.begin(9600);
	pinMode(8, OUTPUT);
	pinMode(9, OUTPUT);
	pinMode(10, OUTPUT);
	pinMode(11, OUTPUT);
	pinMode(12, OUTPUT);
	pinMode(13, OUTPUT);
}

void loop()
{
	if (Serial.available()){
		input = Serial.read();
		if (i == 13){		
			for ( i = 13 ; i >= 8; i--){
				digitalWrite(i, 1);
				delay(100);
				digitalWrite(i, 0);
				delay(100);
			}
			i = 8;
		} else if ( i == 8){
			for ( i = 8; i <= 13; i++){
				digitalWrite(i, 1);
				delay(100);
				digitalWrite(i, 0);
				delay(100);
			}
			i = 13;
		}
		Serial.println(input);
		Serial.print("Hexa= "):
		Serial.println(input, HEX);
	}
}
