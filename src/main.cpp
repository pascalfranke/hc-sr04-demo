#include <Arduino.h>
#include <LiquidCrystal.h>

// Pins
const int trigPin = 12; // Trigger-Pin (Senden) HC-SR04
const int echoPin = 13; // Echo-Pin (Empfangen) HC-SR04

LiquidCrystal lcd(6, 7, 8, 9, 10, 11); // LCD-Pins: RS, E, D4, D5, D6, D7

void setup() {
	Serial.begin(9600); // Startet serielle Kommunikation

	pinMode(trigPin, OUTPUT); // Trigger-Pin als Ausgang definieren
	pinMode(echoPin, INPUT); // Echo-Pin als Eingang definieren

	// Startbildschirm
	lcd.begin(16, 2); // LCD initialisieren (16 Zeichen, 2 Zeilen)
	lcd.setCursor(0, 0); // Cursor auf Position 0,0 setzen (erste Zeile, erster Buchstabe)
	lcd.print("Ultraschall-Demo"); // Text ausgeben
	lcd.setCursor(0, 1); // Cursor auf Position 0,1 setzen (zweite Zeile, erster Buchstabe)
	lcd.print("v. Pascal Franke"); // Text ausgeben
	delay(3000); // 3 Sekunden warten

	// Initialisierung Hauptbildschirm
	lcd.clear(); // Bildschirm löschen
	lcd.setCursor(0, 0); // Cursor auf Position 0,0 setzen (erste Zeile, erster Buchstabe)
	lcd.print("Abstand:"); // Text ausgeben
	lcd.setCursor(0, 1); // Cursor auf Position 0,1 setzen (zweite Zeile, erster Buchstabe)
	lcd.print("0 cm"); // Text ausgeben
}

void loop() {
	long duration; // Zeitdauer des Echos
	float distance_cm; // Distanz in cm

	// Sendet einen 10us langen Impuls zum Triggern des HC-SR04
	digitalWrite(trigPin, LOW); // Trigger-Pin auf "Aus" setzen
	delayMicroseconds(2); // 2 Mikrosekunden warten
	digitalWrite(trigPin, HIGH); // Trigger-Pin auf "Ein" setzen
	delayMicroseconds(10); // 10 Mikrosekunden warten
	digitalWrite(trigPin, LOW); // Trigger-Pin auf "Aus" setzen

	// Liest die Dauer des Echo-Pulses und berechnet die Distanz
	duration = pulseIn(echoPin, HIGH); // Dauer des Echo-Pulses in Mikrosekunden
	distance_cm = duration * 0.034 / 2; // Distanz in cm berechnen (Schallgeschwindigkeit: 340 m/s)

	// Gibt die Distanz auf dem seriellen Monitor aus
	Serial.print("Abstand: " + String(distance_cm) + " cm");

	// Gibt die Distanz auf dem LCD aus
	lcd.setCursor(0, 1); // Cursor auf Position 0,1 setzen (zweite Zeile, erster Buchstabe)
	lcd.print("                "); // Alten Text löschen
	lcd.setCursor(0, 1); // Cursor auf Position 0,1 setzen (zweite Zeile, erster Buchstabe)
	lcd.print(String(distance_cm) + " cm"); // Text ausgeben

	delay(1000); // 1 Sekunde vor der nächsten Messung warten
}