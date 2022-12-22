int estado = 0;

void setup() {
  pinMode(8, INPUT);
  pinMode(4, OUTPUT);
}

void loop() {
  estado = digitalRead(8);
  if(estado == HIGH) {
    digitalWrite(4,HIGH);
  }
  else{
    digitalWrite(4,LOW);
  }
}
