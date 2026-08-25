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
    15,
    14,
    13,
    3
};

static bool previous_state[BUTTON_COUNT];


/**
 * @brief Initialize all button GPIOs.
 *
 * Configures each button pin as an input and enables
 * the internal pull-up resistor.
 */
void buttons_init(void)
{
    for (int i = 0; i < BUTTON_COUNT; i++)
    {
        gpio_init(BUTTON_PINS[i]);
        gpio_set_dir(BUTTON_PINS[i], GPIO_IN);
        gpio_pull_up(BUTTON_PINS[i]);
    }
}


/**
 * @brief Scan all buttons for state changes.
 *
 * Reads each button, compares the current state with
 * the previous state, and generates one event when a
 * button is pressed or released.
 *
 * This function should be called periodically.
 */
bool buttons_scan(ButtonEventData *event)
{
    for (int i = 0; i < BUTTON_COUNT; i++)
    {
        bool current_state = (gpio_get(BUTTON_PINS[i]) == 0);

        if (current_state != previous_state[i])
        {
            event->button = (Button)i;

            if (current_state)
            {
                event->event = BUTTON_PRESSED;
            }
            else
            {
                event->event = BUTTON_RELEASED;
            }

            previous_state[i] = current_state;

            return true;
        }
    }
    return false;
}