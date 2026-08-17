/**
 * @file usb_descriptors.c
 * @brief USB descriptors implementation.
 *
 * Defines the USB device descriptors for the HID device by:
 * - Identify Pico as a USB HID device to the host computer.
 * - Tell computer what USB Interfaces device provides
 * - Define format of keyboard data sent
 * - Provide human readable strings for device identification
 * - Provide TinyUSB with descriptors needed to respond to host requests
 */

#include "tusb.h"
#define ITF_NUM_HID 0
#define EPNUM_HID 0x81
//#define CFG_TUD_HID 1
#define CONFIG_TOTAL_LEN (TUD_CONFIG_DESC_LEN + TUD_HID_DESC_LEN)

uint8_t const desc_hid_report[] = {
    TUD_HID_REPORT_DESC_KEYBOARD()
};


