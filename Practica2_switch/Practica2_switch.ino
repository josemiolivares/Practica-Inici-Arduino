// Example 02: Engega el LED si es prem l'interruptor
// Versió 2 amb wswtich com canviador d'estat
// Versió 3
const int LED = 7;
// número de pin per a conenctar el LED
const int BUTTON = 8; // el pin on es connecta el interruptor
int val = 0;
// val és la variable on emmagatzemem l'estat del interruptor
int bEstat = LOW;
int bEstatAnt = LOW;

void setup() { // funció per a inicialitzar els paràmetres
  pinMode(LED, OUTPUT);
  // Declara el pin 13 com a sortida
  pinMode(BUTTON, INPUT); // declara el pin 7 com a entrada
}

void loop() { // bucle que es repeteix una vegada inicialitzat
  val = digitalRead(BUTTON); // llegim el pin connectat a
  // l'interruptor per a veure si està pres. (Voltatge HIGH)
  // comprovem si el butó està pres
  if (val == HIGH && bEstatAnt == bEstat) { // en cas de que sí
	bEstat = !bEstat;
    digitalWrite(LED, bEstat); // engega o apaga
	delay(20); // per evitar el rissat
  }
  if (val == LOW) bEstatAnt= bEstat; // Per a poder apretar el buto el temps que vullguem
}
