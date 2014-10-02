
const int button1Pin = 8;  
const int button2Pin = 9;  

 int score1 = 0;
  int score2 = 0;

#include <LiquidCrystal.h>
LiquidCrystal lcd(12,11,5,4,3,2);


void setup()
{
  pinMode(button1Pin, INPUT);
  pinMode(button2Pin, INPUT);
  
  randomSeed(analogRead(0)); 
  
  lcd.begin(16, 2);
}

void writeNames(){
  lcd.setCursor(0,0);
  lcd.print("Beate|");
  lcd.setCursor(5,1);
  lcd.print("|");
  lcd.setCursor(11,1);
  lcd.print("|");
  lcd.setCursor(11,0);
  lcd.print("|Aina");
}


void loop()
{
  
  int button1State, button2State;  
  lcd.clear();
   
  writeNames();
  lcd.setCursor(0,1);
  lcd.print(score1);
  lcd.setCursor(12,1);
  lcd.print(score2);
  
  delay(1000);

  int ran = random(0, 1000);
  
  lcd.setCursor(7,0);
  lcd.print(ran);
  


for (int i = 0; i < 1000; i++ ) {
  delay(2);
  button1State = digitalRead(button1Pin);
  button2State = digitalRead(button2Pin);

  if (button1State == HIGH && ran % 3 == 0) {
    score1++;
    break;
  } 
  
  else if (button1State == HIGH && ran % 3 != 0)
  {
     score1--;
      break;
  } 

  if (button2State == HIGH && ran % 3 == 0)
  {
      score2++;
      break;
  } 
  else if (button2State == HIGH && ran % 3 != 0) {
     score2--;
      break;
  } 
}
  
}
