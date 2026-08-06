/* Configuration options for esp32-weather-epd.
 * Copyright (C) 2022-2025  Luke Marzen
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <https://www.gnu.org/licenses/>.
 */

#include <Arduino.h>
#include "config.h"

// Keep local credentials out of version control:
// - optional `include/secrets.h` can define LOCAL_WIFI_SSID, LOCAL_WIFI_PASSWORD,
//   and LOCAL_OWM_APIKEY
// - fallback placeholders are used if secrets.h is absent
#if __has_include("secrets.h")
#include "secrets.h"
#endif

#ifndef LOCAL_WIFI_SSID
#define LOCAL_WIFI_SSID "YOUR_WIFI_SSID"
#endif

#ifndef LOCAL_WIFI_PASSWORD
#define LOCAL_WIFI_PASSWORD "YOUR_WIFI_PASSWORD"
#endif

#ifndef LOCAL_OWM_APIKEY
#define LOCAL_OWM_APIKEY "YOUR_OWM_API_KEY"
#endif

// PINS
// The configuration below is intended for use with the project's official 
// wiring diagrams using the FireBeetle 2 ESP32-E microcontroller board.
//
// Note: LED_BUILTIN pin will be disabled to reduce power draw.  Refer to your
//       board's pinout to ensure you avoid using a pin with this shared 
//       functionality.
//
// ADC pin used to measure battery voltage
const uint8_t PIN_BAT_ADC  = A2; // A0 for micro-usb firebeetle
// Pins for E-Paper Driver Board (ESP32-C3 ↔ Waveshare)
// BUSY=2 CS=3 DC=10 RES=6 SDI/MOSI=7 SCL/SCK=5
const uint8_t PIN_EPD_BUSY = 2;
const uint8_t PIN_EPD_CS   = 3;
const uint8_t PIN_EPD_RST  = 6;
const uint8_t PIN_EPD_DC   = 10;
const uint8_t PIN_EPD_SCK  = 5;
const uint8_t PIN_EPD_MISO = 19; // not connected on wiring; kept for SPI.begin signature
const uint8_t PIN_EPD_MOSI = 7;  // SDI / DIN
const uint8_t PIN_EPD_PWR  = 1;  // unused if panel power is hardwired to 3.3V
// I2C Pins used for BME280 (ESP32-C3 common broken-out pins)
const uint8_t PIN_BME_SDA = 8;
const uint8_t PIN_BME_SCL = 9;
const uint8_t PIN_BME_PWR = 4;   // Irrelevant if directly connected to 3.3V
const uint8_t BME_ADDRESS = 0x76; // 0x76 if SDO -> GND; 0x77 if SDO -> VCC

// WIFI
const char *WIFI_SSID     = LOCAL_WIFI_SSID;
const char *WIFI_PASSWORD = LOCAL_WIFI_PASSWORD;
const unsigned long WIFI_TIMEOUT = 10000; // ms, WiFi connection timeout.

// HTTP
// The following errors are likely the result of insuffient http client tcp 
// timeout:
//   -1   Connection Refused
//   -11  Read Timeout
//   -258 Deserialization Incomplete Input
const unsigned HTTP_CLIENT_TCP_TIMEOUT = 10000; // ms

// OPENWEATHERMAP API
// OpenWeatherMap API key, https://openweathermap.org/
const String OWM_APIKEY   = LOCAL_OWM_APIKEY;
const String OWM_ENDPOINT = "api.openweathermap.org";
// OpenWeatherMap One Call 2.5 API is deprecated for all new free users
// (accounts created after Summer 2022).
//
// Please note, that One Call API 3.0 is included in the "One Call by Call"
// subscription only. This separate subscription includes 1,000 calls/day for
// free and allows you to pay only for the number of API calls made to this
// product.
//
// Here’s how to subscribe and avoid any credit card changes:
// - Go to https://home.openweathermap.org/subscriptions/billing_info/onecall_30/base?key=base&service=onecall_30
// - Follow the instructions to complete the subscription.
// - Go to https://home.openweathermap.org/subscriptions and set the "Calls per
//   day (no more than)" to 1,000. This ensures you will never overrun the free
//   calls.
const String OWM_ONECALL_VERSION = "3.0";

// LOCATION
// Set your latitude and longitude.
// (used to get weather data as part of API requests to OpenWeatherMap)
const String LAT = "36.3895";
const String LON = "139.0634";
// City name that will be shown in the top-right corner of the display.
const String CITY_STRING = "Maebashi, Gunma, Japan";

// TIME
// For list of time zones see
// https://github.com/nayarsystems/posix_tz_db/blob/master/zones.csv
const char *TIMEZONE = "JST-9";
// Time format used when displaying sunrise/set times. (Max 11 characters)
// For more information about formatting see
// https://man7.org/linux/man-pages/man3/strftime.3.html
// const char *TIME_FORMAT = "%l:%M%P"; // 12-hour ex: 1:23am  11:00pm
const char *TIME_FORMAT = "%H:%M";   // 24-hour ex: 01:23   23:00
// Time format used when displaying axis labels. (Max 11 characters)
// For more information about formatting see
// https://man7.org/linux/man-pages/man3/strftime.3.html
// const char *HOUR_FORMAT = "%l%P"; // 12-hour ex: 1am  11pm
const char *HOUR_FORMAT = "%H";      // 24-hour ex: 01   23
// Date format used when displaying date in top-right corner.
// For more information about formatting see
// https://man7.org/linux/man-pages/man3/strftime.3.html
const char *DATE_FORMAT = "%A, %B %e"; // ex: Monday, January 1
// Date/Time format used when displaying the last refresh time along the bottom
// of the screen.
// For more information about formatting see
// https://man7.org/linux/man-pages/man3/strftime.3.html
const char *REFRESH_TIME_FORMAT = "%x %H:%M";
// NTP_SERVER_1 is the primary time server, while NTP_SERVER_2 is a fallback.
// pool.ntp.org will find the closest available NTP server to you.
const char *NTP_SERVER_1 = "ntp.nict.jp";
const char *NTP_SERVER_2 = "pool.ntp.org";
// If you encounter the 'Failed To Fetch The Time' error, try increasing
// NTP_TIMEOUT or select closer/lower latency time servers.
const unsigned long NTP_TIMEOUT = 20000; // ms
// Sleep duration in minutes. (aka how often esp32 will wake for an update)
// Aligned to the nearest minute boundary.
// For example, if set to 30 (minutes) the display will update at 00 or 30
// minutes past the hour. (range: [2-1440])
// Note: The OpenWeatherMap model is updated every 10 minutes, so updating more
//       frequently than that is unnessesary.
const int SLEEP_DURATION = 30; // minutes
// Bed Time Power Savings.
// If BED_TIME == WAKE_TIME, then this battery saving feature will be disabled.
// (range: [0-23])
const int BED_TIME  = 0;  // Last update at 00:00 (midnight) until WAKE_TIME.
const int WAKE_TIME = 6;  // Hour of first update after BED_TIME, 06:00.
// Note that the minute alignment of SLEEP_DURATION begins at WAKE_TIME even if
// Bed Time Power Savings is disabled.
// For example, if WAKE_TIME = 00 (midnight) and SLEEP_DURATION = 120, then the
// display will update at 00:00, 02:00, 04:00... until BED_TIME.
// If you desire to have your display refresh exactly once a day, you should set
// SLEEP_DURATION = 1440, and you can set the time it should update each day by
// setting both BED_TIME and WAKE_TIME to the hour you want it to update.

// HOURLY OUTLOOK GRAPH
// Number of hours to display on the outlook graph. (range: [8-48])
const int HOURLY_GRAPH_MAX = 24;

// BATTERY
// To protect the battery upon LOW_BATTERY_VOLTAGE, the display will cease to
// update until battery is charged again. The ESP32 will deep-sleep (consuming
// < 11μA), waking briefly check the voltage at the corresponding interval (in
// minutes). Once the battery voltage has fallen to CRIT_LOW_BATTERY_VOLTAGE,
// the esp32 will hibernate and a manual press of the reset (RST) button to
// begin operating again.
const uint32_t WARN_BATTERY_VOLTAGE     = 3535; // (millivolts) ~20%
const uint32_t LOW_BATTERY_VOLTAGE      = 3462; // (millivolts) ~10%
const uint32_t VERY_LOW_BATTERY_VOLTAGE = 3442; // (millivolts)  ~8%
const uint32_t CRIT_LOW_BATTERY_VOLTAGE = 3404; // (millivolts)  ~5%
const unsigned long LOW_BATTERY_SLEEP_INTERVAL      = 30;  // (minutes)
const unsigned long VERY_LOW_BATTERY_SLEEP_INTERVAL = 120; // (minutes)
// Battery voltage calculations are based on a typical 3.7v LiPo.
const uint32_t MAX_BATTERY_VOLTAGE = 4200; // (millivolts)
const uint32_t MIN_BATTERY_VOLTAGE = 3000; // (millivolts)

// See config.h for the below options
// E-PAPER PANEL
// LOCALE
// UNITS
// WIND ICON PRECISION
// FONTS
// ALERTS
// BATTERY MONITORING

