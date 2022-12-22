const int potPin = 0;
int potLectura = 0;

const int ledPin = 3;
int ledSalida = 0;

void setup()
{
  analogReference(DEFAULT);
  Serial.begin(9600);
  pinMode(ledPin, OUTPUT);
}

void loop()
{
  potLectura = analogRead(potPin);
  ledSalida = map(potLectura, 0, 1023, 0, 255);
  analogWrite(ledPin, ledSalida);
  Serial.print("Valor de lectura (ADC): ");
  Serial.print(potLectura);
  Serial.println(" Valor de salida (PWM): ");
  Serial.println(ledSalida);
  delay(500);
}
