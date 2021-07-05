//Motor 1:
#define E1 10
#define I1 9
#define I2 8

//Motor 2:
#define E2 11
#define I3 12
#define I4 13

void setup() {
  
pinMode (E1,OUTPUT);
pinMode (I1,OUTPUT);
pinMode (I2,OUTPUT);
pinMode (E2,OUTPUT);
pinMode (I3,OUTPUT);
pinMode (I4,OUTPUT);
}

void loop() {
//Motor 1:
  
digitalWrite(I1,HIGH);
digitalWrite(I2,LOW);
analogWrite(E1,120);
  
//Motor 2:
  
digitalWrite(I3,HIGH);
digitalWrite(I4,LOW);
analogWrite(E2,120);


    
} 
