const int led = 11;
const int pot = 0;   // potenciometro
int brillo;


void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(led,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  brillo = analogRead(pot) / 4;
  analogWrite(led, brillo);

  Serial.print("led: ");
  Serial.println(brillo);
  delay(100);

}
