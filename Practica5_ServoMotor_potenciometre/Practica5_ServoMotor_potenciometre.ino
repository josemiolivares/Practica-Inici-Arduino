// Controlar un servo motor amb un potenciòmetre
#include <Servo.h> // incorporem la llibreria de funcions de servomotor
 
Servo myservo;  // creem un objecte Servo per a manipular el motor
 
int potpin = A0;  // entrada analògica per llegir el potenciòmetre
int val;    // variable per a emmagatzemar el valor de la entrada analògica
 
void setup() // inicialització del muntatge
{
  myservo.attach(9);  // A l'objecte Servo li adjudiquem la entrada
// de control al pin 9 del Arduino
}
 
void loop() // bucle a repetir
{
  val = analogRead(potpin);  // llig el senyal del potenciòmetre
// entre 0 i 1023
  val = map(val, 0, 1023, 0, 179);     // Obtenim el valor corresponent //proporcional a la entrada A0
  myservo.write(val);                  //Establim la posició del servo
  delay(15);                           // Esperem 15 ms
}
