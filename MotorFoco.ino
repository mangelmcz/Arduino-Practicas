int ENA = 13;
int IN1 = 12;
int IN2 = 11;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);
  pinMode(4,OUTPUT);

}

void loop() {
  // Giro en un sentido
  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, HIGH);
  digitalWrite(IN2, LOW);
  delay(3000);

  // Detener el motor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);
  delay(1000);

  // Giro en el sentido contrario
  digitalWrite(ENA, HIGH);
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, HIGH);
  delay(3000);

  // Detener el motor
  digitalWrite(IN1, LOW);
  digitalWrite(IN2, LOW);

  delay(500);

  digitalWrite(4,HIGH);
  delay(3000);
  digitalWrite(4,LOW);
  delay(3000);
}