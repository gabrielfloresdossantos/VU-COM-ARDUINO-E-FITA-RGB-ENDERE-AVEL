#include <Adafruit_NeoPixel.h>
#define PIN_LED 3 // pino onde vai ligado o pino de sinal da fita de led
#define NUMLEDS 12 // numero de LEDs da fita
#define PIN_Sensor A1 // entrada analogica sensor de som
#define PIN_POTENCIOMETRO A2 // entrada analogica do potenciometro

//chama as funções da bibilioteca
Adafruit_NeoPixel leds = Adafruit_NeoPixel(NUMLEDS, PIN_LED, NEO_GRB + NEO_KHZ800);

void setup() {

  pinMode(PIN_POTENCIOMETRO, INPUT);
  pinMode(PIN_Sensor, INPUT);

  leds.begin();
  leds.setBrightness(20);
}

  void led(byte nled, byte r, byte g, byte b) {
    leds.setPixelColor(nled, leds.Color(r, g, b));
    leds.show();

  }

  void clear() {

    for (byte x = 0; x < NUMLEDS; x++) {
      leds.setPixelColor(x, leds.Color(1, 1, 1));
     delay(1);
    }
  }
  void loop() {


    int intensi = analogRead(PIN_Sensor);
    int ganho = analogRead(PIN_POTENCIOMETRO);


    Serial.println(intensi);
    Serial.print(" ");
    Serial.print(ganho);

    clear();

    if (intensi > ganho + 10) {
      led(0, 0, 255, 0);
    }

    if (intensi > ganho + 15) {
      led(1, 0, 230, 0);
    }
    if (intensi > ganho + 20) {
      led(2, 50, 190, 0);
    }
    if (intensi > ganho + 25) {
      led(3, 100, 170, 0);
    }
    if (intensi > ganho + 30) {
      led(4, 150, 150, 0);
    }
    if (intensi > ganho + 35) {
      led(5, 180, 125, 0);
    }
    if (intensi > ganho + 40) {
      led(6, 200, 100, 0);
    }
    if (intensi > ganho + 45) {
      led(7, 220, 80, 0);
    }
    if (intensi > ganho + 50) {
      led(8, 250, 70, 0);
    }
    if (intensi > ganho + 55) {
      led(9, 255, 0, 0);
    }
    if (intensi > ganho + 60) {
      led(10, 255, 0, 0);
    }
    if (intensi > ganho + 65) {
      led(11, 255, 0, 0);
    }
    if (intensi > ganho + 70) {
      led(12, 255, 0, 0);
    }
    //if (intensi > ganho + 75) {
    //  led(13, 255, 0, 0);
    //}
    //if (intensi > ganho + 80) {
    //  led(14, 255, 0, 0);
    //}
    //if (intensi > ganho + 85) {
    //  led(15, 255, 0, 0);
    //}
    //if (intensi > ganho + 90) {
    //  led(16, 255, 0, 0);
    //}
    //if (intensi > ganho + 100) {
    //  led(17, 255, 0, 0);
    //}

  }
