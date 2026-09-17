int sensor = 0;
void setup() {
  // en esta parte va la configuracion

  pinMode(5, INPUT);
  pinMode(6, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(8, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(10, OUTPUT);
  pinMode(11, OUTPUT);
  pinMode(12, OUTPUT);
  pinMode(13, OUTPUT);
}

void loop() {

  sensor = digitalRead(5);

  if(sensor == 0){

    // ===== SECUENCIA 1 =====
  // Un LED a la vez

  digitalWrite(6, HIGH); // Enciende el led 
  delay(300);            // retardo, dura 1 segundo prendido 1000 ms= 1s
  digitalWrite(6, LOW);   // Apaga el led

  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(7, LOW);

  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);

  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);

  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);

  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(11, LOW);

  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);

  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);

  delay(300); // pequeño delay diferenciador

  }else{
    // ===== SECUENCIA 2 =====
  // Un LED a la vez pero ahora al reves
  digitalWrite(13, HIGH);
  delay(300);
  digitalWrite(13, LOW);

  digitalWrite(12, HIGH);
  delay(300);
  digitalWrite(12, LOW);

  digitalWrite(11, HIGH);
  delay(300);
  digitalWrite(11, LOW);

  digitalWrite(10, HIGH);
  delay(300);
  digitalWrite(10, LOW);

  digitalWrite(9, HIGH);
  delay(300);
  digitalWrite(9, LOW);

  digitalWrite(8, HIGH);
  delay(300);
  digitalWrite(8, LOW);

  digitalWrite(7, HIGH);
  delay(300);
  digitalWrite(7, LOW);

  digitalWrite(6, HIGH); 
  delay(300);            
  digitalWrite(6, LOW);   

  delay(300); // pequeño delay diferenciador
  
  }

}

