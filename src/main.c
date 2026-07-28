/**
 * @file main.c
 * @brief Entry point for macropad firmware.
 *
 * Initializes the Raspberry Pi Pico SDK and all firmware
 * subsystems, then executes the main application loop.
 */
 #include "pico/stdlib.h"
 #include <stdio.h>
//  #include "usb_hid.h"
//  #include "keymap.h"
 #include "buttons.h"


 int main(void)
{
    stdio_init_all();

    buttons_init();

    while (true)
    {
        buttons_scan();
        sleep_ms(10);
    }
}
//  int main() {
//     buttons_init();
//     usb_hid_init();
    
//     while (true) {
//         buttons_scan();
//         keymap_process();
//         usb_hid_task();
//     }
//  }