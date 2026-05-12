int LightPin = 3; // selecciona el pin d'entrada per
// al sensor de llum
int ledPin = 13; // selecciona el pin per al LED
int val = 0; // variable per a emmagatzemar el valor
//capturat pel sensor de llum
int llindar = 512; // variable per a emmagatzemar el valor
// de llindar de llum detectada a partir del qual
// s'encendrà el LED

void setup() {
  pinMode(ledPin, OUTPUT); // declara el ledPin en mode //sortida
}
void loop() {
  val = analogRead(LightPin); //llegim el valor del
  // sensor
  if (val > llindar)
  {
    digitalWrite(ledPin, HIGH); // si el valor
    // mesurat està per sobre del llindar,encen el LED
  }
  else
  {
    digitalWrite(ledPin, LOW); // si el valor mesurat
    // està per sota del llindar, apaga el LED
  }
}
