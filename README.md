# Custom Board LED Patterns
## This project features a custom [ATmega328P microcontroller](https://www.microchip.com/en-us/product/atmega328p) board programmed in C. The board includes 4 LEDs and 2 buttons. The LEDs support multiple blinking modes controlled by one of the buttons, while the other button serves as a reset.
####
<p align="center">
  <img width="600" height="337" src="https://github.com/user-attachments/assets/2458b5af-0163-48e1-b659-708892232022">
</p>
</br>
Blinking Modes:

*   Default Mode: All LEDs blink simultaneously.
*   Shift Left: LEDs blink in sequence from left to right.
*   Shift Right: LEDs blink in sequence from right to left.
*   Alternate: LEDs blink alternately between odd and even positions.
</br>
Hardware Design:

*   [KiCad](https://www.kicad.org/download/windows/) Schematic: Includes a detailed schematic for easy replication.
*   The design can be implemented on a breadboard, perfboard, or a custom PCB.
</br>
<p align="center">
  <img width="666" height="645" src="https://github.com/user-attachments/assets/8c5431cb-4939-489b-8323-a65e4317bd7e">
</p>
</br>
Programming the Board:

*   Power Setup: An external 5V power supply was used to power the board during programming.
*   Programmer: An [USBasp programmer](https://www.fischl.de/usbasp/) was used to program the ATmega328P via SPI.
</br>
<p align="center">
  <img width="1000" height="562" src="https://github.com/user-attachments/assets/ed2dd3af-b125-41e9-b26d-072c3818be96">
</p>

*   [Fuse Configuration:](https://www.engbedded.com/fusecalc/) The [avrdude tool](https://github.com/ZakKemble/AVRDUDESS/releases/download/v2.18/AVRDUDESS-2.18-setup.exe) was used to program the fuses of the ATmega328P microcontroller
*   Flashing the Hex File: After configuring the fuses, the firmware hex file was flashed to the microcontroller using avrdude.

</br>
<p align="center">
  <img width="639" height="839" src="https://github.com/user-attachments/assets/f4f81f18-6328-4327-be48-3f8b58c64197">
</p>
</br>


The project demonstrates efficient use of button interrupts, state management, and LED control in embedded systems programming. Ideal for learning or expanding skills in microcontroller-based projects.
