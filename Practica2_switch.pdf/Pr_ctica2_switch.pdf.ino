// Example 02: Engega el LED si es prem l'interruptor
const int LED = 13;
// número de pin per a conenctar el LED
const int BUTTON = 7; // el pin on es connecta el interruptor
int val = 0;
// val és la variable on emmagatzemem l'estat del interruptor

void setup() { // funció per a inicialitzar els paràmetres
  pinMode(LED, OUTPUT);
  // Declara el pin 13 com a sortida
  pinMode(BUTTON, INPUT); // declara el pin 7 com a entrada
}

void loop() { // bucle que es repeteix una vegada inicialitzat
  val = digitalRead(BUTTON); // llegim el pin connectat a
  // l'interruptor per a veure si està pres. (Voltatge HIGH)
  // comprovem si el butó està pres
  if (val == HIGH) { // en cas de que sí
    digitalWrite(LED, HIGH); // engega el LED
  } else {
    digitalWrite(LED, LOW); // apaga el LED
  }
}
