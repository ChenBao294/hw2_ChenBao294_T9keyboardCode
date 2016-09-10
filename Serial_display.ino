#if defined(ARDUINO) 
SYSTEM_MODE(SEMI_AUTOMATIC); 
#endif
const int SwitchOn1=D8;
const int SwitchOn2=D9;
const int SwitchOn3=D10;
const int SwitchOn4=D11;
const int SwitchOn5=D12;
const int SwitchOn6=D13;
const int SwitchOn7=D14;
const int SwitchOn8=D15;
const int SwitchOn9=D16;
const int SwitchOn10=D17;
int counter=0;
int buttonState;
int lastButtonState = 0;
unsigned long debounceDelay=50;
unsigned long lastDebounceTime=0;
int buttonPushCounter = 0;

void setup() {
  // put your setup code here, to run once:
  //Initiate Serial Communication
  Serial.begin(9600);
  pinMode (SwitchOn1, INPUT);
   pinMode (SwitchOn2, INPUT);
    pinMode (SwitchOn3, INPUT);
     pinMode (SwitchOn4, INPUT);
      pinMode (SwitchOn5, INPUT);
       pinMode (SwitchOn6, INPUT);
        pinMode (SwitchOn7, INPUT);
         pinMode (SwitchOn8, INPUT);
          pinMode (SwitchOn9, INPUT);
           pinMode (SwitchOn10, INPUT);

}//close setup

void loop() {
  //Button1
  int reading1 = digitalRead(SwitchOn1); 
  if (reading1 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading1 != buttonState){
       buttonState= reading1;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading1;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" A");
          break;
       case 2:
          Serial.print(" B");
          break;
        case 3:
          Serial.print(" C");
          break;
         }
         counter=0;
    } 
    //Button2
    int reading2 = digitalRead(SwitchOn2); 
  if (reading2 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading2 != buttonState){
       buttonState= reading2;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading2;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" D");
          break;
       case 2:
          Serial.print(" E");
          break;
        case 3:
          Serial.print(" F");
          break;
         }
         counter=0;
    } 
    //Button 3
    int reading3 = digitalRead(SwitchOn3); 
  if (reading3 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading3 != buttonState){
       buttonState= reading3;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading3;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" G");
          break;
       case 2:
          Serial.print(" H");
          break;
        case 3:
          Serial.print(" I");
          break;
         }
         counter=0;
    }
    //Button4
    int reading4 = digitalRead(SwitchOn4); 
  if (reading4 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading4 != buttonState){
       buttonState= reading4;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading4;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" J");
          break;
       case 2:
          Serial.print(" K");
          break;
        case 3:
          Serial.print(" L");
          break;
         }
         counter=0;
    }  
    //Button 5
    int reading5 = digitalRead(SwitchOn5); 
  if (reading5 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading5 != buttonState){
       buttonState= reading5;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading5;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" M");
          break;
       case 2:
          Serial.print(" N");
          break;
        case 3:
          Serial.print(" O");
          break;
         }
         counter=0;
    } 
    //Button 6
    int reading6 = digitalRead(SwitchOn6); 
  if (reading6 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading6 != buttonState){
       buttonState= reading6;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading6;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" P");
          break;
       case 2:
          Serial.print(" Q");
          break;
        case 3:
          Serial.print(" R");
          break;
         }
         counter=0;
    } 
    //Button 7
    int reading7 = digitalRead(SwitchOn7); 
  if (reading7 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading7 != buttonState){
       buttonState= reading7;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading7;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" S");
          break;
       case 2:
          Serial.print(" T");
          break;
        case 3:
          Serial.print(" U");
          break;
         }
         counter=0;
    } 
    //Button 8
     int reading8 = digitalRead(SwitchOn8); 
  if (reading8 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading8 != buttonState){
       buttonState= reading8;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading8;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" V");
          break;
       case 2:
          Serial.print(" W");
          break;
        case 3:
          Serial.print(" X");
          break;
         }
         counter=0;
    } 

    //Button9
        int reading9 = digitalRead(SwitchOn9); 
  if (reading9 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading9 != buttonState){
       buttonState= reading9;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading9;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" Y");
          break;
       case 2:
          Serial.print(" Z");
          break;
         }
         counter=0;
    }
//Button 10
    int reading10 = digitalRead(SwitchOn10); 
  if (reading10 != lastButtonState){
  lastDebounceTime=millis();
  }
  if ((millis()-lastDebounceTime)>debounceDelay) {
    if (reading10 != buttonState){
       buttonState= reading10;
          if (buttonState== HIGH){
             counter=counter+1;
         }
       }
    }  
  lastButtonState=reading10;  
  if ((millis()-lastDebounceTime)>1000){
    switch(counter){
       case 1:
          Serial.print(" ");
          break;
       case 2:
          Serial.print("!");
          break;
        case 3:
          Serial.print(" ?");
          break;
         }
         counter=0;
    }
}
