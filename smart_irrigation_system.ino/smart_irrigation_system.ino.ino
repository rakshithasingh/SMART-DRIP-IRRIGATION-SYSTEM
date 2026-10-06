#include <Wire.h>
#include <LiquidCrystal_I2C.h>

// LCD: I2C address 0x27, 20 columns, 4 rows
LiquidCrystal_I2C lcd(0x27, 20, 4);

// Pin connections
const int moisturePin = A0;
const int relayPin = 7;

// Adjust this value after testing your sensor
const int threshold = 500;

void setup()
{
  // Relay
  pinMode(relayPin, OUTPUT);

  // Start with pump OFF
  digitalWrite(relayPin, LOW);

  // Serial Monitor
  Serial.begin(115200);

  // LCD
  lcd.init();
  lcd.backlight();

  lcd.clear();
  lcd.setCursor(0, 0);
  lcd.print("SMART IRRIGATION");

  lcd.setCursor(0, 1);
  lcd.print("System Starting...");

  delay(2000);

  lcd.clear();
}

void loop()
{
  // Read soil moisture
  int moisture = analogRead(moisturePin);

  // Display moisture value
  lcd.setCursor(0, 0);
  lcd.print("Moisture: ");
  lcd.print(moisture);
  lcd.print("     ");

  // Serial Monitor
  Serial.print("Moisture: ");
  Serial.println(moisture);

  // Check soil condition
  if (moisture > threshold)
  {
    // Soil is DRY
    digitalWrite(relayPin, HIGH);

    lcd.setCursor(0, 1);
    lcd.print("Soil: DRY          ");

    lcd.setCursor(0, 2);
    lcd.print("Pump: ON           ");

    Serial.println("Soil: DRY");
    Serial.println("Pump: ON");
  }
  else
  {
    // Soil is WET
    digitalWrite(relayPin, LOW);

    lcd.setCursor(0, 1);
    lcd.print("Soil: WET          ");

    lcd.setCursor(0, 2);
    lcd.print("Pump: OFF          ");

    Serial.println("Soil: WET");
    Serial.println("Pump: OFF");
  }

  // Wait 1 second
  delay(1000);
}