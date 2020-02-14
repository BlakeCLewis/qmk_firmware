# MCU name
MCU = atmega32u4

# Bootloader selection
#   Teensy       halfkay
#   Pro Micro    caterina
#   Atmel DFU    atmel-dfu
#   LUFA DFU     lufa-dfu
#   QMK DFU      qmk-dfu
#   ATmega32A    bootloadHID
#   ATmega328P   USBasp
BOOTLOADER = atmel-dfu

# Build Options
#   change yes to no to disable
NKRO_ENABLE = yes       # plugin usb while holding down Space+N, will toggle on NKRO and change persist
BOOTMAGIC_ENABLE = lite # required for Space+N (NKRO) and Space+B (enter bootloarder)
EXTRAKEY_ENABLE = yes   # required for volume controls KC_VOLU, KC_VOLD, KC_MUTE
BACKLIGHT_ENABLE = yes  # enable backlit keycap leds

CONSOLE_ENABLE = no     # use 'hid_listen' program, (works with NKRO toggled off)
COMMAND_ENABLE = no     # lshift + rshift + N (switch from 6KRO to NKRO), have to use SPACE+N to get back  

# Do not enable SLEEP_LED_ENABLE. it uses the same timer as BACKLIGHT_ENABLE
SLEEP_LED_ENABLE = no   # breathing sleep LED during USB suspend
MOUSEKEY_ENABLE = no    # mouse keys
MIDI_ENABLE = no        # mIDI support
UNICODE_ENABLE = no     # unicode
BLUETOOTH_ENABLE = no   # Adafruit EZ-Key HID
AUDIO_ENABLE = no       # audio output on port C6
FAUXCLICKY_ENABLE = no  # use buzzer to emulate clicky switches

LAYOUTS = all iso ansi ansi_split_bs_rshift iso_split_rshift
