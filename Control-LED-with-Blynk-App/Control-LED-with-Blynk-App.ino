#define BLYNK_PRINT Serial
#include <WiFi.h> //
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h> //

int pin = 2;

char auth[] = "auth";      
char ssid[] = "ssid";                    
char pass[] = "pass";

void setup() {  
  pinMode(pin, OUTPUT); //menjadikan pin 2 sebagai output
  Serial.begin(115200);
  delay(10);
  Serial.print("Connecting to ");
  Serial.println(ssid);
  WiFi.begin(ssid, pass); //memulai koneksi dengan WI Fi 
  int wifi_ctr = 0;
  while (WiFi.status() != WL_CONNECTED) {
  delay(500);
  Serial.print(".");
  }
  Serial.println("WiFi connected"); //mencetak wifi connect 
  Blynk.begin(auth, ssid, pass);
}
void loop(){
    Blynk.run();
}
 
