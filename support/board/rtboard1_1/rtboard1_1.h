/**
 * @file rtboard.h
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2016
 *
 * @date April 11, 2016, 06:07 PM
 *
 * @brief Definitions for RTboard from Robotips
 */

#ifndef RTBOARD_H
#define RTBOARD_H

#ifndef SIMULATOR
 #include <xc.h>
#endif

#include <stdint.h>

int board_init();

#define BOARD_NAME "rtboard1_1"
#define SYSCLOCK_XTAL 8000000

// ==== pins define ====
// leds
#define LED_COUNT 3
#define LED1  LATDbits.LATD11
#define LED2 LATAbits.LATA15
#define LED3 LATAbits.LATA4
int board_setLed(uint8_t led, uint8_t state);
int8_t board_getLed(uint8_t led);

// voltage measurement
#define BOARD_VOLT_IN 9 // RB9		// analog board voltage channel

// motors pins
#define M1A     LATBbits.LATB10        // A pin direction
#define M1B     LATBbits.LATB11        // B pin direction
#define M1en    LATFbits.LATF3         // pwm/en pin
#define M1fault PORTBbits.RB12         // bridge default input pin
#define M1I 15   // RB15               // analog current channel

#define M2A     LATBbits.LATB13        // A pin direction
#define M2B     LATDbits.LATD14        // B pin direction
#define M2en    LATFbits.LATF2         // pwm/en pin
#define M2fault PORFBbits.RF8          // bridge default input pin
#define M2I 14   // RB14               // analog current channel

// AX12
#define AX12_TXEN LATBbits.LATB0       // AX12 buffer direction

// A6
#define A6_RW LATDbits.LATD0           // A6 trancever direction
#define A6_WRITE 1
#define A6_READ 0
#define A6_DE LATAbits.LATA6

#endif // RTBOARD_H
