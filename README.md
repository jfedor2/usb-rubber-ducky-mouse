# USB "rubber ducky" with mouse input

A USB "rubber ducky" is a device that looks like a regular USB drive, but when connected to a computer it acts as a USB keyboard and sends malicious keystrokes to the victim's machine.

This is that, but in addition to delivering key presses, it can also move the mouse. To demonstrate the functionality, it launches Paint and draws a picture.

[Demo video.](https://www.youtube.com/watch?v=VckvC7uBdL4)

Because it uses absolute mouse cursor positioning, it doesn't have to worry about mouse sensitivity and acceleration settings on the victim's machine. `TrinketHidComboAbsoluteMouse` is a modified version of Adafruit's `TrinketHidCombo` library that changes the mouse to be absolute instead of relative.

It's meant to run on an ATtiny85 board with USB like the Digispark. For best results, program the chip directly via ISP without the Micronucleus bootloader, so that it gets to running the code immediately after connecting.
