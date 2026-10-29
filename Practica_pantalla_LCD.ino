
#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// Crear el objeto LCD: direccion 0x27, 16 columnas y 2 filas
LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {
  // Inicializar la pantalla LCD
  lcd.init();

  // Encender la retroiluminacion
  lcd.backlight();

  // Escribir en la primera fila
  lcd.setCursor(6, 0);
  lcd.print("Hola, Arduino");

  // Escribir en la segunda fila
  lcd.setCursor(6, 1);
  lcd.print("Pantalla de 16x2 I2C");
}

void loop() {
  // No necesitamos repetir ninguna instruccion
}

