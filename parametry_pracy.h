/* Microchip Technology Inc. and its subsidiaries.  You may use this software 
 * and any derivatives exclusively with Microchip products. 
 * 
 * THIS SOFTWARE IS SUPPLIED BY MICROCHIP "AS IS".  NO WARRANTIES, WHETHER 
 * EXPRESS, IMPLIED OR STATUTORY, APPLY TO THIS SOFTWARE, INCLUDING ANY IMPLIED 
 * WARRANTIES OF NON-INFRINGEMENT, MERCHANTABILITY, AND FITNESS FOR A 
 * PARTICULAR PURPOSE, OR ITS INTERACTION WITH MICROCHIP PRODUCTS, COMBINATION 
 * WITH ANY OTHER PRODUCTS, OR USE IN ANY APPLICATION. 
 *
 * IN NO EVENT WILL MICROCHIP BE LIABLE FOR ANY INDIRECT, SPECIAL, PUNITIVE, 
 * INCIDENTAL OR CONSEQUENTIAL LOSS, DAMAGE, COST OR EXPENSE OF ANY KIND 
 * WHATSOEVER RELATED TO THE SOFTWARE, HOWEVER CAUSED, EVEN IF MICROCHIP HAS 
 * BEEN ADVISED OF THE POSSIBILITY OR THE DAMAGES ARE FORESEEABLE.  TO THE 
 * FULLEST EXTENT ALLOWED BY LAW, MICROCHIP'S TOTAL LIABILITY ON ALL CLAIMS 
 * IN ANY WAY RELATED TO THIS SOFTWARE WILL NOT EXCEED THE AMOUNT OF FEES, IF 
 * ANY, THAT YOU HAVE PAID DIRECTLY TO MICROCHIP FOR THIS SOFTWARE.
 *
 * MICROCHIP PROVIDES THIS SOFTWARE CONDITIONALLY UPON YOUR ACCEPTANCE OF THESE 
 * TERMS. 
 */

/* 
 * File:   
 * Author: 
 * Comments: Wybieramy sposob wybudzenia jednym z 2 definow: POZIOM_SILY, KLIK_KLAK. Sile wybudzenia wybieramy od 2 do 100%, a czas od 1 sekundy do 600.
 *           Gdyby nastawiono zle parametry zostanie wygenerowany error i program sie nie skompiluje.
 * Revision history: 
 */

// This is a guard condition so that contents of this file are not included
// more than once.  

#ifndef PARAMETRY_PRACY_H
#define PARAMETRY_PRACY_H

#define WYBUDZENIE_POZIOMEM_SILY
//#define WYBUDZENIE_KLIK_KLAK

#define SILA_WYBUDZENIA 100   /* 2 - 100% */
#define CZAS_WYLACZENIA 60   /* 1 -  600 sekund */

//#define TEST_LED















//DONT TOUCH IT!

#ifndef WYBUDZENIE_POZIOMEM_SILY
    #ifndef WYBUDZENIE_KLIK_KLAK
        #error "Wybierz metode wybudzenia"
    #endif
#endif

#ifdef WYBUDZENIE_POZIOMEM_SILY
    #ifdef WYBUDZENIE_KLIK_KLAK
        #error "Wybierz tylko jedna metode wybudzenia"
    #endif
#endif

#if SILA_WYBUDZENIA < 2 || SILA_WYBUDZENIA > 100
    #error "Bad wakeup value"
#endif

#if CZAS_WYLACZENIA < 1 || CZAS_WYLACZENIA > 600
    #error "Bad time value"
#endif


#define THS_CALC_VAL (uint8_t)(SILA_WYBUDZENIA*1.273-0.272)
//#define CZAS_RUCHU 99     /* 1 -100% */
//#define CLICK_TIME_LIMIT (uint8_t)(CZAS_RUCHU*1.273 - 0.272)
//#define BREAK_TIME 10          /* 1 - 255 */

#include <xc.h> // include processor files - each processor file is guarded.  

// TODO Insert appropriate #include <>

// TODO Insert C++ class definitions if appropriate

// TODO Insert declarations

// Comment a function and leverage automatic documentation with slash star star
/**
    <p><b>Function prototype:</b></p>
  
    <p><b>Summary:</b></p>

    <p><b>Description:</b></p>

    <p><b>Precondition:</b></p>

    <p><b>Parameters:</b></p>

    <p><b>Returns:</b></p>

    <p><b>Example:</b></p>
    <code>
 
    </code>

    <p><b>Remarks:</b></p>
 */
// TODO Insert declarations or function prototypes (right here) to leverage 
// live documentation

#ifdef	__cplusplus
extern "C" {
#endif /* __cplusplus */

    // TODO If C++ is being used, regular C code needs function names to have C 
    // linkage so the functions can be used by the c code. 

#ifdef	__cplusplus
}
#endif /* __cplusplus */

#endif	/* XC_HEADER_TEMPLATE_H */

