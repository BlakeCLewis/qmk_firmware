
MCU = atmega32u4
F_CPU = 16000000
ARCH = AVR8
F_USB = $(F_CPU)
OPT_DEFS += -DINTERRUPT_CONTROL_ENDPOINT
BOOTLOADER = atmel-dfu
OPT_DEFS += -DBOOTLOADER_SIZE=4096
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

LAYOUTS = 60_all 60_iso 60_ansi 60_ansi_split_bs_rshift 60_iso_split_bs_rshift
