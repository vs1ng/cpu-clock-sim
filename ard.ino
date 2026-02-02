#include <Servo.h>

Servo serv;

void setup(){
    serv.attach(9);
    pinMode(8,OUTPUT); // upper LED
    pinMode(10,OUTPUT); // lower LED
    for(int i = 0 ; i != 8 ; i ++){
        pinMode(i,OUTPUT);
    }
}

void loop(){
   
    digitalWrite(1,HIGH);
    digitalWrite(2,HIGH);
    serv.write(0);
    digitalWrite(8,HIGH);
    
    delay(1000);
    digitalWrite(8,LOW);
    digitalWrite(1,LOW);
    digitalWrite(2,LOW);
    serv.write(180);
    for(int i = 0 ; i != 6 ; i++){
        digitalWrite(i,HIGH);
    }
    digitalWrite(6,LOW);
    digitalWrite(10,HIGH);
    delay(1000);
    for(int k = 0 ; k < 7 ; k++){
        digitalWrite(k,LOW);
    }
    digitalWrite(10,LOW);
}
