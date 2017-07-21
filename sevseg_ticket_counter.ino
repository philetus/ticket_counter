/* SevSeg Counter Example
 
 Copyright 2017 Dean Reading
 
 Licensed under the Apache License, Version 2.0 (the "License");
 you may not use this file except in compliance with the License.
 You may obtain a copy of the License at 
 http://www.apache.org/licenses/LICENSE-2.0
 
 Unless required by applicable law or agreed to in writing, software
 distributed under the License is distributed on an "AS IS" BASIS,
 WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 See the License for the specific language governing permissions and
 limitations under the License.
 
 
 This example demonstrates a very simple use of the SevSeg library with a 4
 digit display. It displays a counter that counts up, showing deci-seconds.
 */

#include "SevSeg.h"
SevSeg sevseg; //Instantiate a seven segment controller object
SevSeg sevseg1; 
SevSeg sevseg2; 

void setup() {
  byte numDigits = 1;
  byte digitPins[] = {10};
  byte segmentPins[] = {30, 28, 26, 24, 22, 32, 34};
  bool resistorsOnSegments = true; // 'false' means resistors are on digit pins
  byte hardwareConfig = COMMON_CATHODE; // See README.md for options
  bool updateWithDelays = false; // Default. Recommended
  bool leadingZeros = false; // Use 'true' if you'd like to keep the leading zeros
  
  sevseg.begin(hardwareConfig, numDigits, digitPins, segmentPins, resistorsOnSegments, updateWithDelays, leadingZeros);
  sevseg.setBrightness(90);

  byte numDigits1 = 1;
  byte digitPins1[] = {11};
  byte segmentPins1[] = {48, 46, 44, 42, 40, 50, 52};
  bool resistorsOnSegments1 = true; // 'false' means resistors are on digit pins
  byte hardwareConfig1 = COMMON_CATHODE; // See README.md for options
  bool updateWithDelays1 = false; // Default. Recommended
  bool leadingZeros1 = false; // Use 'true' if you'd like to keep the leading zeros
  
  sevseg1.begin(hardwareConfig1, numDigits1, digitPins1, segmentPins1, resistorsOnSegments1, updateWithDelays1, leadingZeros1);
  sevseg1.setBrightness(90);

  byte numDigits2 = 1;
  byte digitPins2[] = {12};
  byte segmentPins2[] = {49, 47, 45, 43, 41, 51, 53};
  bool resistorsOnSegments2 = true; // 'false' means resistors are on digit pins
  byte hardwareConfig2 = COMMON_CATHODE; // See README.md for options
  bool updateWithDelays2 = false; // Default. Recommended
  bool leadingZeros2 = false; // Use 'true' if you'd like to keep the leading zeros
  
  sevseg2.begin(hardwareConfig2, numDigits2, digitPins2, segmentPins2, resistorsOnSegments2, updateWithDelays2, leadingZeros2);
  sevseg2.setBrightness(90);
}

void loop() {

  sevseg.setNumber(1, 0);
  //sevseg.blank();
  //sevseg.setChars("-");
  sevseg.refreshDisplay(); // Must run repeatedly

  sevseg1.setNumber(1, 0);
  //sevseg1.blank();
  //sevseg1.setChars("-");
  sevseg1.refreshDisplay(); // Must run repeatedly

  sevseg2.setNumber(1, 0);
  //sevseg2.blank();
  //sevseg2.setChars("-");
  sevseg2.refreshDisplay(); // Must run repeatedly
}

/// END ///
