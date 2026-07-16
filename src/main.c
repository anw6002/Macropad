/**
 * @file main.c
 * @brief Entry point for macropad firmware.
 *
 * Initializes the Raspberry Pi Pico SDK and all firmware
 * subsystems, then executes the main application loop.
 */
 #include "pico/stdlib.h"
 #include "buttons.h"

 int main() {
    buttons_init();
    usb_hid_init();
    
    while (1) {
        buttons_scan();
        keymap_process();
        usb_hid_task();
    
 }