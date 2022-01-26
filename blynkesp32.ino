#define BLYNK_PRINT Serial
#include <WiFi.h>
#include <WiFiClient.h>
#include <BlynkSimpleEsp32.h>

// You should get Auth Token in the Blynk App.
char auth[] = "OepxUjy84GLoR-jliayuWKiIq9Funv3V";

// Your WiFi configuration.
char ssid[] = "WifiGamming";
char pass[] = "KhilmY17";

void setup() {
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

  Blynk.begin(auth, ssid, pass);

}

void loop(){
    Blynk.run();
}
