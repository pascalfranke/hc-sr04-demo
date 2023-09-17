# Arduino Uno HC-SR04 Demonstration

Dieses Projekt wurde im Rahmen eines Vortrags über den HC-SR04 Ultraschallabstandssensor erstellt, um die Funktionsweise zu demonstrieren.

## Inhalt 

- [Überblick](#overview)
- [Voraussetzungen](#requirements)
- [Installation](#installation)
- [Verwendung](#usage)
- [Dokumentation](#docs)
- [Zusätzliche Informationen](#additional-infos)
- [Lizenz](#license)

## [Überblick](#overview)

Der HC-SR04 Ultraschallsensor ermöglicht die Messung von Entfernungen durch das Senden und Empfangen von Ultraschallwellen. Dieses Projekt bietet eine einfache Demonstration seiner Funktionsweise mithilfe eines Arduino-Boards und eines LCD-Displays.

## [Voraussetzungen](#requirements)

Um dieses Projekt zu verwenden, benötigen Sie folgende Voraussetzungen:

- Arduino-Entwicklungsumgebung installiert ([Download hier](https://www.arduino.cc/en/software))
- Zugriff auf die Befehlszeile (CLI)

Ich empfehle statt der Arduino IDE besser VS Code zu verwenden und das Addon [PlattformIO](https://marketplace.visualstudio.com/items?itemName=platformio.platformio-ide) zu installieren. Alle nötigen Tools werden automatisch mit installiert.

## [Installation](#installation)

1. Klone das Repository auf deinen Computer:

   ```bash
   git clone https://github.com/pascalfranke/hc-sr04-demo.git
   ```

2. Öffne das Arduino-Projekt in der Arduino-Entwicklungsumgebung.

3. Lade den Sketch auf dein Arduino-Board hoch.

## [Verwendung](#usage)
Sobald das Projekt auf deinem Arduino-Board installiert ist, kannst du den HC-SR04 Ultraschallsensor verwenden, um Entfernungen zu messen und die Ergebnisse auf einem angeschlossenen LCD-Display anzuzeigen. **Stelle sicher, dass die Pin-Konfiguration übereinstimmt oder ändere sie nach Bedarf.**

## [Dokumentation](#docs)
Für eine ausführliche Dokumentation zur Verwendung des HC-SR04-Sensors und dieses Projekts kannst du die folgenden Ressourcen verwenden:

- [Arduino Referenz](https://www.arduino.cc/reference/en/): Die offizielle Arduino-Referenz bietet detaillierte Informationen zu den Arduino-Funktionen, Bibliotheken und vielem mehr. Sie ist eine ausgezeichnete Ressource für alle wichtigen Arduino-Themen.

- [Arduino LiquidCrystal Bibliothek](https://www.arduino.cc/reference/en/libraries/liquidcrystal/): Wenn du mehr über die Verwendung des LiquidCrystal-Displays erfahren möchtest, bietet die Arduino LiquidCrystal-Bibliotheksreferenz umfassende Informationen und Beispiele.

Die Arduino-Dokumentation ist eine wertvolle Quelle für Informationen zu Arduino-Boards, Bibliotheken und Funktionen. Sie kann dir bei der Entwicklung und dem Verständnis deines Projekts sehr nützlich sein.


## [Zusätzliche Informationen](#additional-infos)
Für weitere Informationen und Ressourcen zum HC-SR04-Sensor und verwandten Themen kannst du meine [Präsentation](https://github.com/pascalfranke/hc-sr04-demo/blob/main/documents/ultraschall-sensor-hc-sr04-pascalfranke.pptx) oder gleich die [PDF mit Zusatzinfos](https://github.com/pascalfranke/hc-sr04-demo/blob/main/documents/zusatzinfos_pdf_ultraschall-sensor-hc-sr04-pascalfranke.pdf) ansehen. Dort sind auch weitere informative Quellen verlinkt.


## [Lizenz](#license)
Dieses Projekt ist unter der MIT-Lizenz lizenziert - siehe die [Lizenzdatei](LICENSE) für weitere Details.
