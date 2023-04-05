# Design Document

## Smart Device Theme

a sonar/distance sensor automatically locks the door with a servo motor once a certain distance is reached from the door unless set otherwise.

Line sensor is a security system for when you are not in the house that pairs with passive infrared for security which triggers the piezo alarm like the doorbell but louder

Crash button for doorbell which triggers the piezo buzzer to let you know someone rang the doorbell

Potentiometer for lights brightness for the traffic lights LEDS

Crash button for a fan which is used for fans that when pressed the dc motor turns on and the fan starts spinning

## Behaviours

1. when the house does anything log the event
2. potentiometer to set the light brightnesss and change light colour
3. crash button trigger a ringing noise for the doorbell
4. a sonar/distance sensor locks the door when you reach a certain distance from the house
5. a line sensor when the door is locked and you're not in the house, if the line sensor senses movement a loud sound will play from the peizo buzzer
6. passive infared to see if someone is in the house, is in a room activate LED lights