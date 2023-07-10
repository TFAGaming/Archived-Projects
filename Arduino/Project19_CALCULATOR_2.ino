
#include <Keypad.h>
#include   <LiquidCrystal.h>

int verteON = A2;
int verteTRUE = A1;
int rougeFALSE = A0;
LiquidCrystal lcd(0, 1, 2, 3, 4, 5);
const byte ROWS = 4;
const byte COLS = 4;

char keys [ROWS] [COLS] = {
  {'1', '2', '3', '+'},
  {'4', '5', '6', '-'},
  {'7', '8', '9', 'x'},
  {'C', '0', '=', '/'}
};
byte rowPins[ROWS] = {13,12,11,10};
byte colPins[COLS] = {9,8,7,6};

Keypad myKeypad = Keypad( makeKeymap(keys), rowPins, colPins, ROWS, COLS );

boolean presentValue = false;
boolean next = false;
boolean final = false;
String num1, num2;
int answer;
char op;

void setup()
{
  //start
  digitalWrite (verteON ,HIGH);
  lcd.begin(16,2);
  lcd.setCursor(0,0);
  lcd.print("   Calculator   ");
  delay(1000)
;  lcd.setCursor(0,1);
  lcd.print("----------------");
  delay(2500);
  lcd.clear();
  pinMode(verteTRUE, OUTPUT);
  pinMode(verteON, OUTPUT);
  pinMode(rougeFALSE, OUTPUT);
}

void loop(){

  char key = myKeypad.getKey();

  if (key != NO_KEY && (key=='1'||key=='2'||key=='3'||key=='4'||key=='5'||key=='6'||key=='7'||key=='8'||key=='9'||key=='0'))
  {
    if (presentValue != true)
    {
      num1 = num1 + key;
      int numLength = num1.length();
      lcd.setCursor(15 - numLength, 0); //to adjust one whitespace for operator
      lcd.print(num1);
    }
    else 
    {
      num2 = num2 + key;
      int numLength = num2.length();
      lcd.setCursor(15 - numLength, 1);
      lcd.print(num2);
      final = true;
    }
  }

  else if (presentValue == false && key != NO_KEY && (key == '/' || key == 'x' || key == '-' || key == '+'))
  {
    if (presentValue == false)
    {
      presentValue = true;
      op = key;
      lcd.setCursor(15,0);
      lcd.print(op);
    }
  }

  else if (final == true && key != NO_KEY && key == '='){
    if (op == '+'){
  digitalWrite (verteTRUE ,HIGH);
  delay(500);
  answer = num1.toInt() + num2.toInt();
  digitalWrite (verteTRUE ,LOW); 
    }
    else if (op == '-'){
  digitalWrite (verteTRUE ,HIGH);
  delay(500);
  answer = num1.toInt() - num2.toInt();
  digitalWrite (verteTRUE ,LOW);
    }
    else if (op == 'x'){
  digitalWrite (verteTRUE ,HIGH);
  delay(500);

  answer = num1.toInt() * num2.toInt();
  digitalWrite (verteTRUE ,LOW);
    }

else if (op == '/' && num2.toInt()==0){
 digitalWrite (rougeFALSE ,HIGH);
  lcd.setCursor(0,0);
  lcd.print("ERROR");
  lcd.setCursor(0,1);
  lcd.print("(press *)");
  delay(3000);
  lcd.clear();
  digitalWrite (rougeFALSE ,LOW);
}
    else if (op == '/' ){
      answer = num1.toInt() / num2.toInt();
    }
    
        
      lcd.clear();
      lcd.setCursor(15,0);
      lcd.autoscroll();
      lcd.print(answer);
      lcd.noAutoscroll();
  }
  else if (key != NO_KEY && key == 'C'){
    lcd.clear();
    presentValue = false;
    final = false;
    num1 = "";
    num2 = "";
    answer = 0 ;
    op = ' ';
  }
}


