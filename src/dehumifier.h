/**
 * Copyright (C) 2018 Robin Jacobs 
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
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 *
 */

#include "DHT.h" //DHT library for Arduino By Mark Ruys  ( https://github.com/markruys/arduino-DHT ) 

DHT dht;

float DHT_temperature = NAN;
float DHT_humidity = NAN;
float DHT_dewPoint = NAN;
float DHT_absolute_humidity = NAN;
float DHT_absolute_humidity_start = NAN;
bool DHT_initDone = false;

float calcDewpoint(float humi, float temp) {
  float k;
  k = log(humi/100) + (17.62 * temp) / (243.12 + temp);
  return 243.12 * k / (17.62 - k);
}

//#include <math.h>

float calculationAbsHum(float t, float h)
{
  float temp;
  temp = pow(2.718281828, (17.67 * t) / (t + 243.5));
return (6.112 * temp * h * 2.1674) / (273.15 + t);
}

void initDHT()
{
  if (DHT_initDone == false) {
    dht.setup(DHT_PIN, DHT_TYPE);
    safe_delay(1000);
    DHT_initDone = true;
  }
}

void setStartAbsoluteHumidity(float humidity)
{
    DHT_absolute_humidity_start = humidity;
}

void updateDHT()
{
  float temperature = dht.getTemperature();
  float humidity = dht.getHumidity();
  initDHT();
  if (!isnan(temperature)) {
    DHT_temperature = temperature;
  } 
  if (!isnan(humidity)) {
    DHT_humidity = humidity;
  } 
  if (!isnan(DHT_humidity)&&!isnan(DHT_temperature)) { 
    DHT_dewPoint = calcDewpoint(DHT_humidity, DHT_temperature);
    DHT_absolute_humidity = calculationAbsHum(DHT_temperature, DHT_humidity);
    if (isnan(DHT_absolute_humidity_start)) { // Remember first measurement as start value
        setStartAbsoluteHumidity(DHT_absolute_humidity);    
    }
  }
}

