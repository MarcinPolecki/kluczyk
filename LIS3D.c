/*
 * File:   LIS3D.c
 * Author: polak
 *
 * Created on October 22, 2020, 5:44 PM
 */


#include <xc.h>
#include "LIS3D.h"
#include "mcc_generated_files/spi1.h"

/*
uint8_t LIS3D_read_register(uint8_t address)
{
    address |= 0x80;
    
    uint8_t buffer[2] = {0x00, 0x00};
    buffer[0] = address;
    
	if(!spi_master_open(MASTER0))
		return 0; 
	
	CS_SetLow();
	SPI1_ExchangeBlock(buffer, sizeof(buffer));
    CS_SetHigh();
    SPI1_Close();    
    
    return buffer[1];
}
*/

bool LIS3D_write_register(uint8_t address, uint8_t value)
{
    uint8_t buffer[2];
    buffer[0] = address;
    buffer[1] = value;
    
	if(!spi_master_open(MASTER0))
		return 0; 

	CS_SetLow();
    SPI1_ExchangeBlock(buffer, sizeof(buffer));
    CS_SetHigh();
    SPI1_Close();   
    
    return 1;
}