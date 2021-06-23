#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>
#define pin 25

char auth[] = "8yes3vRDGqUZ05fJuf9QXSmAoHqpaFNq";       // You should get Auth Token in the Blynk App.
char ssid[] = "Redmi 8";                    // Your Wi-Fi Credentials
char pass[] = "elektro16";
void setup() {  
  pinMode(pin, OUTPUT); 
  pinMode(pin, HIGH);
  Serial.begin(115200);
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass);
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("WiFi connected");  
  Blynk.begin("8yes3vRDGqUZ05fJuf9QXSmAoHqpaFNq", ssid, pass);
}
void loop(){
    Blynk.run();
}
 
