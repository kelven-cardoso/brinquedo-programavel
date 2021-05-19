#include <SoftwareSerial.h>
SoftwareSerial bt(10,9); // rx and tx

int in1=4;
int in2=5                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                                           ;
int in3=6;
int in4=7;

int frente=8;
int tras=2;
int esquerda=A5;
int direita=11;
int para=13;
int comando=A4;
String acumula="";
void setup() {
  Serial.begin(9600);
  bt.begin(9600);
  pinMode(in1,OUTPUT);
  pinMode(in2,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(in3,OUTPUT);
  pinMode(frente,INPUT_PULLUP);
  pinMode(tras,INPUT_PULLUP);
  pinMode(esquerda,INPUT_PULLUP);
  pinMode(direita,INPUT_PULLUP);
  pinMode(para,INPUT_PULLUP);
  pinMode(comando,INPUT_PULLUP);
  
}

void loop() {
  //if(bt.available()){
    //char c=bt.read();
    if(digitalRead(frente)==LOW){
      delay(200);
      if(digitalRead(frente)==LOW){
      acumula+='f';
      Serial.println(acumula);
      
    }
    
}
    if (digitalRead(tras)==LOW){
      delay(200);
      if(digitalRead(tras)==LOW){
      acumula+='t';
      Serial.println(acumula);
    }
}
     
    if(digitalRead(esquerda)==LOW){
      delay(200);
      if(digitalRead(esquerda)==LOW){
      acumula+='e';
      Serial.println(acumula);
    }
}
    if(digitalRead(para)==LOW){
      delay(200);
      if(digitalRead(para)==LOW){
      acumula+='p';
      Serial.println(acumula);
    }
}
    if(digitalRead(direita)==LOW){
      delay(200);
      if(digitalRead(direita)==LOW){
      acumula+='d';
      Serial.println(acumula);
    }
}
    
if(digitalRead(comando)==LOW){
    delay(200);
    Serial.println("start");
     if(digitalRead(comando)==LOW){
           Serial.println("entrou no laço");
      for(int i=0;i<acumula.length();i++){
        char c= acumula[i];
         if(c=='e'){
      digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
      
      delay(1200);
       digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
      
    }
     if(c=='d'){
      digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
     
       delay(1200);
       digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
      
    }
     if(c=='f'){
        digitalWrite(in1,0);
  digitalWrite(in2,1);
  digitalWrite(in3,1);
  digitalWrite(in4,0);
     
       delay(1200);
       digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
      
    }
     if(c=='t'){
        digitalWrite(in1,1);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,1);
       
      delay(1200);
       digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
      
    }
     if(c=='p'){
      digitalWrite(in1,0);
  digitalWrite(in2,0);
  digitalWrite(in3,0);
  digitalWrite(in4,0);
      
      
    }
      }
      acumula="";
     }
  }
      
    }
  
