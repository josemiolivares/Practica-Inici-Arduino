// Example 01 : LED intermitent
const int LED = 13; // LED connectat al
// pin  digital 13
void setup()
{
  pinMode(LED, OUTPUT);
  // configura el pin digital com a sortida
}
void loop()
{
  digitalWrite(LED, HIGH); // engega el LED
  delay(1000); // espera 1 segon (1000 milisegons)
  digitalWrite(LED, LOW); // apaga el LED
  delay(1000); // espera 1 segon
}
