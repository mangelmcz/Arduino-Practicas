float distancia(int muestras)
{
  long suma = 0;

  for (int i = 0; i < muestras; i++)
  {
    suma = suma + analogRead(A1);
  }

  float adc = suma / muestras;
  float distancia_cm = 29988 * pow(adc, -1.173);

  return distancia_cm;
}

void setup()
{
  Serial.begin(9600);
}

void loop()
{
  float D_cm = distancia(40);

  Serial.println(D_cm);

  delay(1000);
}