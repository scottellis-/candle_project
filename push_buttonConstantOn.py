#!/usr/bin/env python

# Author: Scott Ellis
# Basic Digital Read
# turns on and off a light emitting diode(LED) connected to digital  
# pin 13, when pressing a pushbutton attached to pin 5. 
# Dependencies: nanpy 0.7

from nanpy import Arduino

sensorButton = Arduino.digitalRead(5)
Arduino.pinMode(sensorButton, Arduino.INPUT)

ledPin = 13; 
Arduino.pinMode(ledPin, Arduino.OUTPUT)

while True:
    sensorButton = Arduino.digitalRead(5)
    print("sensor value: %d" % sensorButton)
    if (sensorButton == True):
        Arduino.digitalWrite(ledPin, Arduino.HIGH)
    else:
        Arduino.digitalWrite(ledPin, Arduino.LOW)
    Arduino.delay(100)