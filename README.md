# ATtiny1616_with_Platformio_Serial-UPDI_Demo

## Description
This example of a blink sketch works with an ATtiny1616 processor.
A serial UPDI programmer is used.
The example works with PlatformIo and demonstrates the configuration of the serial programmer in the platformio.ini file.
 
## Prerequisites to run this project

### Software

- Current version of Platformio is installed.

- Programming software *pymcuprog* is installed. Installation instructions can be found in the [Platformio documentation.](https://docs.platformio.org/en/latest/platforms/atmelmegaavr.html#upload-using-pymcuprog-serialupdi). 



### Hardware
This example works with the hardware variants described here. 

####  Variant 1
A suitable example board is the [ATtiny x06/x16/x26 Development Board v2](https://github.com/wagiminator/AVR-Development-Boards/tree/master/ATtiny3216_DevBoard_v2)
by Stefan Wagner "wagiminator" on GitHub.

![Development Board ATtiny3216 V2](https://raw.githubusercontent.com/wagiminator/AVR-Development-Boards/master/ATtiny3216_DevBoard_v2/documentation/ATtiny3216_DevBoard_v2_pic1.jpg)

The board contains an integrated serial UPDI programmer, which can be activated by switching a slide switch to programming.

An LED on processor port PA7 functions as a built-in LED in the sense of the ARDUINO platform.

The schematic of the board is available and allows you to understand how to connect a UPDI serial programmer to an ATtiny1616 microprocessor.

**Attention: this example is designed for an ATtiny1616 processor. The development board shown used an ATtiny3216. The entry
```
board = ATtiny1616
```
in *platformio.ini* must be changed accordingly.

