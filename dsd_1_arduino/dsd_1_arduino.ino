void setup() {
  pinMode(3,OUTPUT);
  pinMode(4,OUTPUT);
  pinMode(5,OUTPUT);
  pinMode(6,OUTPUT);
  pinMode(7,OUTPUT);
  pinMode(8,OUTPUT);
  pinMode(9,OUTPUT);
  pinMode(10,OUTPUT);
  pinMode(11,OUTPUT);
  pinMode(12,OUTPUT);
  pinMode(13,OUTPUT);
  }

void loop() {
/////////////////////////////////////////1st DATA/////////////////////////////////////
//excess 3
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,HIGH);

//data A = 0 0 1 0
digitalWrite(7,LOW);
digitalWrite(8,LOW);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);

//two clock pulse for load
digitalWrite(11,HIGH); //mode 1
delay(100);

digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);

digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);

digitalWrite(11,LOW); //mode 0
delay(150);  //1 shifted

digitalWrite(12,HIGH); 
delay(500);
digitalWrite(12,LOW);
delay(120);  //2 shifted  

digitalWrite(12,HIGH); 
delay(500);
digitalWrite(12,LOW);
delay(120);  //3 shifted  


digitalWrite(12,HIGH); 
delay(500);
digitalWrite(12,LOW);
delay(120);  //4 shifted  

delay(520);

delay(6000);

////////////////////////////////////////2nd DATA///////////////////////////////////////
//excess 2
digitalWrite(3,LOW);
digitalWrite(4,LOW);
digitalWrite(5,HIGH);
digitalWrite(6,LOW);



//data B = 0 1 1 0
digitalWrite(7,LOW);
digitalWrite(8,HIGH);
digitalWrite(9,HIGH);
digitalWrite(10,LOW);

//two clock pulse for load
digitalWrite(11,HIGH); //mode 1
delay(100);

digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);

digitalWrite(12,HIGH);
delay(100);
digitalWrite(12,LOW);
delay(100);

digitalWrite(11,LOW); //mode 0
delay(150);  //1 shifted

digitalWrite(12,HIGH); 
delay(500);
digitalWrite(12,LOW);
delay(120);  //2 shifted  

digitalWrite(12,HIGH); 
delay(500);
digitalWrite(12,LOW);
delay(120);  //3 shifted  


digitalWrite(12,HIGH); 
delay(500);
digitalWrite(12,LOW);
delay(120);  //4 shifted  

delay(520);
delay(6000);


////By ROHIT D H}
