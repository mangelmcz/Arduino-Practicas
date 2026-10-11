// esta version sustituye ala anterior porque el led rgb con el que estoy trabajando es anodo comun

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


// pwm 0 = maximo brillo, pwm 255 = menor brillo(apagado), ocurre al revez que con el led rgb catodo comun, por eso uso 255
  analogWrite(LED_rojo, 255 - brillo_rojo);
  analogWrite(LED_verde, 255 - brillo_verde);
  analogWrite(LED_azul, 255 - brillo_azul);

  Serial.print("Rojo: ");
  Serial.print(brillo_rojo);

  Serial.print(" | Verde: ");
  Serial.print(brillo_verde);

  Serial.print(" | Azul: ");
  Serial.println(brillo_azul);

  delay(100);
}