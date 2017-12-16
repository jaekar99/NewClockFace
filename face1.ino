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


  strip.setPixelColor(0, 0, 0, 255);
  strip.setPixelColor(1, 15, 15, 15);
  strip.setPixelColor(2, 15, 15, 15);
  strip.setPixelColor(3, 15, 15, 15);
  strip.setPixelColor(4, 15, 15, 15);
  strip.setPixelColor(5, 15, 15, 150);
  strip.setPixelColor(6, 15, 15, 15);
  strip.setPixelColor(7, 15, 15, 15);
  strip.setPixelColor(8, 15, 15, 15);
  strip.setPixelColor(9, 15, 15, 15);
  strip.setPixelColor(10, 15, 15, 150);
  strip.setPixelColor(11, 15, 15, 15);
  strip.setPixelColor(12, 15, 15, 15);
  strip.setPixelColor(13, 15, 15, 15);
  strip.setPixelColor(14, 15, 15, 15);
  strip.setPixelColor(15, 0, 0, 255);
  strip.setPixelColor(16, 15, 15, 15);
  strip.setPixelColor(17, 15, 15, 15);
  strip.setPixelColor(18, 15, 15, 15);
  strip.setPixelColor(19, 15, 15, 15);
  strip.setPixelColor(20, 15, 15, 150);
  strip.setPixelColor(21, 15, 15, 15);
  strip.setPixelColor(22, 15, 15, 15);
  strip.setPixelColor(23, 15, 15, 15);
  strip.setPixelColor(24, 15, 15, 15);
  strip.setPixelColor(25, 15, 15, 150);
  strip.setPixelColor(26, 15, 15, 15);
  strip.setPixelColor(27, 15, 15, 15);
  strip.setPixelColor(28, 15, 15, 15);
  strip.setPixelColor(29, 15, 15, 15);
  strip.setPixelColor(30, 0, 0, 255);
  strip.setPixelColor(31, 15, 15, 15);
  strip.setPixelColor(32, 15, 15, 15);
  strip.setPixelColor(33, 15, 15, 15);
  strip.setPixelColor(34, 15, 15, 15);
  strip.setPixelColor(35, 15, 15, 150);
  strip.setPixelColor(36, 15, 15, 15);
  strip.setPixelColor(37, 15, 15, 15);
  strip.setPixelColor(38, 15, 15, 15);
  strip.setPixelColor(39, 15, 15, 15);
  strip.setPixelColor(40, 15, 15, 150);
  strip.setPixelColor(41, 15, 15, 15);
  strip.setPixelColor(42, 15, 15, 15);
  strip.setPixelColor(43, 15, 15, 15);
  strip.setPixelColor(44, 15, 15, 15);
  strip.setPixelColor(45, 0, 15, 255);
  strip.setPixelColor(46, 15, 15, 15);
  strip.setPixelColor(47, 15, 15, 15);
  strip.setPixelColor(48, 15, 15, 15);
  strip.setPixelColor(49, 15, 15, 15);
  strip.setPixelColor(50, 15, 15, 150);
  strip.setPixelColor(51, 15, 15, 15);
  strip.setPixelColor(52, 15, 15, 15);
  strip.setPixelColor(53, 15, 15, 15);
  strip.setPixelColor(54, 15, 15, 15);
  strip.setPixelColor(55, 15, 15, 150);
  strip.setPixelColor(56, 15, 15, 15);
  strip.setPixelColor(57, 15, 15, 15);
  strip.setPixelColor(58, 15, 15, 15);
  strip.setPixelColor(59, 15, 15, 15);
  strip.setPixelColor(60, 0, 0, 255);

}

void loop() {
  // put your main code here, to run repeatedly:
  
strip.show();
 
}
