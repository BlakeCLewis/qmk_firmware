# kc60se
========================

Keyboard Maintainer: [Blake C. Lewis](https://github.com/BlakeCLewis), [MechMerlin](https://www.github.com/mechmerlin)       
Hardware Supported: KC60SE
Hardware Availability: PCB is nolonger available

## Description:
  * 60% keyboard PCB;
  * supports ANSI, ISO, and HHKB layouts.


### Enter the Bootloader:
  * unplug keyboard
  * while holding down 'Space' &amp; 'B', plug in USB cable and continue to hold for 8 seconds or until leds go off;
  * 'lsusb' should report 'Atmel Corp. atmega32u4 DFU bootloader' instead of 'feed 6060';
  * in bootloader LEDs are off &amp; keyboard does not work;
  * if for some reason that doesn't work, (CAREFUL) while keyboard is plugged in, momentary jump pads 5 &amp; 6 to enter bootloader;
  * flashing the firmware through a USB HUB did not work consistantly. Most of the time it would finish with errors.
  * new default keymap enters bootloader by "holding down esc while pluging in usb"

### See [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) then the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information.

### Make example for this keyboard (after setting up your build environment):
```
# is kb in bootloader mode  "Atmel Corp. atmega32u4 DFU bootloader"
lsusb

# compile the firmware
make kc60se:default

# burn the firmware
make kc60se:default:dfu
```
### NKRO
  * N or 6 Key Rollover NKRO/6KRO
  * navigating bio of computer my require 6KRO
  * default keymap has fn(T) mapped to toggle NKRO/6KRO
  * test: press 8 keys at same time, if 6 then 6KRO, if 8 then NKRO 


### DIP switches enable/disable GUI keys, the second keys from the ends on the bottom row:
  * K41/K4C are WIN/GUI and will disrupt games;
  * this can be done by mapping a key to toggle these keys

 ```
  dip      keys
 #1  #2  K41 K4C
  1   1   1   1    both keys enabled
  1   0   0   1
  0   1   1   0
  0   0   0   0    both keys disabled
  ```

### 6 pin header next to the Atmega32u4:
  * if you can't get into bootloader, then while keyboard is on, momentary jump pad 5 to pad 6

  ```
  2 4 6
  : : :
  1 3 5
  ```
  ```
  1 - B3      square pad, column 13
  2 - VCC
  3 - B1      column 7
  4 - B2      capslock led
  5 - Reset   | momentary jump 5 and 6
  6 - Ground  | to enter Bootloader
  ```

