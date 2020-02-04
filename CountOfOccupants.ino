int a=5,b=6,c=7;
int m=5,n=0;
int i;
void setup() {
  // put your setup code here, to run once:
  pinMode(a,INPUT);
  pinMode(b,INPUT);
  pinMode(c,OUTPUT);
  Serial.begin(9600);

}

void loop() {
  // put your main code here, to run repeatedly:
  while(n<=m)
  {
    if(digitalRead(a==HIGH))
    {
      delay(1000);
      while(digitalRead(b==LOW))
      {
        n++;
        Serial.println("Number of people in the room at this moment: ");
        Serial.print(n);
        i=255/(m+1-n);
        analogWrite(c,i);
      }
    }
    if(digitalRead(b==HIGH))
    {
      delay(1000);
      while(digitalRead(a==LOW))
      {
        n--;
        Serial.println("Number of people in the room at this moment: ");
        Serial.print(n);
        i=255/(m+1-n);
        analogWrite(c,i);
      }
     }
  }
}
