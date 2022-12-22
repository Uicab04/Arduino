#define TCRT A0

int LED = 8;
int LED2 = 9;
//int IR = A0;
int valor;
void setup() {
  Serial.begin(9600);
   pinMode(LED,OUTPUT);
   pinMode(LED2,OUTPUT);
   pinMode(TCRT,INPUT);
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
    digitalWrite(LED2, LOW);
  }
  else
  {
    digitalWrite(LED, HIGH);
    digitalWrite(LED2, HIGH);  
  }
  delay(500);
  } 
