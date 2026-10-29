
const int pinTeclado = A0;
const int pinBocina = 9;

void setup() {
  Serial.begin(9600);
}

void loop() {
  int valor = analogRead(pinTeclado);

  Serial.println(valor);

  if (valor > 885) {
    tone(pinBocina, 262);  // Do4
  }
  else if (valor > 804) {
    tone(pinBocina, 294);  // Re4
  }
  else if (valor > 733) {
    tone(pinBocina, 330);  // Mi4
  }
  else if (valor > 653) {
    tone(pinBocina, 349);  // Fa4
  }
  else if (valor > 560) {
    tone(pinBocina, 392);  // Sol4
  }
  else if (valor > 460) {
    tone(pinBocina, 440);  // La4
  }
  else if (valor > 364) {
    tone(pinBocina, 494);  // Si4
  }
  else if (valor > 150) {
    tone(pinBocina, 523);  // Do5
  }
  else {
    noTone(pinBocina);
  }

  delay(10);
}

