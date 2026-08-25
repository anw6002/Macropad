/**
 * @file main.c
 * @brief Entry point for macropad firmware.
 *
 * Initializes the Raspberry Pi Pico SDK and all firmware
 * subsystems, then executes the main application loop.
 */

#include "pico/stdlib.h"
#include <stdio.h>
#include "tusb.h"
#include "usb_hid.h"
//  #include "keymap.h"
#include "buttons.h"

uint8_t button_to_key(Button button)

int main(void)
{
    stdio_init_all();

    buttons_init();
    usb_hid_init();

    ButtonEventData event;
    
    while (true) 
    {
        usb_hid_task();
        if (buttons_scan(&event))
    {
        // not yet implemented
    }

    sleep_ms(10);

    }
}
