#ifndef BUTTONS_H
#define BUTTONS_H

#include <stdbool.h>

#define BUTTON_COUNT 4

typedef enum
{
    BUTTON_A,
    BUTTON_B,
    BUTTON_C,
    BUTTON_D
} Button;

typedef enum
{
    BUTTON_PRESSED,
    BUTTON_RELEASED
} ButtonEvent;

typedef struct
{
    Button button;
    ButtonEvent event;
} ButtonEventData;


void buttons_init(void);
bool buttons_scan(ButtonEventData *event);

#endif  // BUTTONS_H