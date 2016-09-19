/**
 * @file rtboard.h
 * @author Sebastien CAUX (sebcaux)
 * @copyright Robotips 2016
 *
 * @date April 11, 2016, 06:07 PM
 *
 * @brief Code for RTboard from Robotips
 */

#include "rtboard1_1.h"

int init_io()
{
#ifndef SIMULATOR
    // analog inputs
    ANSELB = 0x0000;    // all analog inputs of port B as digital buffer
    ANSELD = 0x0000;    // all analog inputs of port D as digital buffer
    ANSELE = 0x0000;    // all analog inputs of port E as digital buffer
    ANSELG = 0x0000;    // all analog inputs of port G as digital buffer

    ANSELBbits.ANSB9 = 1;       // BOARD_VOLT_IN as analog
    ANSELBbits.ANSB14 = 1;      // M1I as analog
    ANSELBbits.ANSB15 = 1;      // M2I as analog

    // digitals outputs
    TRISDbits.TRISD11 = 0;      // LED pin as output
    TRISAbits.TRISA15 = 0;      // LED2 pin as output
    TRISAbits.TRISA4  = 0;      // LED3 pin as output

    TRISBbits.TRISB10 = 0;      // M1A pin as output
    TRISBbits.TRISB11 = 0;      // M1B pin as output

    TRISBbits.TRISB13 = 0;      // M2A pin as output
    TRISBbits.TRISB14 = 0;      // M2B pin as output

    TRISBbits.TRISB0 = 0;       // AX12_TXEN pin as output
    TRISDbits.TRISD0 = 0;       // A6_RW pin as output

    // remappable pins
    // Unlock configuration pin
    OSCCONL = 0x46; OSCCONL = 0x57; OSCCONbits.IOLOCK = 0;

        // UART1 pins (wifi)
        _U1RXR = 113;          // RX1 ==> RP113
        _RP96R = _RPOUT_U1TX;  // TX1 ==> RP96

        // UART2 pins (AX12)
        _U2RXR = 39;           // RX2 ==> RP39 AXrx
        _RP118R = _RPOUT_U2TX; // TX2 ==> RP118 AXtx

        // UART3 pins (A6)
        _U3RXR = 23;           // RX3 ==> RPI23 A6rx
        _RP66R = _RPOUT_U3TX;  // TX3 ==> RP66 A6tx

        // UART4 pins (debug)
        _U4RXR = 86;           // RX4 ==> RPI86 AS7
        _RP87R = _RPOUT_U4TX;  // TX4 ==> RP87 AS6

        // QEI1 pins (coder 1)
        _QEA1R = 50;           // C1A ==> RPI50
        _QEB1R = 49;           // C1B ==> RPI49

        // QEI2 pins (coder 2)
        _QEA2R = 52;           // C2A ==> RPI52
        _QEB2R = 51;           // C2B ==> RPI51

        // OC PWM motors (motor 1-2)
        _RP99R = _RPOUT_OC1;   // OC1 ==> RP64
        _RP98R = _RPOUT_OC2;   // OC2 ==> RP99

    // Lock configuration pin
    OSCCONL = 0x46; OSCCONL = 0x57; OSCCONbits.IOLOCK = 1;
#endif
    return 0;
}

int init_board()
{
    init_io();

    return 0;
}
