const int leds[]{0b00000001, 0b00000010, 0b00000100, 0b00001000, 0b00010000, 0b00100000, 0b01000000, 0b10000000 };
const int potenti = A5;
long currentmillis;
long previousmillis = 0;
const int buzz = 10;
const int button = 9;
float interval; 
float speed;
int i;
int picked;
const int btnstarter = 11;
bool win; 
bool playing;
bool lose;
int counter;
long milli1;
long milli2;
long m3;
long m4;

void setup() {
  DDRD = 0b11111111;
  pinMode(buzz,OUTPUT);
  pinMode(button,INPUT_PULLUP);
  pinMode(potenti,INPUT);
  pinMode(btnstarter,INPUT_PULLUP);
  randomSeed(analogRead(A0));
  picked = random(8);
  playing = true; 
  counter = 0;
  win = false;
  lose = false; 
}

void loop() {
  while(playing == true){
    i = 0;
    counter = 0;
   while(digitalRead(btnstarter) == HIGH){
    PORTD = leds[picked];
   }
   while(digitalRead(button) == HIGH){
     speed = (analogRead(potenti)/10);
     interval = 70 + speed;
     currentmillis = millis();
     if(currentmillis-previousmillis >= interval){
       previousmillis = currentmillis;
       PORTD = leds[i];
       tone(buzz,2000,1);
       i = i + 1;
      }
     if(i == 8){
       i = 0;
     }
   }
   if(i != 0){
     i = i - 1;
   }else{
     i = 7;
   } 
   if(i == picked){
    win = true;
   }else{
    lose = true;
   }
   if(win == true || lose == true){
    playing = false; 
   }
  }
 if(win == true){
   milli1 = millis();
   PORTD = leds[i];
   tone(buzz,1000,1000);
   while(milli2 - milli1 != 1000){
     milli2 = millis();
    }
   tone(buzz,2200,100);
   PORTD = 0b11111111;
   milli1 = millis();
   while(milli2 - milli1 != 100){
     milli2 = millis();
   }
   PORTD = 0b00000000;
   counter  = counter + 1; 
 }
 if(lose == true){
   m3 = millis();
   PORTD = leds[i];
   tone(buzz,3000,500);
   while(m4 - m3 != 1000){
     m4 = millis();
   }
   tone(buzz,300,500);
   PORTD = 0b10101010;
   m3 = millis();
   while(m4 - m3 != 500){
     m4 = millis();
   }
   PORTD = 0b01010101;
   tone(buzz,3500,500);
   m3 = millis();
   while(m4 - m3 != 500){
     m4 = millis();
   }
   counter = counter + 1;
 }
  if(counter == 3){
    playing = true;
    win = false;
    lose = false;
  }
}