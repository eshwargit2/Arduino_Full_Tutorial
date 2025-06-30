#include <ESP8266WiFi.h>
#include <ESP8266HTTPClient.h>

const char* ssid = "Eshwar Creativity ";
const char* password = "666666555";
const char* serverURL = "http://192.168.250.172:3000/status";

const int ledPin = D2;

void setup() {
  pinMode(ledPin, OUTPUT);
  digitalWrite(ledPin, LOW);
  Serial.begin(115200);
  WiFi.begin(ssid, password);

  while (WiFi.status() != WL_CONNECTED) {
    delay(1000);
    Serial.println("Connecting...");
  }
  Serial.println("Connected to WiFi");
}

void loop() {
  if (WiFi.status() == WL_CONNECTED) {
    HTTPClient http;
    http.begin(serverURL);
    int httpCode = http.GET();

    if (httpCode == HTTP_CODE_OK) {
      String payload = http.getString();
      Serial.println(payload);
      if (payload == "on") {
        digitalWrite(ledPin, HIGH);
      } else {
        digitalWrite(ledPin, LOW);
      }
    }

    http.end();
  }
  delay(3000); // Check every 3 seconds
}
