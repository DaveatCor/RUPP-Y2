//Show LED 4
//When press button one LED move left to right
//When press button two LED move right to left
int button1=0;
int button2=0;

void setup(){
	Serial.begin(9600);
	// initialize the digital pin from 5 to 8.
	for(int i=5;i<=8;i++)
		pinMode(i,OUTPUT);

	pinMode(10,INPUT);

}

//this function use for led move left to right;
void btn1(){
	//this btn use for when click it open led
	button1=digitalRead(10);

	// Turn on led from 5 to 8 per 100milliseconds;
	// From Left to Right
	for(int i=5;i<=8;i++){
		delay(100); 
		digitalWrite(i,button1);
	}

	// Turn off led from 5 to 8 per 100milliseconds;
	// From Left to Right
	for(int i=5;i<=8;i++){
		delay(100); 
		digitalWrite(i,0);
	}

	Serial.println(button1);
}
//this function use for led move right to left;
void btn2(){
	//this btn use for when click it open led
	button2=digitalRead(10);

	// Turn on led from 5 to 8 per 100milliseconds;
	// From Right to Left
	for(int i=8;i>=5;i--){
		delay(100);
		digitalWrite(i,button2);
	}

	// Turn OFF led from 5 to 8 per 100milliseconds;
	// From Right to Left
	for(int i=8;i>=5;i--){
		delay(100);
		digitalWrite(i,0);
	}

}
void loop(){
	//this two function call from above for exicution
	btn1();
	btn2();

}