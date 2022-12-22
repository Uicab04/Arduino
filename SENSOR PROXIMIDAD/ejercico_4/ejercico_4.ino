const int sensorPin = 9;
int led = 4;
int velocidad =100 ; //en milisegundos 

void setup() {
  Serial.begin(9600);   //iniciar puerto serie
  pinMode(sensorPin, INPUT);  //definir pin como entrada
  pinMode(led,OUTPUT) ;
}
 
void loop(){
  int value = 0;
  value = digitalRead(sensorPin );  //lectura digital de pin
 
  if (value == LOW) {
      Serial.println("TCRT5000L activado");  //zona oscura
      digitalWrite(led,HIGH);
      delay(velocidad);
      digitalWrite(led,LOW);
      delay(velocidad);
     
  }
  delay(1000);
}
