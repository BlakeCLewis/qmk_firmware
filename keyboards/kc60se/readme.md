# kc60se
========================

Keyboard Maintainer: [Blake C. Lewis](https://github.com/BlakeCLewis), [MechMerlin](https://www.github.com/mechmerlin)       
Hardware Supported: KC60SE
Hardware Availability: PCB is nolonger available

## Description:
  * 60% keyboard PCB;
  * supports ANSI, ISO, and HHKB layouts.

## Technical specifications

 ### Enter the Bootloader:
  * unplug keyboard
  * while holding down 'Space' &amp; 'B', plug in USB cable and continue to hold for 8 seconds or until leds go off;
  * 'lsusb' should report '03eb:2ff4 Atmel Corp. atmega32u4 DFU bootloader' instead of 'feed 6060';
  * in bootloader LEDs are off &amp; keyboard does not work;
  * if for some reason that doesn't work, (CAREFUL) while keyboard is plugged in, momentary jump pads 5 &amp; 6 to enter bootloader;
  * flashing the firmware through a USB HUB did not work consistantly. Most of the time it would finish with errors.

 ### Column pin configuration:
  * col 0-13
  * pin: F0 F1 E6 C7 C6 B6 D4 B1 B7 B5 B4 D7 D6 B3

 ### Row pin configuration:
  * row 0-4
  * pin: D0 D1 D2 D3 D5

 ### LED pins (found these with Ohm meter):
  * B2 Capslock LED
  * F5 all other LEDs

 ### Unused? pins:
  * B0 F4 F6 F7 E2

 ### DIP switches enable/disable keys K41 and K4C the second keys from the ends on the bottom row:
  * K41/K4C are WIN/GUI and will disrupt games;
  * Disabling these 2 gui keys can be done in Command mode without using the switches.

 ```
  dip      keys
 #1  #2  K41 K4C
  1   1   1   1    both keys enabled
  1   0   0   1
  0   1   1   0
  0   0   0   0    both keys disabled
  ```

 ### 6 pin header next to the Atmega32u4:

  ```
  2 4 6
  : : :
  1 3 5
  ```
  ```
  1 - B3    (square pad, column 13)
  2 - VCC
  3 - B1    (column 7)
  4 - B2    (capslock led)
  5 - Reset   | momentary jump 5 and 6
  6 - Ground  | to enter Bootloader
  ```

 ### Commands to cut and paste with the mouse when in bootloader(keyboard does not work):
```
# is kb in bootloader mode  "Atmel Corp. atmega32u4 DFU bootloader"
lsusb

# compile the firmware
make kc60se:default

# burn the firmware
make kc60se:default:dfu
```
