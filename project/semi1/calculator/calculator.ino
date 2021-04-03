#include<Keypad.h>
#include<LiquidCrystal.h>

// LCD
LiquidCrystal lcd(12, 11, 5, 4, 3, 2);

int num1;
int num2;
int count1 = -1;
int count2 = -1;

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
  
  //lcd
  analogWrite(6, 20);
  lcd.begin(16, 2);
  
  lcd.setCursor(0, 0);
  lcd.print("Group 3");
  lcd.setCursor(0, 1);
  lcd.print("Calculator");
}
void reset(){
    count1 = -1;
    count2 = -1;
    num1 = 0;
    num2 = 0;
    sum = 0;
}

void loop() {
  
  customKey = customKeypad.getKey();
  
  if (customKey != NO_KEY){

    if (count1 == -1){
      
      lcd.clear();
      count1 = 0;
      
    }

    if (customKey == '+'){
      
      choose = '+';
      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print(customKey);
      
      count2 = 0;
    } else if (customKey == '-'){
      
      choose = '-';
      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print(customKey);
      
      count2 = 0;
      
    } else if (customKey == '*'){
      
      choose = '*';
      lcd.clear();
      
      lcd.setCursor(0, 0);
      lcd.print(customKey);
      count2 = 0;
      
    } else if (customKey == '/'){
      
      choose = '/';
      lcd.clear();

      lcd.setCursor(0, 0);
      lcd.print(customKey);
      count2 = 0;
      
    } else if ( customKey == '='){
      
      lcd.clear();

      switch(choose){
        case '+': sum = num1 + num2; break;
        case '-': sum = num1 - num2; break;
        case '*': sum = num1 * num2; break;
        case '/': sum = num1 / num2; break;
      }
      
      lcd.setCursor(0, 0);
      lcd.print("Sum =");
      
      lcd.setCursor(6, 0);
      lcd.print(sum);

      reset();
      
    } else if (customKey == 'C'){
      
      reset();

      lcd.setCursor(0, 0);
      lcd.print("Group 4");
      lcd.setCursor(0, 1);
      lcd.print("Calculator");
      
    } else if (count2 != -1){
      lcd.setCursor(count2, 0);
      lcd.print(customKey);

      num2 *= 10;
      num2 = num2 + (customKey - 48);
      
      count2++;
    } else if (count1 != -1){
      
      lcd.setCursor(count1, 0);
      lcd.print(customKey);

      num1 *= 10;
      num1 = num1 + (customKey - 48);
    
      Serial.print(num1);
      count1++;
    }    
  }
}
