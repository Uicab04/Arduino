#define TCRT A0

int LED = 8;

//int IR = A0;
int valor;
void setup() {
  Serial.begin(9600);
   pinMode(LED,OUTPUT);
   pinMode(TCRT,INPUT);
   pinMode(3, OUTPUT);
   pinMode(5, OUTPUT);
   pinMode(6, OUTPUT);
   pinMode(9, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(TCRT);
  Serial.print("valor:");
   Serial.print(valor);
    Serial.print(" | color:");

  if(valor<800) 
  {
    digitalWrite(LED, LOW);
    analogWrite(3,100);
    analogWrite(6,100);
    delay(2000);
    analogWrite(3,0);
    analogWrite(6,0);
    delay(500);
    analogWrite(5,200);
    analogWrite(9,200);
    delay(2000);
    analogWrite(5,0);
    analogWrite(9,0);
    delay(500);
  
  }
  else
  {
    digitalWrite(LED, HIGH);
    analogWrite(3,0);
    analogWrite(5,0);
    analogWrite(6,0);    analogWrite(5,0);
    analogWrite(9,0);
    delay(500);
  }
  
  } 
