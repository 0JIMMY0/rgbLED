int BLUE=3;
int GREEN=5;
int RED=7;
int COLOR=1;
void setup() {
  // put your setup code here, to run once:
pinMode(RED,OUTPUT);
pinMode(BLUE,OUTPUT);
pinMode(GREEN,OUTPUT);
digitalWrite(RED,HIGH);
digitalWrite(BLUE,LOW);
digitalWrite(GREEN,LOW);


}

void loop() {
  // put your main code here, to run repeatedly:
for(int i=1; i<150 ; i++)
 {
  analogWrite(BLUE, i);
  delay(COLOR);
  }
      for(int i=255; i>0 ; i--)
 {
  analogWrite(RED, i);
  delay(COLOR);
  }
   for(int i=1; i<255 ; i++)
 {
  analogWrite(GREEN, i);
  delay(COLOR);
  }
  
  for(int i=255; i>0 ; i--)
 {
  analogWrite(BLUE, i);
  delay(COLOR);
  }
      for(int i=1; i<255 ; i++)
 {
  analogWrite(RED, i);
  delay(COLOR);
  }

  for(int i=255; i>0 ; i--)
 {
  analogWrite(GREEN, i);
  delay(COLOR);
  }

}
