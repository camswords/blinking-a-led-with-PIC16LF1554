#include <xc.h>

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.

// CONFIG1
#pragma config FOSC = ECH       // Oscillator Selection Bits (ECH, External Clock, High Power Mode (4-20 MHz): device clock supplied to CLKIN pins)
#pragma config WDTE = OFF       // Watchdog Timer Enable (WDT disabled. SWDTEN bit is ignored.)
#pragma config PWRTE = OFF      // Power-up Timer Enable (PWRT disabled)
#pragma config MCLRE = ON       // MCLR Pin Function Select (MCLR/VPP pin function is MCLR)
#pragma config CP = OFF         // Flash Program Memory Code Protection (Program memory code protection is disabled)
#pragma config BOREN = ON       // Brown-out Reset Enable (Brown-out Reset enabled)
#pragma config CLKOUTEN = OFF   // Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin)

// CONFIG2
#pragma config WRT = OFF        // Flash Memory Self-Write Protection (Write protection off)
#pragma config STVREN = ON      // Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset)
#pragma config BORV = LO        // Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), 1.9V trip point selected.)
#pragma config LPBOR = OFF      // Low-Power Brown Out Reset (Low-Power BOR is disabled)
#pragma config LVP = ON         // Low-Voltage Programming Enable (Low-voltage programming enabled)


/* "_XTAL_FREQ is the oscillator frequency in Hz *after* any internal PLL multiplier has been applied." */
#define _XTAL_FREQ 31000000


#include <stdint.h>
#include <stdbool.h>

int main(void) {

    /* Pin RC0 is an output */
    TRISC = 0x11111110;
    
    /* Disable Analog functions of C ports */
    ANSELC = 0x00000000;

    /* turn on RC0 */
    LATC = 0x00000001;

    while(1) {
//        
//        /* turn on RC3 */
//        PORTC = PORTC | 0x00001000;
//
//        __delay_ms(100);
//        
//        /* turn off RC3 */
//        PORTC = PORTC & 0x11110111;    
//        
//        __delay_ms(100);
    }
    
    return 0;
}

