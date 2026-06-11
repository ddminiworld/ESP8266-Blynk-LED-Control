#define BLYNK_TEMPLATE_ID "TMPLxxxxxx"
#define BLYNK_TEMPLATE_NAME "ESP8266_LED"
#define BLYNK_AUTH_TOKEN "YourAuthToken"

#include <ESP8266WiFi.h>
#include <BlynkSimpleEsp8266.h>

char ssid[] = "electronics";
char pass[] = "electronics";

#define LED_PIN 2   // Built-in LED (D4/GPIO2)

BLYNK_WRITE(V0)
{
  int value = param.asInt();

  if (value == 1)
  {
    digitalWrite(LED_PIN, LOW);   // ON
    Serial.println("LED ON");
  }
  else
  {
    digitalWrite(LED_PIN, HIGH);  // OFF
    Serial.println("LED OFF");
  }
}

void setup()
{
  Serial.begin(115200);

  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, HIGH);   // LED OFF initially

  Blynk.begin(BLYNK_AUTH_TOKEN, ssid, pass);

  Serial.println("Connected to Blynk");
}

void loop()
{
  Blynk.run();
}