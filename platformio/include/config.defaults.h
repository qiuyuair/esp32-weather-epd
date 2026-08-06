/* Compile-time defaults when config.local.h omits an option.
 * Prefer editing config.local.h (gitignored) for personal settings.
 */
#pragma once

// --- Panel / driver / sensor / locale (config.local.h may define these) ---
#if !(defined(DISP_BW_V2) || defined(DISP_3C_B) || defined(DISP_4C_H) \
      || defined(DISP_7C_F) || defined(DISP_7C_E6) || defined(DISP_BW_V1))
  #define DISP_4C_H
#endif

#if !(defined(DRIVER_WAVESHARE) || defined(DRIVER_DESPI_C02))
  #define DRIVER_WAVESHARE
#endif

#if !(defined(SENSOR_BME280) || defined(SENSOR_BME680) \
      || defined(SENSOR_SHT41) || defined(SENSOR_NONE))
  #define SENSOR_SHT41
#endif

#ifndef LOCALE
  #define LOCALE en_US
#endif

// --- Location / time / pins used by config.cpp ---
#ifndef LOCAL_LAT
  #define LOCAL_LAT "0.0"
#endif
#ifndef LOCAL_LON
  #define LOCAL_LON "0.0"
#endif
#ifndef LOCAL_CITY_STRING
  #define LOCAL_CITY_STRING "City"
#endif
#ifndef LOCAL_TIMEZONE
  #define LOCAL_TIMEZONE "UTC0"
#endif
#ifndef LOCAL_NTP_SERVER_1
  #define LOCAL_NTP_SERVER_1 "pool.ntp.org"
#endif
#ifndef LOCAL_NTP_SERVER_2
  #define LOCAL_NTP_SERVER_2 "pool.ntp.org"
#endif
#ifndef LOCAL_SLEEP_DURATION
  #define LOCAL_SLEEP_DURATION 30
#endif
#ifndef LOCAL_BED_TIME
  #define LOCAL_BED_TIME 0
#endif
#ifndef LOCAL_WAKE_TIME
  #define LOCAL_WAKE_TIME 6
#endif

#ifndef LOCAL_PIN_BAT_ADC
  #define LOCAL_PIN_BAT_ADC A2
#endif
#ifndef LOCAL_PIN_EPD_BUSY
  #define LOCAL_PIN_EPD_BUSY 2
#endif
#ifndef LOCAL_PIN_EPD_CS
  #define LOCAL_PIN_EPD_CS 3
#endif
#ifndef LOCAL_PIN_EPD_RST
  #define LOCAL_PIN_EPD_RST 6
#endif
#ifndef LOCAL_PIN_EPD_DC
  #define LOCAL_PIN_EPD_DC 10
#endif
#ifndef LOCAL_PIN_EPD_SCK
  #define LOCAL_PIN_EPD_SCK 5
#endif
#ifndef LOCAL_PIN_EPD_MISO
  #define LOCAL_PIN_EPD_MISO 19
#endif
#ifndef LOCAL_PIN_EPD_MOSI
  #define LOCAL_PIN_EPD_MOSI 7
#endif
#ifndef LOCAL_PIN_EPD_PWR
  #define LOCAL_PIN_EPD_PWR 0
#endif
#ifndef LOCAL_PIN_BME_SDA
  #define LOCAL_PIN_BME_SDA 8
#endif
#ifndef LOCAL_PIN_BME_SCL
  #define LOCAL_PIN_BME_SCL 9
#endif
#ifndef LOCAL_PIN_BME_PWR
  #define LOCAL_PIN_BME_PWR 4
#endif
#ifndef LOCAL_BME_ADDRESS
  #define LOCAL_BME_ADDRESS 0x76
#endif
#ifndef LOCAL_SHT_ADDRESS
  #define LOCAL_SHT_ADDRESS 0x44
#endif
