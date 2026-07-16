#ifndef BUTTONS_H
#define BUTTONS_H

typedef enum
{
    BUTTON_A,
    BUTTON_B,
    BUTTON_C,
    BUTTON_D,
    BUTTON_COUNT
} Button;

void buttons_init(void);
void buttons_scan(void);

bool button_pressed(Button button);

#endif  