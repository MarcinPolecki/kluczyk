/**
  Generated Main Source File

  Company:
    Microchip Technology Inc.

  File Name:
    main.c

  Summary:
    This is the main file generated using PIC10 / PIC12 / PIC16 / PIC18 MCUs

  Description:
    This header file provides implementations for driver APIs for all modules selected in the GUI.
    Generation Information :
        Product Revision  :  PIC10 / PIC12 / PIC16 / PIC18 MCUs - 1.81.6
        Device            :  PIC16LF15313
        Driver Version    :  2.00
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



#include "mcc_generated_files/mcc.h"
#include "LIS3D.h"
#include "parametry_pracy.h"
#include <xc.h>

/*
                         Main application
 */


void double_click_config(void)
{
    LIS3D_write_register( CTRL_REG_1, 0x4F);   
    LIS3D_write_register( CTRL_REG_2, 0x04); 
    LIS3D_write_register(CLICK_CFG,0x2A); 
    LIS3D_write_register(CLICK_THS,80); 
    LIS3D_write_register(TIME_LIMIT,16); 
    LIS3D_write_register(TIME_LATENCY,16); 
    LIS3D_write_register(TIME_WINDOW,16);
    LIS3D_write_register(CTRL_REG_6,0x80);
}


void wake_up_config(void)
{
    LIS3D_write_register( CTRL_REG_1, 0x4F);
    LIS3D_write_register(CTRL_REG_6,0x0A);
    LIS3D_write_register(ACT_THS,THS_CALC_VAL);
    LIS3D_write_register(INACT_DUR,1);
}

void detect_move_config(void)
{
    LIS3D_write_register( CTRL_REG_1, 0x4F);
    LIS3D_write_register(CTRL_REG_6,0x0A);
    LIS3D_write_register(ACT_THS,3);
    LIS3D_write_register(INACT_DUR,1);    
}

uint8_t go_sleep = 1;
uint8_t wake_up = 0;
uint8_t alive = 1;

void main(void)
{
    // initialize the device
    SYSTEM_Initialize();
    TMR0_StopTimer();
    CS_SetHigh();
    TRANSISTOR_SetLow();
    __delay_ms(100);  
      
    while (1)
    {

        if (go_sleep)
        {
            go_sleep = 0;
            TRANSISTOR_SetLow();
            
            #ifdef WYBUDZENIE_POZIOMEM_SILY
                wake_up_config();
            #else
                #ifdef WYBUDZENIE_KLIK_KLAK
                    double_click_config();
                #endif
            #endif
            
            EXT_INT_Initialize();
            INTERRUPT_GlobalInterruptEnable();
            alive = 0;
            SLEEP();
        }
        
        if (wake_up)
        {
            wake_up = 0;
            TRANSISTOR_SetHigh();
            detect_move_config();
        }

        if( PORTA & 0x10 ) //interrupt state still high
        {
            Reset_Timer();
            
            #ifdef TEST_LED
                CS_SetLow();
            #endif
        }

        #ifdef TEST_LED
            __delay_ms(10);
            CS_SetHigh();
        #endif
    }
}
/**
 End of File
*/