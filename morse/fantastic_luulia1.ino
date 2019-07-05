#include "Arduino.h"
void setup()
{
   Serial.begin(9600);
	pinMode(12,OUTPUT);
	
}

void morse_dot()
{
	digitalWrite(12,HIGH);
	delay(250);
	digitalWrite(12,LOW);
	delay(250);
}

void morse_dash()
{
	digitalWrite(12,HIGH);
	delay(1000);
	digitalWrite(12,LOW);
	delay(250);
}

void morse_c_space()
{
	digitalWrite(12,LOW);
	delay(750);
}

void morse_w_space()
{
	digitalWrite(12,LOW);
	delay(1000);
}

 


void loop() {
  String inString="";
  // put your main code here, to run repeatedly:
  while(Serial.available()>0){
    char inChar=Serial.read();
    {
    switch(inChar){
      case 'A':
      morse_dot();
      morse_dash();
      break;
       case 'B':
      morse_dash();
       morse_dot();
        morse_dot();
         morse_dot();
      break;
       case 'C':
     morse_dash();
      morse_dot();
      morse_dash();
      morse_dot();
      break;
       case 'D':
      morse_dash();
      morse_dot();
      morse_dot();
      break;
       case 'E':
      morse_dot();
      break;
       case 'F':
      morse_dot();
      morse_dot();
      morse_dash();
      morse_dot();
      break;
       case 'G':
        morse_dash();
         morse_dash();
      morse_dot();
      break;
       case 'H':
      morse_dot();
       morse_dot();
        morse_dot();
         morse_dot();
      break;
       case 'I':
      morse_dot();
      morse_dot();
      break;
       case 'J':
      morse_dot();
      morse_dash();
      morse_dash();
      morse_dash();
      break;
       case 'K':
       morse_dash();
      morse_dot();
      morse_dash();
      break;
       case 'L':
      morse_dot();
      morse_dash();
      morse_dot();
      morse_dot();
      break;
       case 'M':
      morse_dash();
      morse_dash();
      break;
       case 'N':
      morse_dash();
      morse_dot();
      break;
       case 'O':
      morse_dash();
      morse_dash();
      morse_dash();
      break;
       case 'P':
      morse_dot();
      morse_dash();
      morse_dash();
      morse_dot();
      break;
       case 'Q':
      morse_dash();
      morse_dash();
      morse_dot();
      morse_dash();
      break;
       case 'R':
      morse_dot();
      morse_dash();
       morse_dot();
      break;
       case 'S':
      morse_dot();
       morse_dot();
        morse_dot();
      break;
       case 'T':
      morse_dash();
      break;
       case 'U':
      morse_dot();
      morse_dot();
      morse_dash();
      break;
       case 'V':
      morse_dot();
morse_dot();
morse_dot();
morse_dash();

      break;
       case 'W':
     morse_dot();
morse_dash();
morse_dash();

      break;
       case 'X':
     morse_dash();
morse_dot();
morse_dot();
morse_dash();

      break;
       case 'Y':
     morse_dash();
morse_dot();
morse_dash();
morse_dash();

      break;
       case 'Z':
      morse_dash();
morse_dash();
morse_dot();
morse_dot();

      break;
      case ' ':
      morse_w_space();
      
      
    }
    morse_c_space();
    
      
    }
    inString+=(char)inChar;
    delay(10);
  }
  if(inString!="")
  {
    Serial.print("I received:");
    Serial.println(inString);
    
  }
}