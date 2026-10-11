float valorADC;
float milivolts;
int tempC;

int LM35 = 0;

// LEDs
const int LED_rojo = 11;
const int LED_verde = 3;
const int LED_amarillo = 6;

void setup() {
  Serial.begin(9600);

  pinMode(LED_rojo, OUTPUT);
  pinMode(LED_verde, OUTPUT);
  pinMode(LED_amarillo, OUTPUT);
}

void loop() {

  // Leer LM35
  valorADC = analogRead(LM35);

  // Convertir lectura ADC a milivolts
  milivolts = (valorADC * 5000) / 1023;

  // Convertir milivolts a grados Celsius
  tempC = milivolts / 10;

  // Mostrar datos
  Serial.print("Milivolts: ");
  Serial.print(milivolts);

  Serial.print("     Temperatura: ");
  Serial.println(tempC);

  // Apagar todos los LEDs
  digitalWrite(LED_rojo, LOW);
  digitalWrite(LED_verde, LOW);
  digitalWrite(LED_amarillo, LOW);

  // Control de temperatura
  if (tempC < 40) {
    digitalWrite(LED_rojo, HIGH);
  }
  else if (tempC < 50) {
    digitalWrite(LED_verde, HIGH);
  }
  else if (tempC < 60) {
    digitalWrite(LED_amarillo, HIGH);
  }
  else {
    digitalWrite(LED_rojo, HIGH);
    digitalWrite(LED_verde, HIGH);
    digitalWrite(LED_amarillo, HIGH);
  }

  delay(500);
}
