/**
 * @file buttons.c
 * @brief Button driver for the macropad.
 *
 * Handles GPIO initialization, button scanning,
 * debouncing, and state changes.
 */

#include "buttons.h"
#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

static const unsigned int BUTTON_PINS[BUTTON_COUNT] =
{
    2,
    3,
    4,
    5
};

void buttons_init(void)
{
    // Initialize GPIO pins for buttons
    // Set up interrupts or polling as needed  
    for (int i = 0; i < BUTTON_COUNT; i++) 
    {
        gpio_init(BUTTON_PINS[i]);
        gpio_set_dir(BUTTON_PINS[i], GPIO_IN);
        gpio_pull_up(BUTTON_PINS[i]);
    } 
}

void buttons_scan(void)
{
    // Scan button states
    // Handle debouncing and state changes
     for (int i = 0; i < BUTTON_COUNT; i++) 
    {
        if (gpio_get(BUTTON_PINS[i]) == 0)
        {
            printf("Button %d pressed\n", i);
        }

    } 
}