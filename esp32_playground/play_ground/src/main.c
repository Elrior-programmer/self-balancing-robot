#include <Arduino.h>

void setup() {
  // Inicjalizacja magistrali UART0 z prędkością 115200 baud
  Serial.begin(115200);
  
  // Opcjonalnie: odczekaj na ustanowienie połączenia
  delay(1000);
  Serial.println("UART ESP32 dziala poprawnie!");
}

void loop() {
  if (Serial.available() > 0) {
    // Odczyt danych przesłanych z komputera
    String receivedText = Serial.readStringUntil('\n');
    
    // Odesłanie odpowiedzi
    Serial.print("Odebrano z PC: ");
    Serial.println(receivedText);
  }
}