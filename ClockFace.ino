#include <Adafruit_NeoPixel.h>

      #define PIN 6
 
// Parameter 1 = number of pixels in strip
// Parameter 2 = pin number (most are valid)
// Parameter 3 = pixel type flags, add together as needed:
//   NEO_KHZ800  800 KHz bitstream (most NeoPixel products w/WS2812 LEDs)
//   NEO_KHZ400  400 KHz (classic 'v1' (not v2) FLORA pixels, WS2811 drivers)
//   NEO_GRB     Pixels are wired for GRB bitstream (most NeoPixel products)
//   NEO_RGB     Pixels are wired for RGB bitstream (v1 FLORA pixels, not v2)
Adafruit_NeoPixel strip = Adafruit_NeoPixel(60, PIN, NEO_RGB + NEO_KHZ800);
    
void setup() {
  strip.begin();
  strip.show(); // Initialize all pixels to 'off'


  strip.setPixelColor(15, 255, 0, 0);
  strip.setPixelColor(30, 255, 0, 0);
  strip.setPixelColor(45, 255, 0, 0);
  strip.setPixelColor(60, 255, 0, 0);
}

void loop() {
  // put your main code here, to run repeatedly:
  
strip.show();
 
}

