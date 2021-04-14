#include<Keypad.h>
#include<LiquidCrystal.h>

// LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int num1 = -1;
int num2 = -1;
int position = 0;

char choose;

int sum = 0;

// Keypad
const int ROWS = 4;
const int COLS = 4;

char hexaKeys[ROWS][COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', '*'},
  {'C', '0', '=', '/'},
};

byte rowPins[ROWS] = {10, 9, 8, 7};
byte colPins[COLS] = {A0, A1, A2, A3};

char customKey;

Keypad customKeypad = Keypad(
  makeKeymap(hexaKeys), 
  rowPins,
  colPins,
  ROWS,
  COLS
);

void setup() {

  Serial.begin(9600);

  analogWrite(6, 70);
  lcd.begin(16, 2);
  
  lcd.setCursor(position, 0);
  lcd.print("Group 3");
  lcd.setCursor(position, 1);
  lcd.print("Calculator");
}

void loop() {
  
  customKey = customKeypad.getKey();
  
  if (customKey != NO_KEY){
    if (num1 == -1){
      
      lcd.clear();
      num1 = 0;
      
    }

    if (customKey == '+' || customKey == '-' || customKey == '*' || customKey == '/'){
      position = 0;
      
      choose = customKey;
      lcd.clear();

      display();
      
      num2 = 0;
    } else if ( customKey == '='){
      position = 0;
      result();
      
    } else if (customKey == 'C'){
      reset();
      
    } else if (num2 != -1){
      display();

      // First number = 0
      num2 *= 10;
      num2 = num2 + (customKey - 48);
      
      position++;
    } else if (num1 != -1){
      display();

      num1 *= 10;
      num1 = num1 + (customKey - 48);
    
      Serial.print(num1);
      position++;
    }    
  }
}



void reset(){
    num1 = -1;
    num2 = -1;
    sum = 0;
    position = 0;

    lcd.setCursor(0, 0);
    lcd.print("Group 3");
    lcd.setCursor(0, 1);
    lcd.print("Calculator");
}

void result(){
    if (sum == 0){
      lcd.clear();
      Serial.println(choose);
      switch(choose){
          case '+': sum = num1 + num2; break;
          case '-': sum = num1 - num2; break;
          case '*': sum = num1 * num2; break;
          case '/': sum = num1 / num2; break;
      }
      
      lcd.setCursor(position, 0);
      lcd.print("Sum =");
      
      lcd.setCursor(6, 0);
      lcd.print(sum);
    }
}

void display(){
    lcd.setCursor(position, 0);
    lcd.print(customKey);  
}
