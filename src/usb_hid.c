/**
 * @file usb_hid.c
 * @brief USB Human Interface Device (HID) implementation.
 *
 * Sends keyboard reports to the host computer over USB.
 */

#include "usb_hid.h"
#include "tusb.h"

void usb_hid_init(void) {
    tud_init(0);
}

void usb_hid_task(void) {
    tud_task(); // TinyUSB device task
}

void usb_hid_keypress(uint8_t key) {
    uint8_t keycode[6] = {0};
    keycode[0] = key;

    tud_hid_keyboard_report(0, 0, keycode); // report_id, modifier, const keycode
}

void usb_hid_keyrelease(void) {
    uint8_t keycode[6] = {0};
    tud_hid_keyboard_report(0, 0, keycode);
}