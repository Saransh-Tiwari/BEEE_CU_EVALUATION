int trigPin1=8;
int trigPin2=6;
int echoPin1=10;
int echoPin2=7;
int led1=3;
int led2=5;
void setup()
{
  Serial.begin(9600);
  pinMode(trigPin1,OUTPUT);
  pinMode(trigPin2,OUTPUT);
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);
  pinMode(echoPin1,INPUT);
  pinMode(echoPin2,INPUT);
}

void loop()
{
  int i;
  long duration, distance;
  digitalWrite(trigPin1,HIGH);
  delayMicroseconds(1000);
  digitalWrite(trigPin1,LOW);
  duration= pulseIn(echoPin1,HIGH);
  distance=((duration/2)/29.1);
  Serial.print(distance);
  Serial.println("CM");
  delay(10);
  
  if (distance<=50)
  {
    for(i=0;i<=10;i++){
    digitalWrite(led1,HIGH);
    delay(10);
     digitalWrite(led1,LOW);
    delay(10);
      digitalWrite(led2,HIGH);
    delay(20);
     digitalWrite(led2,LOW);
    delay(20);
    }
   }   
  else(distance>50);{
    digitalWrite(led1,LOW);
    digitalWrite(led2,LOW);
  }
}