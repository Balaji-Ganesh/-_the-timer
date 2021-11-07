#include <DS3231.h>  //  www.rinkydinkelectronics.com.
DS3231 rtc(SDA, SCL);    // A5, A4 pins..


void setup(){
  // Setup Serial communiation
  Serial.begin(9600);
  
  // Initialize the rtc object..
  rtc.begin();
  
  // Set the date and time -- for the first time..
  //rtc.setDOW(WEDNESDAY);
  //rtc.setTime(14, 2, 0);
  //rtc.setDate(7, 11, 2021); 
}

void loop(){
  // Print date...
  Serial.print(rtc.getDateStr());
  Serial.print(", ");
  
  // Print the DayOfWeek..
  Serial.print(rtc.getDOWStr());
  Serial.print(" : ");
  
  // Print the time..
  Serial.println(rtc.getTimeStr());
  
  // Wait for a second..
  delay(1000);      // To see the time updation for each second..
}
