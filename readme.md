# split_fire

![split_fire](https://anz507.sirv.com/Images/built-another-handwired-keyboard-split-fire-v0-e18ox8nhrnyb1.webp)

![split_fire_back](https://anz507.sirv.com/Images/built-another-handwired-keyboard-split-fire-v0-8p7fp9nhrnyb1.webp)

*A short description of the keyboard/project*

A split column staggered ortholinear keyboard that utilize single RP2040 microcontroller.
Has an analog joystick that act as a mouse with left and right click button using micro switch.
Heavily inspired by scotto_split by Joe Scotto.

Included prebuilt firmware: `split_fire_anz507.uf2` or you can compile using comand below.

* Keyboard Maintainer: [Ahmad Anshori](https://github.com/anz507)
* Hardware Supported:
    - Handwired
    - RP2040 microcontroller
* Hardware Availability (if you are around my country, just follow the link :)):
    - 1x [Raspberry Pi Pico RP2040](https://tokopedia.link/spW8kgkinEb)
    - 1x [KY-023 ANALOG DUAL AXIS XY JOYSTICK MODULE](https://tokopedia.link/IzSp9CvinEb)
    - 2x [Kailh Silent Mouse Micro Switch (Yellow - 4.3mm)](https://tokopedia.link/VJXXyjxinEb)
    - 38x [Diode 1N4148](https://tokopedia.link/2BAQzdzinEb)
    - 36x Any MX switches [AKKO CREAM BLUE V3 PRO](https://tokopedia.link/cydDV9CinEb)
    - 36x Any keycaps [Keycap XDA Profile](https://tokopedia.link/f4nmNosjnEb)
    - 30x [Spacer Nylon Plastic 1.5cm](https://www.tokopedia.com/anugrah-solo/spacer-nylon-plastik-penyangga-dudukan-pcb-5mm-1cm-1-5cm-2cm-3cm-1-5cm?utm_campaign=PDP-13423170-6923831712-011123&utm_source=salinlink&utm_medium=share)
    - 30x [Spacer Nylon Plastic 1.5cm and bolts](https://www.tokopedia.com/anugrah-solo/spacer-nylon-plastik-penyangga-dudukan-pcb-5mm-1cm-1-5cm-2cm-3cm-1-5cm?utm_campaign=PDP-13423170-6923831712-011123&utm_source=salinlink&utm_medium=share)
    - [Jumper cables](https://tokopedia.link/h2Ytq9SinEb)
    - [18 gauge copper wire](https://tokopedia.link/tYikGZ7inEb)
    - [Shrink tube](https://tokopedia.link/kHjJH4bjnEb)
    - 2x [VGA Head male & female](https://tokopedia.link/t5cJnAgjnEb)
    - [USB C cable](https://tokopedia.link/q7gD8YnjnEb)
    - 2x [FULL RGB 8bit Ws2812 Ws2812b](https://tokopedia.link/JOORCQrYrEbP)
    - CNC acrylic plate


Make example for this keyboard (after setting up your build environment) using qmk:

    qmk compile -kb split_fire -km anz507

Flashing example for this keyboard:

     Hold reset button on RP2040 and plug in usb c cable
     Device will be detected like a USB flash drive on computer
     Copy and paste split_fire_anz507.uf2 to RP2040

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
