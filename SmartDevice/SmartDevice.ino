// SD Card Module
#include <SPI.h>
#include <SD.h>

// Real Time Clock (RTC)
#include "RTClib.h"
RTC_Millis rtc;     // Software Real Time Clock (RTC)
DateTime rightNow;  // used to store the current time.

// SD Card - Confirm Pin
#define SDpin 10

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);  // Open serial communications and wait for port to open:
  while (!Serial) {
    delay(1);  // wait for serial port to connect. Needed for native USB port only
  }

  // SD Card initialisation
  Serial.print("Initializing SD card...");
  if (!SD.begin(SDpin)) {
    Serial.println("initialization failed!");
    while (1)
      ;
  }
}

void loop() {
  // put your main code here, to run repeatedly:
temperatureControl
delay(250);
light
delay(250);
doorbell
delay(250);
eventLogger
delay(250);
doorLocker
delay(250);
security
}
/*
controls the temperature in the house
@params none
@return none
 */
void temperatureControl(){ //air conditioning basically


}
/*
 controls the light in the house
 @params none
 @return none 
*/
void light(){
  
  }
  /*
   doorbell (ringing noise when crash button pressed)
   @params none 
   @return none
   */
void doorbell(){
  
  }
  /*
   logs all events that happen
   @params none
   @return none
   */
void eventLogger(){
  
  }

/*
  locks the door when certain distance reached (unless turned off)
  @params none
  @return none
 */
 void doorLocker(){
  
  }
  /*
   sees if anyone is in the house when they aren't meant to be
   @params none
   @return none
   */
   void security
