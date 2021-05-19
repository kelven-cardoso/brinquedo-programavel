
  //pinMode (8, INPUT);

  byte portas[6] = {6,12,13,3,4,7};
                         //6,12,13,3,4,7
  byte movimento [4][6] = {{1,0,1,1,0,1},  //FRENTE
                           {1,1,0,1,1,0},  //TRAS
                           {0,0,0,1,1,0},  //DIREITA
                           {1,1,0,0,0,0}};  //ESQUERDA


void setup(){

 
 
  pinMode(2, INPUT);
  pinMode(1, INPUT);
  pinMode(10, INPUT);
  pinMode(5, INPUT);
  pinMode(8, INPUT);

  for (int nP =0; nP <=5; nP++){
    pinMode(portas[nP], OUTPUT);
  }
//outro teste
 Serial.begin(9600);
}


void loop()
{

/*
for (int nD = 0; nD <=5; nD++){
  digitalWrite(portas[nD], movimento[0][nD]);
}*/

   if ((digitalRead(2) == HIGH || digitalRead(1) == HIGH) || (digitalRead(10) == HIGH || digitalRead(5) == HIGH)) {
        if (digitalRead(2) == HIGH) { //frente
           comando+="f";
              //frente();
           Serial.println(comando);
          delay(100);
       }
      if (digitalRead(1) == HIGH) {  //tras
            comando+="t";
           Serial.println(comando);
              delay(100);
          tras();
        }
        if (digitalRead(5) == HIGH) {   //esquerda
            comando+="e";
               Serial.println(comando);
          delay(100);
        }
        if (digitalRead(10) == HIGH) {   //direita
            comando+="d";
               Serial.println(comando);
          delay(100);
        }else{
          Serial.println(comando);
        }

     } //if
  if (digitalRead(8) == HIGH){
      for(int i=0;i=comando.length();i++){
          char c=comando[i];
        if (c=='f'){
        frente();
         
        }
        if (c=='e'){
        tras();
        }
  }
  }
} // loop
