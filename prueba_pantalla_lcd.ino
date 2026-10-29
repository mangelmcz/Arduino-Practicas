#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Crear el objeto LCD: direccion 0x27, 16 columnas y 2 filas
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Inicializar la pantalla LCD
  lcd.init();

  // Encender la retroiluminacion
  lcd.backlight();
}

void loop() {
  lcd.setCursor(0,0); // inicia en la columna 0 y renglon 0
  lcd.print("  Feliz Navidad");
  delay(250);
  lcd.setCursor(0,1);
  lcd.print("  Les desea la fam. Reyes Cruz");
  lcd.scrollDisplayLeft();  
}


