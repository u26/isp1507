/*
MIT License

Copyright (c) 2021 u26

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#define P0_02 2 // A0
#define P0_03 3 // A1
#define P0_06 6 // TX --- SERIAL RX
#define P0_07 7
#define P0_08 8 // RX --- SERIAL TX 

#define P0_04 4
#define P0_05 5

#define P0_11 11 // BoardのLED1赤
#define P0_28 28 // A4
#define P0_29 29 // A5
#define P0_30 30 // A6


void setup() {
  
  Serial.begin(115200);
  pinMode(11, OUTPUT);
  pinMode(2, OUTPUT);
  pinMode(3, OUTPUT);
  pinMode(4, OUTPUT);
  pinMode(5, OUTPUT);
  pinMode(7, OUTPUT);
  pinMode(28, OUTPUT);
  pinMode(29, OUTPUT);
  pinMode(30, OUTPUT);

  
}

void loop() {
  // put your main code here, to run repeatedly:

  Serial.println("hello");

  led_check(11);
  led_check(2);
  led_check(3);
  led_check(4);
  led_check(5);
  led_check(7);
  led_check(28);
  led_check(29);
  led_check(30);
  
}

void led_check(int port){

  Serial.println(port);

  digitalWrite(port, HIGH);
  delay(500);
  digitalWrite(port, LOW);
  delay(500);
}
