void setup() {
  // put your setup code here, to run once:
 pinMode(3,OUTPUT);
 pinMode(4,OUTPUT);
 pinMode(5,OUTPUT);
 pinMode(6,OUTPUT);
 pinMode(7,OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
//excess 3
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,HIGH);


delay(600);
digitalWrite(3,HIGH); //1 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

digitalWrite(3,HIGH); //2 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

digitalWrite(3,HIGH); //3 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

digitalWrite(3,HIGH); //4 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

delay(6000);

/////////////////////////////////////////////////////////////////

//excess 2
digitalWrite(4,LOW);
digitalWrite(5,LOW);
digitalWrite(6,HIGH);
digitalWrite(7,LOW);


delay(600);
digitalWrite(3,HIGH); //1 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

digitalWrite(3,HIGH); //2 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

digitalWrite(3,HIGH); //3 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

digitalWrite(3,HIGH); //4 shift
delay(100);
digitalWrite(3,LOW);
delay(520);

delay(6000);

//By Rohit d h}
