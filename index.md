## Codigo de meu TCC feito a partir de um arduino UNO

O codigo inicia atribunindo a entrada dos botões e motores

```
 //Motor
int in1=4; 
int in2=5;
int in3=6;
int in4=7;

//Botões
int buzzer=2; //buzer 
int frente=8;
int tras=3;
int esquerda=11;
int direita=12;
int para=13;
int comando=1;
```

Em seguida atribuindo as variaves para definir se é entrada ou saida

```
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
  pinMode(buzzer, OUTPUT); 
}
```
