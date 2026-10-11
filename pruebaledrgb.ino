const int LED_rojo = 11;
const int LED_verde = 3;
const int LED_azul = 6;

void setup() {
  pinMode(LED_rojo, OUTPUT);
  pinMode(LED_verde, OUTPUT);
  pinMode(LED_azul, OUTPUT);
}

void loop() {
  // Rojo
  analogWrite(LED_rojo, 0);
  analogWrite(LED_verde, 255);
  analogWrite(LED_azul, 255);
  delay(2000);

  // Verde
  analogWrite(LED_rojo, 255);
  analogWrite(LED_verde, 0);
  analogWrite(LED_azul, 255);
  delay(2000);

  // Azul
  analogWrite(LED_rojo, 255);
  analogWrite(LED_verde, 255);
  analogWrite(LED_azul, 0);
  delay(2000);
}