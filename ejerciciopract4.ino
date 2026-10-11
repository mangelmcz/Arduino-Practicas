float valorADC;       // valor del convertidor analogico digiatl
float milivolts;      // milivolts
int tempC;            // temperatura en grados celsius
int LM35=0;


void setup(){
  Serial.begin(9600);
}


void loop(){
valorADC = analogRead(LM35);
milivolts = ((valorADC*5000)/1023);
tempC=milivolts/10;


Serial.print("milivolts: ");
Serial.print(milivolts);
Serial.print("     Temperatura:  ");
Serial.println(tempC);

delay(100);
}