char control;

void setup(){
  Serial.begin(9600);
  pinMode(13, OUTPUT); // Sets the digital pin 13 as output
}

void loop(){
  if (Serial.available() > 0){
    control = Serial.read();
    if ( control == '1'){
      digitalWrite(13, HIGH); // Sets the digital pin 13 on
      Serial.println("LED turn on");
      delay(1000); // waits for a second
    } else if ( control == '0'){
      digitalWrite(13, LOW); // Sets the digital pin 13 off
      Serial.println("LED turn off");
      delay(1000); // waits for a second
    }
  }
}
