/*****************************************************************************
* University of Southern Denmark
* Embedded Programming (EMP)
*
* MODULENAME.: spi.c
*
* PROJECT....: Semesterprojekt 4
*
* DESCRIPTION: See module specification file (.h-file).
*
* Change Log:
*****************************************************************************
* Date    Id    Change
* YYMMDD
* --------------------
* 150215  MoH   Module created.
*
*****************************************************************************/

/***************************** Include files *******************************/
#include <stdint.h>
#include "tm4c123gh6pm.h"
#include "emp_type.h"
#include "spi.h"
/*****************************    Defines    *******************************/

/*****************************   Constants   *******************************/

/*****************************   Variables   *******************************/

/*****************************   Functions   *******************************/

void init_spi(void)
/*****************************************************************************
*   Input    :
*   Output   :
*   Function : The super loop.
******************************************************************************/
{
    int dummy;
    //Enable SSI module 0
    SYSCTL_RCGCSSI_R = SYSCTL_RCGCSSI_R0;

    dummy = SYSCTL_RCGCSSI_R;
    //for (int i = 0; i < 1000; i++)
    //{

    //}

    SSI0_CR1_R = 0x00; // Synchronous serial port disable (burde skrive ~(0x02) i stedet for 0x00)
    SSI0_CR1_R &= ~(0x04); // Sæt tiva som master
    SSI0_CC_R = SSI_CC_CS_SYSPLL; // Sæt til systemclock
    SSI0_CPSR_R = 0x02; // Prescaler med en devisor på 2


    // Sætter serial clock rate til 39, clock phase second edge, clock polarity steady state high, SPI, datasize 8 bit.
    SSI0_CR0_R = 0x27 | SSI_CR0_SPH | SSI_CR0_SPO | SSI_CR0_FRF_MOTO | SSI_CR0_DSS_8;
    SSI0_CR1_R = SSI_CR1_SSE; // Synchronous serial port enable.

}

/****************************** End Of Module *******************************/
