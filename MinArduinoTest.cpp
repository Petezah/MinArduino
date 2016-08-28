/*
  MinArduinoTest.cpp - A simple test "sketch" for MinArduino
  Copyright (c) 2016 Peter Dunshee.  All right reserved.

  This library is free software; you can redistribute it and/or
  modify it under the terms of the GNU Lesser General Public
  License as published by the Free Software Foundation; either
  version 2.1 of the License, or (at your option) any later version.

  This library is distributed in the hope that it will be useful,
  but WITHOUT ANY WARRANTY; without even the implied warranty of
  MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
  Lesser General Public License for more details.

  You should have received a copy of the GNU Lesser General Public
  License along with this library; if not, write to the Free Software
  Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA  02110-1301  USA
*/

#include <Arduino.h>

void setup()
{
    Serial.begin(9600);
    Serial.println("Serial was initialized");
}

void loop()
{
    static int i = 0;
    Serial.print(i++);
    Serial.println(" Hello, World!");

    delay(1000);
}
