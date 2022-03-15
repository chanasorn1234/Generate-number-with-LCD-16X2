#include<LiquidCrystal.h>

const int rs=12,en=11,d4=5,d5=4,d6=3,d7=2;
LiquidCrystal lcd(rs,en,d4,d5,d6,d7);
byte bar[][8] = 
{
  { //0
  B00000,
  B01110,
  B10001,
  B10001,
  B10001,
  B01110,
  B00000,
  B00000
  },
  {  //1
  B00000,
  B01110,
  B10001,
  B10101,
  B01001,
  B00010,
  B00000,
  B00000  
  },
  {  //2
  B10000,
  B10000,
  B10110,
  B10101,
  B10001,
  B11111,
  B00000,
  B00000
  },
  { //3
  B00000,
  B01010,
  B10101,
  B10101,
  B10001,
  B01001,
  B00000,
  B00000  
  },
  {//4
  B00000,
  B00001,
  B01110,
  B10000,
  B10100,
  B11011,
  B00000,
  B00000
  },
  {//5
  B00000,
  B00101,
  B01110,
  B10000,
  B10100,
  B11011,
  B00000,
  B00000
  },
  {//6
  B10000,
  B01110,
  B00001,
  B00101,
  B01001,
  B00110,
  B00000,
  B00000
  },
  {//7
  B00001,
  B00001,
  B01011,
  B10101,
  B10011,
  B01010,
  B00000,
  B00000
  },
  {//8
  B00001,
  B00011,
  B01100,
  B10001,
  B10101,
  B01010,
  B00000,
  B00000
  },
  {//9
  B00001,
  B00011,
  B01110,
  B10010,
  B10010,
  B11001,
  B00000,
  B00000
  },  
};

int count=0;
int count2=0;
void setup(){
  lcd.createChar(1,bar[0]);
  lcd.createChar(2,bar[0]);
  lcd.createChar(3,bar[0]);
  lcd.createChar(4,bar[0]);
  lcd.createChar(5,bar[0]);
  lcd.createChar(6,bar[0]);
  lcd.begin(16, 2);

}
void loop(){
  count=0;
  count2=0;
  while(count<=2){
  lcd.createChar(1,bar[count]);
  lcd.setCursor(0,0);
  lcd.write(1);
  while(count2<=9){
    if(count==2 && count2==5){break;}
    lcd.createChar(2,bar[count2]);
    lcd.setCursor(1,0);
    lcd.write(2);
    delay(1000);
  	count2++;
    
  }
    count++;
    count2=0;
  }
}
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  
  

  