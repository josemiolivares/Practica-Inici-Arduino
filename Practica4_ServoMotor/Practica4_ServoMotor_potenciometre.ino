// Exemple de domini públic. Servomotor amb potenciòmetre
#include <Servo.h> //incorpora les llibreries de funcions de servo
Servo myservo;  // crea un objecte Servo
 
int pos = 0;    // variable que emmagatzema la posició
// del servomotor
 
void setup() //inicialitzem els paràmetres
{
  myservo.attach(9);  // adjuntem el pin 9 al control del servo
}
 
void loop() //bucle que es repeteix sempre una vegada inicialitzat
{
  for(pos = 0; pos < 180; pos += 1)//Va de 0 a 180 graus(variable pos)
  {                                  // en passos d'un grau
    myservo.write(pos); // comunica al servo la posició
// amb la variable pos
    delay(15);                       // Espera 15 ms per a continuar
  }
  for(pos = 180; pos>=1; pos-=1)    //Va de 180 a 0 graus decrementant
  {                                
    myservo.write(pos);              // comunica al servo la posició
//amb la variable 'pos'
    delay(15);                       // espera 15 ms
  }
}
