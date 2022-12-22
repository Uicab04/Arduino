const int led = 3;
const int pot = 0; //declarar el potenciometro

int brillo;
void setup() {
  pinMode(led, OUTPUT);
}

void loop(){
  brillo = analogRead(pot)/4;
  analogWrite(led, brillo);
  delay(50);
}
