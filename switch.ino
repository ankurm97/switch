#define LED 8
#define SWITCH 7
void setup() {
pinMode(LED,OUTPUT);
pinMode(SWITCH,INPUT);
}

void loop() {  
int value;
value = digitalRead(SWITCH);
if (value==1)
{
digitalWrite(LED,HIGH);
}
if (value==0)
{
  digitalWrite(LED,LOW);
}
}
