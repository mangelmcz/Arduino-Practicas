// variables de las columnas
const int columna1 = 2; 
const int columna2 = 3;
const int columna3 = 4;
const int columna4 = 5;
const int columna5 = 6;
const int columna6 = 7;
const int columna7 = 8;
const int columna8 = 9;
const int columna9 = 10;

// variables de los pisos

const int piso1 = 11;
const int piso2 = 12;
const int piso3 = 13;

// vairables del sensor ultrasonico
const int trig = A0;
const int echo = A1;

int duracion;
int distancia;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600); // Monitor serial

  // Configuracion de salidas para las columas
  pinMode(columna1, OUTPUT);
  pinMode(columna2, OUTPUT);
  pinMode(columna3, OUTPUT);
  pinMode(columna4, OUTPUT);
  pinMode(columna5, OUTPUT);
  pinMode(columna6, OUTPUT);
  pinMode(columna7, OUTPUT);
  pinMode(columna8, OUTPUT);
  pinMode(columna9, OUTPUT);

  //Configuracion de salidas para los pisos
  pinMode(piso1, OUTPUT);
  pinMode(piso2, OUTPUT);
  pinMode(piso3, OUTPUT);

  //configuracion de entrada y salida para el sensor ultrasonico
  pinMode(trig, OUTPUT);
  pinMode(echo, INPUT);

} 
void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(trig, HIGH);
  delay(10);
  digitalWrite(trig, LOW);
  duracion=pulseIn(echo, HIGH);
  distancia=duracion/58.2;
  Serial.print("DISTANCIA: ");
  Serial.print(distancia);
  Serial.println(" CM");
  delay(200);

  if(distancia > 18 && distancia <= 22){
    // SECUENCIA 1 para 20cm: Va ir iluminando de 3 en 3 el piso 1, a partir de la columna 1 y la distribucion del resto de las columnas

    // Aseguro el apagado de los pisos que no corresponden a la secuencia:
    digitalWrite(piso1, LOW);
    digitalWrite(piso2, LOW);
    digitalWrite(piso3, LOW);

    digitalWrite(piso1, HIGH); // enciendo el piso correspondiente

    digitalWrite(columna1, HIGH);
    digitalWrite(columna2, HIGH);
    digitalWrite(columna3, HIGH);
    delay(100);
    digitalWrite(columna1, LOW);
    digitalWrite(columna2, LOW);
    digitalWrite(columna3, LOW);
    delay(100);
    digitalWrite(columna3, HIGH);
    digitalWrite(columna6, HIGH);
    digitalWrite(columna9, HIGH);
    delay(100);
    digitalWrite(columna3, LOW);
    digitalWrite(columna6, LOW);
    digitalWrite(columna9, LOW);
    delay(100);
    digitalWrite(columna9, HIGH);
    digitalWrite(columna8, HIGH);
    digitalWrite(columna7, HIGH);
    delay(100);
    digitalWrite(columna9, LOW);
    digitalWrite(columna8, LOW);
    digitalWrite(columna7, LOW);
    delay(100);
    digitalWrite(columna4, HIGH);
    digitalWrite(columna5, HIGH);
    digitalWrite(columna6, HIGH);
    delay(100);
    digitalWrite(columna4, LOW);
    digitalWrite(columna5, LOW);
    digitalWrite(columna6, LOW);
    delay(100);
  }
  else if (distancia > 28 && distancia <= 32) {
    // SECUENCIA 2 para 30cm: Va ur iluminando de 2 en 2 a partir de la columna 1 en adelante

    // Aseguro el apagado de los pisos que no corresponden a la secuencia:
    digitalWrite(piso1, LOW);
    digitalWrite(piso2, LOW);
    digitalWrite(piso3, LOW);

    digitalWrite(piso2, HIGH); // enciendo el piso correspondiente

    digitalWrite(columna1, HIGH);
    digitalWrite(columna2, HIGH);
    delay(100);
    digitalWrite(columna1, LOW);
    digitalWrite(columna2, LOW);
    delay(100);
    digitalWrite(columna2, HIGH);
    digitalWrite(columna3, HIGH);
    delay(100);
    digitalWrite(columna2, LOW);
    digitalWrite(columna3, LOW);
    delay(100);
    digitalWrite(columna3, HIGH);
    digitalWrite(columna6, HIGH);
    delay(100);
    digitalWrite(columna3, LOW);
    digitalWrite(columna6, LOW);
    delay(100);
    digitalWrite(columna6, HIGH);
    digitalWrite(columna9, HIGH);
    delay(100);
    digitalWrite(columna6, LOW);
    digitalWrite(columna9, LOW);
    delay(100);
    digitalWrite(columna9, HIGH);
    digitalWrite(columna8, HIGH);
    delay(100);
    digitalWrite(columna9, LOW);
    digitalWrite(columna8, LOW);
    delay(100);
    digitalWrite(columna8, HIGH);
    digitalWrite(columna7, HIGH);
    delay(100);
    digitalWrite(columna8, LOW);
    digitalWrite(columna7, LOW);
    delay(100);
    digitalWrite(columna7, HIGH);
    digitalWrite(columna4, HIGH);
    delay(100);
    digitalWrite(columna7, LOW);
    digitalWrite(columna4, LOW);
    delay(100);
    digitalWrite(columna4, HIGH);
    digitalWrite(columna5, HIGH);
    delay(100);
    digitalWrite(columna4, LOW);
    digitalWrite(columna5, LOW);
    delay(100);
  }
  else if (distancia > 38 && distancia <= 42) {
    //SECUENCIA 3, para 40 cm: Va ir encendiendo de 3 en 3 a partir de la columna 7

    // Aseguro el apagado de los pisos que no corresponden a la secuencia:
    digitalWrite(piso1, LOW);
    digitalWrite(piso2, LOW);
    digitalWrite(piso3, LOW);

    digitalWrite(piso3, HIGH); // enciendo el piso correspondiente

    digitalWrite(columna7, HIGH);
    digitalWrite(columna8, HIGH);
    digitalWrite(columna9, HIGH);
    delay(100);
    digitalWrite(columna7, LOW);
    digitalWrite(columna8, LOW);
    digitalWrite(columna9, LOW);
    delay(100);
    digitalWrite(columna6, HIGH);
    digitalWrite(columna5, HIGH);
    digitalWrite(columna4, HIGH);
    delay(100);
    digitalWrite(columna6, LOW);
    digitalWrite(columna5, LOW);
    digitalWrite(columna4, LOW);
    delay(100);
    digitalWrite(columna3, HIGH);
    digitalWrite(columna2, HIGH);
    digitalWrite(columna1, HIGH);
    delay(100);
    digitalWrite(columna3, LOW);
    digitalWrite(columna2, LOW);
    digitalWrite(columna1, LOW);
    delay(100);
  }
  else {
    // Todos los pios y columnas apagados
    digitalWrite(piso1, LOW);
    digitalWrite(piso2, LOW);
    digitalWrite(piso3, LOW);

    digitalWrite(columna1, LOW);
    digitalWrite(columna2, LOW);
    digitalWrite(columna3, LOW);
    digitalWrite(columna4, LOW);
    digitalWrite(columna5, LOW);
    digitalWrite(columna6, LOW);
    digitalWrite(columna7, LOW);
    digitalWrite(columna8, LOW);
    digitalWrite(columna9, LOW);

    delay(100);
  }
}