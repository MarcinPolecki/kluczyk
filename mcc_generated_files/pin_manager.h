/**
  @Generated Pin Manager Header File

  @Company:
    Microchip Technology Inc.

  @File Name:
    pin_manager.h

  @Summary:
    This is the Pin Manager file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  @Description
    This header file provides APIs for driver for .
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16LF15313
        Driver Version    :  2.11
    The generated drivers are tested against the following:
        Compiler          :  XC8 2.30 and above
        MPLAB 	          :  MPLAB X 5.40	
*/

/*
    (c) 2018 Microchip Technology Inc. and its subsidiaries. 
    
    Subject to your compliance with these terms, you may use Microchip software and any 
    derivatives exclusively with Microchip products. It is your responsibility to comply with third party 
    license terms applicable to your use of third party software (including open source software) that 
    may accompany Microchip software.
    
    THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS". NO WARRANTIES, WHETHER 
    EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY 
    IMPLIED WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS 
    FOR A PARTICULAR PURPOSE.
    
    IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
    INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
    WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP 
    HAS BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE. TO 
    THE FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL 
    CLAIMS IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT 
    OF FEES, IF ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS 
    SOFTWARE.
*/

#ifndef PIN_MANAGER_H
#define PIN_MANAGER_H

/**
  Section: Included Files
*/

#include <xc.h>

#define INPUT   1
#define OUTPUT  0

#define HIGH    1
#define LOW     0

#define ANALOG      1
#define DIGITAL     0

#define PULL_UP_ENABLED      1
#define PULL_UP_DISABLED     0

// get/set RA0 procedures
#define RA0_SetHigh()            do { LATAbits.LATA0 = 1; } while(0)
#define RA0_SetLow()             do { LATAbits.LATA0 = 0; } while(0)
#define RA0_Toggle()             do { LATAbits.LATA0 = ~LATAbits.LATA0; } while(0)
#define RA0_GetValue()              PORTAbits.RA0
#define RA0_SetDigitalInput()    do { TRISAbits.TRISA0 = 1; } while(0)
#define RA0_SetDigitalOutput()   do { TRISAbits.TRISA0 = 0; } while(0)
#define RA0_SetPullup()             do { WPUAbits.WPUA0 = 1; } while(0)
#define RA0_ResetPullup()           do { WPUAbits.WPUA0 = 0; } while(0)
#define RA0_SetAnalogMode()         do { ANSELAbits.ANSA0 = 1; } while(0)
#define RA0_SetDigitalMode()        do { ANSELAbits.ANSA0 = 0; } while(0)

// get/set RA1 procedures
#define RA1_SetHigh()            do { LATAbits.LATA1 = 1; } while(0)
#define RA1_SetLow()             do { LATAbits.LATA1 = 0; } while(0)
#define RA1_Toggle()             do { LATAbits.LATA1 = ~LATAbits.LATA1; } while(0)
#define RA1_GetValue()              PORTAbits.RA1
#define RA1_SetDigitalInput()    do { TRISAbits.TRISA1 = 1; } while(0)
#define RA1_SetDigitalOutput()   do { TRISAbits.TRISA1 = 0; } while(0)
#define RA1_SetPullup()             do { WPUAbits.WPUA1 = 1; } while(0)
#define RA1_ResetPullup()           do { WPUAbits.WPUA1 = 0; } while(0)
#define RA1_SetAnalogMode()         do { ANSELAbits.ANSA1 = 1; } while(0)
#define RA1_SetDigitalMode()        do { ANSELAbits.ANSA1 = 0; } while(0)

// get/set CS aliases
#define CS_TRIS                 TRISAbits.TRISA2
#define CS_LAT                  LATAbits.LATA2
#define CS_PORT                 PORTAbits.RA2
#define CS_WPU                  WPUAbits.WPUA2
#define CS_OD                   ODCONAbits.ODCA2
#define CS_ANS                  ANSELAbits.ANSA2
#define CS_SetHigh()            do { LATAbits.LATA2 = 1; } while(0)
#define CS_SetLow()             do { LATAbits.LATA2 = 0; } while(0)
#define CS_Toggle()             do { LATAbits.LATA2 = ~LATAbits.LATA2; } while(0)
#define CS_GetValue()           PORTAbits.RA2
#define CS_SetDigitalInput()    do { TRISAbits.TRISA2 = 1; } while(0)
#define CS_SetDigitalOutput()   do { TRISAbits.TRISA2 = 0; } while(0)
#define CS_SetPullup()          do { WPUAbits.WPUA2 = 1; } while(0)
#define CS_ResetPullup()        do { WPUAbits.WPUA2 = 0; } while(0)
#define CS_SetPushPull()        do { ODCONAbits.ODCA2 = 0; } while(0)
#define CS_SetOpenDrain()       do { ODCONAbits.ODCA2 = 1; } while(0)
#define CS_SetAnalogMode()      do { ANSELAbits.ANSA2 = 1; } while(0)
#define CS_SetDigitalMode()     do { ANSELAbits.ANSA2 = 0; } while(0)

// get/set RA4 procedures
#define RA4_SetHigh()            do { LATAbits.LATA4 = 1; } while(0)
#define RA4_SetLow()             do { LATAbits.LATA4 = 0; } while(0)
#define RA4_Toggle()             do { LATAbits.LATA4 = ~LATAbits.LATA4; } while(0)
#define RA4_GetValue()              PORTAbits.RA4
#define RA4_SetDigitalInput()    do { TRISAbits.TRISA4 = 1; } while(0)
#define RA4_SetDigitalOutput()   do { TRISAbits.TRISA4 = 0; } while(0)
#define RA4_SetPullup()             do { WPUAbits.WPUA4 = 1; } while(0)
#define RA4_ResetPullup()           do { WPUAbits.WPUA4 = 0; } while(0)
#define RA4_SetAnalogMode()         do { ANSELAbits.ANSA4 = 1; } while(0)
#define RA4_SetDigitalMode()        do { ANSELAbits.ANSA4 = 0; } while(0)

// get/set TRANSISTOR aliases
#define TRANSISTOR_TRIS                 TRISAbits.TRISA5
#define TRANSISTOR_LAT                  LATAbits.LATA5
#define TRANSISTOR_PORT                 PORTAbits.RA5
#define TRANSISTOR_WPU                  WPUAbits.WPUA5
#define TRANSISTOR_OD                   ODCONAbits.ODCA5
#define TRANSISTOR_ANS                  ANSELAbits.ANSA5
#define TRANSISTOR_SetHigh()            do { LATAbits.LATA5 = 1; } while(0)
#define TRANSISTOR_SetLow()             do { LATAbits.LATA5 = 0; } while(0)
#define TRANSISTOR_Toggle()             do { LATAbits.LATA5 = ~LATAbits.LATA5; } while(0)
#define TRANSISTOR_GetValue()           PORTAbits.RA5
#define TRANSISTOR_SetDigitalInput()    do { TRISAbits.TRISA5 = 1; } while(0)
#define TRANSISTOR_SetDigitalOutput()   do { TRISAbits.TRISA5 = 0; } while(0)
#define TRANSISTOR_SetPullup()          do { WPUAbits.WPUA5 = 1; } while(0)
#define TRANSISTOR_ResetPullup()        do { WPUAbits.WPUA5 = 0; } while(0)
#define TRANSISTOR_SetPushPull()        do { ODCONAbits.ODCA5 = 0; } while(0)
#define TRANSISTOR_SetOpenDrain()       do { ODCONAbits.ODCA5 = 1; } while(0)
#define TRANSISTOR_SetAnalogMode()      do { ANSELAbits.ANSA5 = 1; } while(0)
#define TRANSISTOR_SetDigitalMode()     do { ANSELAbits.ANSA5 = 0; } while(0)

/**
   @Param
    none
   @Returns
    none
   @Description
    GPIO and peripheral I/O initialization
   @Example
    PIN_MANAGER_Initialize();
 */
void PIN_MANAGER_Initialize (void);

/**
 * @Param
    none
 * @Returns
    none
 * @Description
    Interrupt on Change Handling routine
 * @Example
    PIN_MANAGER_IOC();
 */
void PIN_MANAGER_IOC(void);



#endif // PIN_MANAGER_H
/**
 End of File
*/