#define XLR_1_OUT   2
#define XLR_2_OUT   3 
#define XLR_3_OUT   4

#define XLR_1_IN    5
#define XLR_2_IN    6
#define XLR_3_IN    7

#define LED_1       8
#define LED_2       9
#define LED_3       10

int STATE_1_IN = 0;
int STATE_2_IN = 0;
int STATE_3_IN = 0;

void selftest(){  
  digitalWrite(LED_1, 1);
  digitalWrite(LED_2, 1);
  digitalWrite(LED_3, 1);
  delay(500);
  digitalWrite(LED_1, 0);
  digitalWrite(LED_2, 0);
  digitalWrite(LED_3, 0);
  delay(100);
  digitalWrite(LED_1, 1);
  digitalWrite(LED_2, 1);
  digitalWrite(LED_3, 1);
  delay(100);
  digitalWrite(LED_1, 0);
  digitalWrite(LED_2, 0);
  digitalWrite(LED_3, 0);
  delay(100);
  digitalWrite(LED_1, 1);
  digitalWrite(LED_2, 1);
  digitalWrite(LED_3, 1);
  delay(100);
  
  digitalWrite(LED_1, 0);
  digitalWrite(LED_2, 0);
  digitalWrite(LED_3, 0);


  delay(1000);
}
  
void check()
{
   if(STATE_1_IN == HIGH)
  {
    digitalWrite(LED_1, HIGH);
  } 
  if(STATE_1_IN == LOW)
  {
    digitalWrite(LED_1, LOW);
  }
   if(STATE_2_IN == HIGH)
  {
    digitalWrite(LED_2, HIGH);
  } 
  if(STATE_2_IN == LOW)
  {
    digitalWrite(LED_2, LOW);
  }

   if(STATE_3_IN == HIGH)
  {
    digitalWrite(LED_3, HIGH);
  } 
  if(STATE_3_IN == LOW)
  {
    digitalWrite(LED_3, LOW);
  } 
}
void setup() {

  pinMode(XLR_1_IN,INPUT);
  pinMode(XLR_2_IN,INPUT);
  pinMode(XLR_3_IN,INPUT);
  pinMode(XLR_1_OUT,OUTPUT);
  pinMode(XLR_2_OUT,OUTPUT);  
  pinMode(XLR_3_OUT,OUTPUT) ; 
  pinMode(LED_1,OUTPUT);
  pinMode(LED_2,OUTPUT);
  pinMode(LED_3,OUTPUT);

  selftest();
}



void loop() {


digitalWrite(XLR_1_OUT, HIGH);
STATE_1_IN = digitalRead(XLR_1_IN);
check();
delay(1000);

digitalWrite(XLR_1_OUT, LOW);
STATE_1_IN = digitalRead(XLR_1_IN);
check();
delay(1000);

digitalWrite(XLR_2_OUT, HIGH);
STATE_2_IN = digitalRead(XLR_2_IN);
check();
delay(1000);

digitalWrite(XLR_2_OUT, LOW);
STATE_2_IN = digitalRead(XLR_2_IN);
check();
delay(1000);

digitalWrite(XLR_3_OUT, HIGH);
STATE_3_IN = digitalRead(XLR_3_IN);
check();
delay(1000);

digitalWrite(XLR_3_OUT, LOW);
STATE_3_IN = digitalRead(XLR_3_IN);
check();
delay(1000);
}
