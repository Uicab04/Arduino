const int Motor1A = 8;
const int sensorPin = 9;

void setup() {
  Serial.begin(9600);   // inicializacion de monitor serial//iniciar puerto serie

  pinMode(sensorPin, INPUT);  //definir pin como entrada/iniciar sensor
  pinMode(Motor1A,OUTPUT);
       //digitalWrite(Motor1A, LOW);
}

void loop() {
  int value = 0;
  value = digitalRead(sensorPin );  //lectura digital de pin
 
  if (value == LOW) {
      Serial.print("HayRayaBlanca: ");  // escritura en monitor serial de los valores
      Serial.println("TCRT5000L activado");  //zona clara
      digitalWrite(Motor1A, HIGH); // Encendemos el motor
      delay(1000);
  }
  delay(1000);

   if (value == HIGH) {
      Serial.print("HayRayaNegro: ");  // escritura en monitor serial de los valores
      Serial.println("TCRT5000L_DESACTIVADO");  //zona oscura
      digitalWrite(Motor1A, LOW); // Apagamos el motor
      delay(1000);
  }
  delay(1000);
}
