
int sinalparaled = 8; 
int pinsensor = 7;   
int lectura;      
int estadoled = 0;   
   
void setup()  
{  
  pinMode(sinalparaled, OUTPUT); 
  pinMode(pinsensor, INPUT);  
}  
   
   
void loop()  
{  

  lectura = digitalRead(pinsensor);   
  if (lectura != 1)
  {  
    while(digitalRead(pinsensor) != 1)  
    {  
     delay(100);  
    }  

    estadoled = !estadoled; 
    digitalWrite(sinalparaled, estadoled); 
  }   
}  
