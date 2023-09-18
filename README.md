# ATmega1284P Blink LED

This is a simple AVR C program for the ATmega1284P microcontroller to blink an LED connected to Pin 2 of Port C. The program toggles the state of the LED every 100 milliseconds, creating a blinking effect.

## Author

- **Author:** Lauren Crist
- **Date Created:** April 25, 2022

## Table of Contents

- [ATmega1284P Blink LED](#atmega1284p-blink-led)
  - [Author](#author)
  - [Date Created](#date-created)
  - [Table of Contents](#table-of-contents)
  - [Description](#description)
  - [Prerequisites](#prerequisites)
  - [Usage](#usage)

## Description

This simple program demonstrates how to set up the ATmega1284P microcontroller to control an LED connected to one of its pins. It utilizes AVR C, the official development platform for Atmel microcontrollers.

## Prerequisites

To use and upload this code to an ATmega1284P microcontroller, you'll need the following:

- An ATmega1284P microcontroller.
- AVR development tools and software, such as AVR-GCC and AVRDUDE.
- A development board or circuit setup with an LED connected to Pin 2 on Port C.

## Usage

1. Set up your development environment with the necessary tools, including AVR-GCC and AVRDUDE.

2. Connect your ATmega1284P microcontroller to your development board or circuit setup. Ensure that an LED is connected to Pin 2 (PINC2) on Port C.

3. Compile the code using AVR-GCC to generate a HEX file.

4. Use AVRDUDE or a similar tool to upload the HEX file to your ATmega1284P microcontroller.

5. Power up the microcontroller. You should see the LED connected to Pin 2 on Port C blink every 100 milliseconds.

