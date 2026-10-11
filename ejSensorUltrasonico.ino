int TRIG = 8;
int ECHO = 9;
int DURACION;
int DISTANCIA;

void setup() {
  // put your setup code here, to run once:

  Serial.begin(9600);
  pinMode(TRIG, OUTPUT);
  pinMode(ECHO, INPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  digitalWrite(TRIG, HIGH);
  delay(10);
  digitalWrite(TRIG, LOW);
  DURACION=pulseIn(ECHO, HIGH);
  DISTANCIA=DURACION/58.2;
  Serial.print("DISTANCIA: ");
  Serial.print(DISTANCIA);
  Serial.println(" CM");
  delay(200);


}
