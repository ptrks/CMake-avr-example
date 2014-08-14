CMake-avr-example
=================

###Overview

[CMake](http://www.cmake.org/) is an awesome cross platform build system. This repository will show you how to setup CMake to work with the AVR toolchain. The instructions below assume you have succesfully installed the AVR toolchain and CMake.



###Getting Started
This example uses the ATMega328p running at 16Mhz and is programmed by a USBASP. Modify the definitions in `CMakeLists.txt` as needed:

  * Microcontroller : `set(MCU   atmega328p)`
  * Clockspeed : `set(F_CPU 16000000)`
  * Programmer: `set(PROG_TYPE usbasp)`



###Cloning, Compiling and flashing
```sh
git clone https://github.com/patrick--/CMake-avr-example.git
cd CMake-avr-example
cd example_one
mkdir build
cd build
cmake ..
make flash
```
