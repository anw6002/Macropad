/**
 * @file tusb_config.h
 * @brief Enables interface and USB.
 *
 * Enables one HID interface and use the Pico's USB Hardware
 */

#ifndef TUSB_CONFIG_H
#define TUSB_CONFIG_H

#define CFG_TUD_ENABLED 1

#define CFG_TUSB_MCU OPT_MCU_RP2040
#define CFG_TUSB_RHPORT0_MODE OPT_MODE_DEVICE

#define CFG_TUD_HID 1
#define CFG_TUD_HID_EP_BUFFSIZE 8  // allocate 8 bytes

#endif // TUSB_CONFIG_H