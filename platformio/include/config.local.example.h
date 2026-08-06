// Copy this file to config.local.h and edit for your board / UI / location.
// config.local.h is gitignored.

#pragma once

// --- Display panel (exactly one) ---
// #define DISP_BW_V2
// #define DISP_3C_B
#define DISP_4C_H
// #define DISP_7C_F
// #define DISP_7C_E6
// #define DISP_BW_V1

// --- Driver board (exactly one) ---
#define DRIVER_WAVESHARE
// #define DRIVER_DESPI_C02

// --- Indoor sensor (exactly one) ---
// #define SENSOR_BME280
// #define SENSOR_BME680
#define SENSOR_SHT41
// #define SENSOR_NONE

// --- Locale ---
#define LOCALE en_US
// #define LOCALE zh_CN
// USE_U8G2_CJK is enabled automatically for zh_CN.

// --- Theme (uncomment for dark / inverted) ---
// #define THEME_INVERTED

// --- Location / time ---
#define LOCAL_LAT "-37.8136"
#define LOCAL_LON "144.9631"
#define LOCAL_CITY_STRING "Melbourne, VIC, AU"
#define LOCAL_TIMEZONE "AEST-10AEDT,M10.1.0,M4.1.0/3"
#define LOCAL_NTP_SERVER_1 "au.pool.ntp.org"
#define LOCAL_NTP_SERVER_2 "pool.ntp.org"
// #define LOCAL_SLEEP_DURATION 30
// #define LOCAL_BED_TIME 0
// #define LOCAL_WAKE_TIME 6

// --- E-Paper pins ---
#define LOCAL_PIN_EPD_BUSY 2
#define LOCAL_PIN_EPD_CS   3
#define LOCAL_PIN_EPD_RST  6
#define LOCAL_PIN_EPD_DC   10
#define LOCAL_PIN_EPD_SCK  5
#define LOCAL_PIN_EPD_MOSI 7
#define LOCAL_PIN_EPD_PWR  0

// --- Indoor sensor I2C ---
#define LOCAL_PIN_BME_SDA 8
#define LOCAL_PIN_BME_SCL 9
#define LOCAL_PIN_BME_PWR 4
#define LOCAL_BME_ADDRESS 0x76
#define LOCAL_SHT_ADDRESS 0x44
