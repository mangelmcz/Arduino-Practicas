const int bocina = 4;
const int duracion = 500;

float DO = 261.626;
float RE = 293.665;
float MI = 329.628;
float FA = 344.228;
float SOL = 391.995;
float LA = 440;
float SI = 493.883;

float LA_SOSTENIDA = 880.00;
float FA_SOSTENIDA = 698.456;
float DO_SOSTENIDO = 523.251;
float RE_SOSTENIDO = 587.330; 
float SIB = 466.164;


void setup() {
  // put your setup code here, to run once:

  pinMode(bocina,OUTPUT);

}

void loop() {
  // put your main code here, to run repeatedly:

  tone(bocina, FA, duracion);
  delay(600);
  tone(bocina, SOL, duracion);
  delay(600);
  tone(bocina, LA, duracion);
  delay(600);
  tone(bocina, FA, duracion);
  delay(600);
  tone(bocina, FA, duracion);
  delay(600);
  tone(bocina, SOL, duracion);
  delay(600);
  tone(bocina, LA, duracion);
  delay(600);
  tone(bocina, FA, duracion);
  delay(600);

  tone(bocina, LA, duracion);
  delay(600);
  tone(bocina, SIB, duracion);
  delay(600);

  tone(bocina, DO_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, LA, duracion);
  delay(600);
  tone(bocina, SIB, duracion);
  delay(600);

  tone(bocina, DO_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, DO_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, RE_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, DO_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, SIB, duracion);
  delay(600);

  tone(bocina, LA, duracion);
  delay(600);

  tone(bocina, FA, duracion);
  delay(600);

  tone(bocina, DO_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, RE_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, DO_SOSTENIDO, duracion);
  delay(600);

  tone(bocina, SIB, duracion);
  delay(600);

  tone(bocina, LA, duracion);
  delay(600);

  tone(bocina, FA, duracion);
  delay(600);

  tone(bocina, FA, duracion);
  delay(600);

  tone(bocina, DO, duracion);
  delay(600);

  tone(bocina, FA, duracion);
  delay(600);

   tone(bocina, FA, duracion);
  delay(600);

  tone(bocina, DO, duracion);
  delay(600);

  tone(bocina, FA, duracion);
  delay(600);

}
