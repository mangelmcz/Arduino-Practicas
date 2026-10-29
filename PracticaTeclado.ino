
float DO = 261.626;
float RE = 293.665;
float MI = 329.628;
float FA = 349.228;
float SOL = 391.995;
float LA = 440.0;
float SI = 493.883;
float DO_SOSTENIDO = 523.251;
float RE_SOSTENIDO = 587.330;
float MI_SOSTENIDO = 659.255;

const int pinTeclado = A0;
const int pinBocina = 9;

// Margen para reducir activaciones por lecturas pequeñas o ruido
const int LECTURA_LIBRE = 100;

void setup() {
  Serial.begin(9600);
  pinMode(pinBocina, OUTPUT);
}

void loop() {
  int sw = analogRead(pinTeclado);

  Serial.println(sw);

  // Si no hay un boton presionado, apagar la bocina
  if (sw < LECTURA_LIBRE) {
    noTone(pinBocina);
  }

  // mi
  else if (sw >= 886 && sw <= 1023) {
    tone(pinBocina, MI);
  }

  // FA
  else if (sw >= 805 && sw <= 885) {
    tone(pinBocina, FA);
  }

  // SOL
  else if (sw >= 734 && sw <= 804) {
    tone(pinBocina, SOL);
  }

  // LA
  else if (sw >= 654 && sw <= 733) {
    tone(pinBocina, LA);
  }

  // SI
  else if (sw >= 561 && sw <= 653) {
    tone(pinBocina, SI);
  }

  // DO_SOSTENIDO
  else if (sw >= 461 && sw <= 560) {
    tone(pinBocina, DO_SOSTENIDO);
  }

  // RE_SOSTENIDO
  else if (sw >= 365 && sw <= 460) {
    tone(pinBocina, RE_SOSTENIDO);
  }

  // MI
  else if (sw >= 151 && sw <= 364) {
    tone(pinBocina, MI_SOSTENIDO);
  }

  // Lectura no reconocida: apagar la bocina
  else {
    noTone(pinBocina);
  }

  delay(10);
}
