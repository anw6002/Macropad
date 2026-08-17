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

void buttons_init(void);
void buttons_scan(void);

// bool button_pressed(Button button);

#endif  // buttons.h