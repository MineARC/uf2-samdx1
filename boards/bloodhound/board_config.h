#ifndef BOARD_CONFIG_H
#define BOARD_CONFIG_H

#define VENDOR_NAME "MineARC"
#define PRODUCT_NAME "Bloodhound"
#define VOLUME_LABEL "AURA-PT"
#define INDEX_URL "https://minearc.com.au/"
#define BOARD_ID "SAMD51J19A-Bloodhound"

#define USB_VID 0x239A
#define USB_PID 0x0022

#define LED_PIN PIN_PA08
#define LED2_PIN PIN_PA09

// Buttons to exit bootloader (active low with internal pullup)
#define BOOT_EXIT_BUTTON_PIN_1 PIN_PB04
#define BOOT_EXIT_BUTTON_PIN_2 PIN_PB05
#define BOOT_EXIT_BUTTON_PIN_3 PIN_PA27
#define BOOT_EXIT_BUTTON_PIN_4 PIN_PB22
#define BOOT_EXIT_BUTTON_PIN_5 PIN_PB23

// Pins to active power latches on the board, to keep power applied to peripherals after reset
#define POWER_LATCH_DATA PIN_PB31
#define POWER_LATCH_ENABLE PIN_PB06
#define POWER_LATCH_OUTPUT_ENABLE PIN_PB00

// UART disabled - minimal config for compilation
#define BOOT_USART_MODULE                 SERCOM0
#define BOOT_USART_MASK                   APBAMASK
#define BOOT_USART_BUS_CLOCK_INDEX        MCLK_APBAMASK_SERCOM0
#define BOOT_USART_PAD_SETTINGS           UART_RX_PAD1_TX_PAD0
#define BOOT_USART_PAD3                   PINMUX_UNUSED
#define BOOT_USART_PAD2                   PINMUX_UNUSED
#define BOOT_USART_PAD1                   PINMUX_UNUSED
#define BOOT_USART_PAD0                   PINMUX_UNUSED
#define BOOT_GCLK_ID_CORE                 SERCOM0_GCLK_ID_CORE
#define BOOT_GCLK_ID_SLOW                 SERCOM0_GCLK_ID_SLOW

#endif
