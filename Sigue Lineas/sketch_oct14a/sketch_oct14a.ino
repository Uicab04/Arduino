/*
CARRITO SEGUIDOR DE LINEAS **
CLAUDIA
*/

int sensorPin1 = 0;
int sensorPin2 = 1;
int led1 = 1;
int led2 = 2;

int izqA = 5; 
int izqB = 6; 
int derA = 9; 
int derB = 10; 
int vel = 50; // Velocidad de los motores (0-255)
int anterior=0;

void setup() {
  pinMode(led1,OUTPUT);
  pinMode(led2,OUTPUT);

  pinMode(derA, OUTPUT);
  pinMode(derB, OUTPUT);
  pinMode(izqA, OUTPUT);
  pinMode(izqB, OUTPUT);
}

void loop() {
  digitalWrite(led1,LOW);
  digitalWrite(led2,LOW  );
  
  int sensorValue1=analogRead(sensorPin1);
  int sensorValue2=analogRead(sensorPin2);

  //CUANDO LOS DOS SENSORES DETECTAN LA LINEA
  if(sensorValue1>200 && sensorValue2>200){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,HIGH);
    
    //enceder motor 1
    analogWrite(izqA, vel);
    analogWrite(izqB, 0);
    //encender motor 2
    analogWrite(derA, vel);
    analogWrite(derB, 1);
    anterior=0;
  }
  //CUANDO LOS DOS SENSORES ESTAN FUERA DE LA LINEA
  if(sensorValue1<200 && sensorValue2<200){

    if(anterior==0){
      digitalWrite(led1,LOW);
      digitalWrite(led2,LOW);
      //detener motor 1
      analogWrite(izqA, 0);
      analogWrite(izqB, 0);
      //detener motor 2
      analogWrite(derA, 0);
      analogWrite(derB, 0);
    }
    if(anterior==1){
      //encender motor 1
      analogWrite(izqA, 0);
      analogWrite(izqB, 0);
      //detener motor 2
      analogWrite(derA, 17    0);
      analogWrite(derB, 0);
    }
    if(anterior==2){
      //motor 1
      analogWrite(izqA, 170);
      analogWrite(izqB, 0);
     //motor 2
      analogWrite(derA, 0);
      analogWrite(derB, 0);
    }
  }
  //CUANDO EL SENSOR 1 DETECTA Y EL SENSOR 2 NO DETECTA
  if(sensorValue1>200 && sensorValue2<200){
    digitalWrite(led1,HIGH);
    digitalWrite(led2,LOW);
    //ENCENDEMOS EL MOTOR CORRECTO
    //encender motor 1
    analogWrite(izqA, 0);
    analogWrite(izqB, 0);
    //detener motor 2
    analogWrite(derA, 170);
    analogWrite(derB, 0);
    anterior=1;
  }
  //CUADO EL SENSOR 1 NO DETECTA Y EL SENSOR 2 DETECTA
  if(sensorValue1<200 && sensorValue2>200){
    digitalWrite(led1,LOW);
    digitalWrite(led2,HIGH);
    //motor 1
    analogWrite(izqA, 170);
    analogWrite(izqB, 0);
    //motor 2
    analogWrite(derA, 0);
    analogWrite(derB, 0);
    anterior=2;
  }
}
