#include <Wire.h>
#include <LiquidCrystal_I2C.h>
#include <DHT.h>

#define DHTPIN 2
#define DHTTYPE DHT22
#define BUZZER 8

DHT dht(DHTPIN, DHTTYPE);

LiquidCrystal_I2C lcd(0x27, 16, 2);

void setup() {

  lcd.init();
  lcd.backlight();

  dht.begin();

  pinMode(BUZZER, OUTPUT);

  lcd.setCursor(0, 0);
  lcd.print("Iniciando...");

  delay(2000);
}

void loop() {

  float temperatura = dht.readTemperature();
  float umidade = dht.readHumidity();

  lcd.clear();

  lcd.setCursor(0, 0);
  lcd.print("Temp:");
  lcd.print(temperatura);
  lcd.print("C");

  lcd.setCursor(0, 1);
  lcd.print("Umid:");
  lcd.print(umidade);
  lcd.print("%");

  // ALERTAS
  if (temperatura > 30 || umidade < 40) {

    tone(BUZZER, 1000);

    lcd.clear();

    if (temperatura > 30) {
      lcd.setCursor(0, 0);
      lcd.print("ALERTA CALOR!");
    }

    if (umidade < 40) {
      lcd.setCursor(0, 1);
      lcd.print("BAIXA UMIDADE");
    }

  } else {

    noTone(BUZZER);

  }

  delay(2000);
}