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

// Credentials stay out of version control (secrets.h is gitignored).
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

// PINS / LOCATION — values from config.local.h via config.defaults.h
const uint8_t PIN_BAT_ADC  = LOCAL_PIN_BAT_ADC;
const uint8_t PIN_EPD_BUSY = LOCAL_PIN_EPD_BUSY;
const uint8_t PIN_EPD_CS   = LOCAL_PIN_EPD_CS;
const uint8_t PIN_EPD_RST  = LOCAL_PIN_EPD_RST;
const uint8_t PIN_EPD_DC   = LOCAL_PIN_EPD_DC;
const uint8_t PIN_EPD_SCK  = LOCAL_PIN_EPD_SCK;
const uint8_t PIN_EPD_MISO = LOCAL_PIN_EPD_MISO;
const uint8_t PIN_EPD_MOSI = LOCAL_PIN_EPD_MOSI;
const uint8_t PIN_EPD_PWR  = LOCAL_PIN_EPD_PWR;
const uint8_t PIN_BME_SDA = LOCAL_PIN_BME_SDA;
const uint8_t PIN_BME_SCL = LOCAL_PIN_BME_SCL;
const uint8_t PIN_BME_PWR = LOCAL_PIN_BME_PWR;
const uint8_t BME_ADDRESS = LOCAL_BME_ADDRESS;
const uint8_t SHT_ADDRESS = LOCAL_SHT_ADDRESS;

const char *WIFI_SSID     = LOCAL_WIFI_SSID;
const char *WIFI_PASSWORD = LOCAL_WIFI_PASSWORD;
const unsigned long WIFI_TIMEOUT = 10000;

const unsigned HTTP_CLIENT_TCP_TIMEOUT = 10000;

const String OWM_APIKEY   = LOCAL_OWM_APIKEY;
const String OWM_ENDPOINT = "api.openweathermap.org";
const String OWM_ONECALL_VERSION = "3.0";

const String LAT = LOCAL_LAT;
const String LON = LOCAL_LON;
const String CITY_STRING = LOCAL_CITY_STRING;
const char *TIMEZONE = LOCAL_TIMEZONE;
const char *TIME_FORMAT = "%H:%M";
const char *HOUR_FORMAT = "%H";
const char *DATE_FORMAT = "%A, %B %e";
const char *REFRESH_TIME_FORMAT = "%x %H:%M";
const char *NTP_SERVER_1 = LOCAL_NTP_SERVER_1;
const char *NTP_SERVER_2 = LOCAL_NTP_SERVER_2;
const unsigned long NTP_TIMEOUT = 20000;
const int SLEEP_DURATION = LOCAL_SLEEP_DURATION;
const int BED_TIME  = LOCAL_BED_TIME;
const int WAKE_TIME = LOCAL_WAKE_TIME;

const int HOURLY_GRAPH_MAX = 24;

const uint32_t WARN_BATTERY_VOLTAGE     = 3535;
const uint32_t LOW_BATTERY_VOLTAGE      = 3462;
const uint32_t VERY_LOW_BATTERY_VOLTAGE = 3442;
const uint32_t CRIT_LOW_BATTERY_VOLTAGE = 3404;
const unsigned long LOW_BATTERY_SLEEP_INTERVAL      = 30;
const unsigned long VERY_LOW_BATTERY_SLEEP_INTERVAL = 120;
const uint32_t MAX_BATTERY_VOLTAGE = 4200;
const uint32_t MIN_BATTERY_VOLTAGE = 3000;
