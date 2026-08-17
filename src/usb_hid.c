/**
 * @file usb_hid.c
 * @brief USB Human Interface Device (HID) implementation.
 *
 * Sends keyboard reports to the host computer over USB.
 */

#include "usb_hid.h"
#include "tusb.h"

void usb_hid_init(void) {
    tusb_init();
}

void usb_hid_task(void) {
    tud_task(); // TinyUSB device task
}

void usb_hid_keypress(uint8_t key) {
    // Implementation for sending keypress report
}