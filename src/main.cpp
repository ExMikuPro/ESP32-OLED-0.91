
#include <arduino.h>
#include "U8g2lib.h"

// U8G2_SSD1306_128X32_UNIVISION_F_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);  //M0/ESP32/ESP8266/mega2560/Uno/Leonardo
//U8G2_SSD1327_WS_96X64_F_HW_I2C u8g2(U8G2_R0, /* reset=*/
//                                    U8X8_PIN_NONE);

// U8G2_SSD1306_64X32_1F_1_2ND_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);
U8G2_SSD1306_96X40_1_HW_I2C u8g2(U8G2_R0, /* reset=*/U8X8_PIN_NONE);

void setup() {
    Serial.begin(9600);
    u8g2.begin();
    u8g2.setFont(u8g2_font_t0_11_t_all);
    u8g2.drawBox(0, 0, 60, 32);
    u8g2.sendBuffer();
}

void loop() {

}
