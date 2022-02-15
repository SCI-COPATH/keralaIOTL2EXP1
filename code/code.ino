
// Fill-in information from your Blynk Template here
#define BLYNK_TEMPLATE_ID "TMPLQTV8X8qD"
#define BLYNK_DEVICE_NAME "LED ON AND OFF"


#define BLYNK_FIRMWARE_VERSION        "0.1.0"

#define BLYNK_PRINT Serial
//#define BLYNK_DEBUG

#define APP_DEBUG

// Uncomment your board, or configure a custom board in Settings.h
//#define USE_WROVER_BOARD
//#define USE_TTGO_T7
//#define USE_ESP32C3_DEV_MODULE
//#define USE_ESP32S2_DEV_KIT

#include "BlynkEdgent.h"

BLYNK_WRITE(V0){
  int pinValue = param.asInt();
  digitalWrite(LED_BUILTIN,pinValue);
}
void setup()
{
  pinMode(LED_BUILTIN ,OUTPUT);
  Serial.begin(115200);
  delay(100);

  BlynkEdgent.begin();
}

void loop() {
  BlynkEdgent.run();
}
