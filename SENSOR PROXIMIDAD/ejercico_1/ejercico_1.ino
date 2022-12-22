int led = 4;
int velocidad =100 ; //en milisegundos 

void setup () {
  pinMode(led,OUTPUT) ;
 
}
  void loop () {
    digitalWrite(led,HIGH);
    delay(velocidad);
    digitalWrite(led,LOW);
    delay(velocidad);
     
  } 
