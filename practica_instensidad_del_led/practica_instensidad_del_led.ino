const int ledRojo = 3;
const int ledVerde = 5;
const int ledAzul = 6;
const int potRojo = 0;
const int potVerde = 1;
const int potAzul = 2;

int rojo;
int verde;
int azul;

void setup() {
  pinMode(ledRojo, OUTPUT);
  pinMode(ledVerde, OUTPUT);
  pinMode(ledAzul, OUTPUT);

}

void loop() {
  rojo = analogRead(potRojo)/4;
  verde = analogRead(potVerde)/4;
  azul = analogRead(potAzul)/4;

 analogWrite(ledRojo, rojo);
 analogWrite(ledVerde, verde);
 analogWrite(ledAzul, azul);

 delay(300);  
}
