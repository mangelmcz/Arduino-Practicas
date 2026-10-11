
// Control de un LED RGB de catodo comun
// mediante 3 potenciometros

const int LED_rojo = 11;
const int LED_verde = 3;
const int LED_azul = 6;

const int pot_rojo = 0;
const int pot_verde = 1;
const int pot_azul = 2;

int brillo_rojo;
int brillo_verde;
int brillo_azul;

void setup() {
  Serial.begin(9600);

  pinMode(LED_rojo, OUTPUT);
  pinMode(LED_verde, OUTPUT);
  pinMode(LED_azul, OUTPUT);
}

void loop() {
  brillo_rojo = analogRead(pot_rojo) / 4;
  brillo_verde = analogRead(pot_verde) / 4;
  brillo_azul = analogRead(pot_azul) / 4;

  analogWrite(LED_rojo, brillo_rojo);
  analogWrite(LED_verde, brillo_verde);
  analogWrite(LED_azul, brillo_azul);

  Serial.print("Rojo: ");
  Serial.print(brillo_rojo);

  Serial.print(" | Verde: ");
  Serial.print(brillo_verde);

  Serial.print(" | Azul: ");
  Serial.println(brillo_azul);

  delay(100);
}

