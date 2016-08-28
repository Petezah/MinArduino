# MinArduino
A minimal build environment for building Arduino-dependent firmware using a Makefile

I have found it somewhat painful to move from an Arduino prototype envinroment to a bare-bones
Atmel AVR build environment.  Since that is ultimately what I like doing, and if I were honest,
I'd like to just start there from the get-go, but still be able to utilize Arduino-centered
libraries from time to time, I decided to just publish this minimal Arduino build envinroment
so that I can reuse it on future projects.

The Makefile is simplistic and will just build the demo/test "sketch" in this project, but can
easily be modified for your own projects.  It started life on the Arduino website here: 
[http://playground.arduino.cc/uploads/Learning/Makefile](http://playground.arduino.cc/uploads/Learning/Makefile)
