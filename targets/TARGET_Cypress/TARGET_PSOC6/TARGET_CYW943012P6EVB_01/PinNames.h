/*
 * mbed Microcontroller Library
 * Copyright (c) 2017-2018 Future Electronics
 * Copyright (c) 2019 Cypress Semiconductor Corporation
 * SPDX-License-Identifier: Apache-2.0
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef MBED_PINNAMES_H
#define MBED_PINNAMES_H

#include "cmsis.h"
#include "PinNamesTypes.h"
#include "PortNames.h"

// PinName[15-0] = Port[15-8] + Pin[7-0]
typedef enum {
    P0_0    = (Port0 << 8) + 0x00,
    P0_1    = (Port0 << 8) + 0x01,
    P0_2    = (Port0 << 8) + 0x02,
    P0_3    = (Port0 << 8) + 0x03,
    P0_4    = (Port0 << 8) + 0x04,
    P0_5    = (Port0 << 8) + 0x05,
    P0_6    = (Port0 << 8) + 0x06,
    P0_7    = (Port0 << 8) + 0x07,

    P1_0    = (Port1 << 8) + 0x00,
    P1_1    = (Port1 << 8) + 0x01,
    P1_2    = (Port1 << 8) + 0x02,
    P1_3    = (Port1 << 8) + 0x03,
    P1_4    = (Port1 << 8) + 0x04,
    P1_5    = (Port1 << 8) + 0x05,
    P1_6    = (Port1 << 8) + 0x06,
    P1_7    = (Port1 << 8) + 0x07,

    P2_0    = (Port2 << 8) + 0x00,
    P2_1    = (Port2 << 8) + 0x01,
    P2_2    = (Port2 << 8) + 0x02,
    P2_3    = (Port2 << 8) + 0x03,
    P2_4    = (Port2 << 8) + 0x04,
    P2_5    = (Port2 << 8) + 0x05,
    P2_6    = (Port2 << 8) + 0x06,
    P2_7    = (Port2 << 8) + 0x07,

    P3_0    = (Port3 << 8) + 0x00,
    P3_1    = (Port3 << 8) + 0x01,
    P3_2    = (Port3 << 8) + 0x02,
    P3_3    = (Port3 << 8) + 0x03,
    P3_4    = (Port3 << 8) + 0x04,
    P3_5    = (Port3 << 8) + 0x05,
    P3_6    = (Port3 << 8) + 0x06,
    P3_7    = (Port3 << 8) + 0x07,

    P4_0    = (Port4 << 8) + 0x00,
    P4_1    = (Port4 << 8) + 0x01,
    P4_2    = (Port4 << 8) + 0x02,
    P4_3    = (Port4 << 8) + 0x03,
    P4_4    = (Port4 << 8) + 0x04,
    P4_5    = (Port4 << 8) + 0x05,
    P4_6    = (Port4 << 8) + 0x06,
    P4_7    = (Port4 << 8) + 0x07,

    P5_0    = (Port5 << 8) + 0x00,
    P5_1    = (Port5 << 8) + 0x01,
    P5_2    = (Port5 << 8) + 0x02,
    P5_3    = (Port5 << 8) + 0x03,
    P5_4    = (Port5 << 8) + 0x04,
    P5_5    = (Port5 << 8) + 0x05,
    P5_6    = (Port5 << 8) + 0x06,
    P5_7    = (Port5 << 8) + 0x07,

    P6_0    = (Port6 << 8) + 0x00,
    P6_1    = (Port6 << 8) + 0x01,
    P6_2    = (Port6 << 8) + 0x02,
    P6_3    = (Port6 << 8) + 0x03,
    P6_4    = (Port6 << 8) + 0x04,
    P6_5    = (Port6 << 8) + 0x05,
    P6_6    = (Port6 << 8) + 0x06,
    P6_7    = (Port6 << 8) + 0x07,

    P7_0    = (Port7 << 8) + 0x00,
    P7_1    = (Port7 << 8) + 0x01,
    P7_2    = (Port7 << 8) + 0x02,
    P7_3    = (Port7 << 8) + 0x03,
    P7_4    = (Port7 << 8) + 0x04,
    P7_5    = (Port7 << 8) + 0x05,
    P7_6    = (Port7 << 8) + 0x06,
    P7_7    = (Port7 << 8) + 0x07,

    P8_0    = (Port8 << 8) + 0x00,
    P8_1    = (Port8 << 8) + 0x01,
    P8_2    = (Port8 << 8) + 0x02,
    P8_3    = (Port8 << 8) + 0x03,
    P8_4    = (Port8 << 8) + 0x04,
    P8_5    = (Port8 << 8) + 0x05,
    P8_6    = (Port8 << 8) + 0x06,
    P8_7    = (Port8 << 8) + 0x07,

    P9_0    = (Port9 << 8) + 0x00,
    P9_1    = (Port9 << 8) + 0x01,
    P9_2    = (Port9 << 8) + 0x02,
    P9_3    = (Port9 << 8) + 0x03,
    P9_4    = (Port9 << 8) + 0x04,
    P9_5    = (Port9 << 8) + 0x05,
    P9_6    = (Port9 << 8) + 0x06,
    P9_7    = (Port9 << 8) + 0x07,

    P10_0   = (Port10 << 8) + 0x00,
    P10_1   = (Port10 << 8) + 0x01,
    P10_2   = (Port10 << 8) + 0x02,
    P10_3   = (Port10 << 8) + 0x03,
    P10_4   = (Port10 << 8) + 0x04,
    P10_5   = (Port10 << 8) + 0x05,
    P10_6   = (Port10 << 8) + 0x06,
    P10_7   = (Port10 << 8) + 0x07,

    P11_0   = (Port11 << 8) + 0x00,
    P11_1   = (Port11 << 8) + 0x01,
    P11_2   = (Port11 << 8) + 0x02,
    P11_3   = (Port11 << 8) + 0x03,
    P11_4   = (Port11 << 8) + 0x04,
    P11_5   = (Port11 << 8) + 0x05,
    P11_6   = (Port11 << 8) + 0x06,
    P11_7   = (Port11 << 8) + 0x07,

    P12_0   = (Port12 << 8) + 0x00,
    P12_1   = (Port12 << 8) + 0x01,
    P12_2   = (Port12 << 8) + 0x02,
    P12_3   = (Port12 << 8) + 0x03,
    P12_4   = (Port12 << 8) + 0x04,
    P12_5   = (Port12 << 8) + 0x05,
    P12_6   = (Port12 << 8) + 0x06,
    P12_7   = (Port12 << 8) + 0x07,

    P13_0   = (Port13 << 8) + 0x00,
    P13_1   = (Port13 << 8) + 0x01,
    P13_2   = (Port13 << 8) + 0x02,
    P13_3   = (Port13 << 8) + 0x03,
    P13_4   = (Port13 << 8) + 0x04,
    P13_5   = (Port13 << 8) + 0x05,
    P13_6   = (Port13 << 8) + 0x06,
    P13_7   = (Port13 << 8) + 0x07,

    // Not connected
    NC = (int)0xFFFFFFFF,

    // Generic signal names

    I2C_SCL     = P6_0,
    I2C_SDA     = P6_1,

    SPI_MOSI    = P12_0,
    SPI_MISO    = P12_1,
    SPI_CLK     = P12_2,
    SPI_CS      = P12_4,

    UART_RX     = P13_0,
    UART_TX     = P13_1,
    UART_RTS    = P13_2,
    UART_CTS    = P13_3,

    BT_UART_RX  = P3_0,
    BT_UART_TX  = P3_1,
    BT_UART_CTS = P3_3,
    BT_UART_RTS = P3_2,

    BT_PIN_POWER        = P3_4,
    BT_PIN_HOST_WAKE    = P4_0,
    BT_PIN_DEVICE_WAKE  = P3_5,
    BT_PIN_DEVICE_RESET = P4_1,

    SWITCH2     = P0_4,
    LED1        = P0_3,
    LED2        = P1_1,
    LED3        = P10_6,

    LED_RED     = LED1,
    LED_BLUE    = LED3,
    LED_GREEN   = LED2,

    USER_BUTTON = SWITCH2,
    BUTTON1     = USER_BUTTON,

    QSPI_CLK        = P11_7,
    QSPI_IO_0       = P11_6,
    QSPI_IO_1       = P11_5,
    QSPI_IO_2       = P11_4,
    QSPI_IO_3       = P11_3,
    QSPI_SEL        = P11_2,

    // Standardized interfaces names
    STDIO_UART_TX   = UART_TX,
    STDIO_UART_RX   = UART_RX,
    STDIO_UART_CTS  = UART_CTS,
    STDIO_UART_RTS  = UART_RTS,

    CY_STDIO_UART_RX    = STDIO_UART_RX,
    CY_STDIO_UART_TX    = STDIO_UART_TX,
    CY_STDIO_UART_CTS   = STDIO_UART_CTS,
    CY_STDIO_UART_RTS   = STDIO_UART_RTS,

    CY_BT_UART_RX       = BT_UART_RX,
    CY_BT_UART_TX       = BT_UART_TX,
    CY_BT_UART_CTS      = BT_UART_CTS,
    CY_BT_UART_RTS      = BT_UART_RTS,

    CY_BT_PIN_POWER       = BT_PIN_POWER,
    CY_BT_PIN_HOST_WAKE   = BT_PIN_HOST_WAKE,
    CY_BT_PIN_DEVICE_WAKE = BT_PIN_DEVICE_WAKE,

    USBTX   = UART_TX,
    USBRX   = UART_RX,

    CY_WIFI_HOST_WAKE     = P2_7,

    // Not connected
    AOUT    = (int)0xFFFFFFFF  
} PinName;

// PinName[15-0] = Port[15-8] + Pin[4-0]
static inline unsigned CY_PIN(PinName pin)
{
    return pin & 0x07;
}

static inline unsigned CY_PORT(PinName pin)
{
    return (pin >> 8) & 0xFF;
}

// Because MBED pin mapping API does not allow to map multiple instances of the PWM
// to be mapped to the same pin, we create special pin names to force 32-bit PWM unit
// usage instead of standard 16-bit PWM.

#define PWM32(pin)      CY_PIN_FORCE_PWM_32(pin)


#endif
