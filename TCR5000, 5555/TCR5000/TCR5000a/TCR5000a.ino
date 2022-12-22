#define TCRT A0

int LED = 8;

//int IR = A0;
int valor;
int a = 3;
int b = 5;
int c = 6;
int d = 9;

int pote = 0;
int valorpote; //variable que recoge el valor del potenciometro
int pwm1; //Variable del PWM 1
int pwm2; //Variable del PWM 2

void setup() {
  Serial.begin(9600);
   pinMode(LED,OUTPUT);
   pinMode(TCRT,INPUT);
   pinMode(a, OUTPUT);
   pinMode(b, OUTPUT);
   pinMode(c, OUTPUT);
   pinMode(d, OUTPUT);
}

void loop() {
  // put your main code here, to run repeatedly:
  valor = analogRead(TCRT);
  valorpote = analogRead(pote);
  pwm1 = map(valorpote, 0, 1023, 0, 255);
  pwm2 = map(valorpote, 0, 1023, 255, 0);

  
  Serial.print("valor:");
   Serial.print(valor);
    Serial.print(" | color:");

  if(valor<800) 
  {
    digitalWrite(LED, LOW);

    analogWrite(a, pwm1);
    analogWrite(b, pwm2);
    analogWrite(c, pwm1);
    analogWrite(d, pwm2);
    

  }
  else
  {
    digitalWrite(LED, HIGH);

    analogWrite(a,0);
    analogWrite(b,0);
    analogWrite(c,0);
    analogWrite(d,0);
    
  }
  delay(500);
  
    }
