int ENA = 3;
int IN1 = 12;
int IN2 = 11;
int velocidad;

void setup() {
  pinMode(ENA, OUTPUT);
  pinMode(IN1, OUTPUT);
  pinMode(IN2, OUTPUT);

}

void loop() {
  for (velocidad = 0; velocidad <256; velocidad++){
    analogWrite(ENA,velocidad);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(15);

  }
    for (velocidad = 255; velocidad >=0; velocidad--){
    analogWrite(ENA,velocidad);
    digitalWrite(IN1, HIGH);
    digitalWrite(IN2, LOW);
    delay(15);

  }

}