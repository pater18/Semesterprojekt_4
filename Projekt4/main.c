/*****************************************************************************
* University of Southern Denmark
* Embedded Programming (EMP)
*
* MODULENAME.: main.c
*
* PROJECT....: EMP
*
* DESCRIPTION: Assignment 2, main module. No main.h file.
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
#include "swtimers.h"
#include "systick.h"
#include "gpio.h"
#include "events.h"
#include "tmodel.h"
#include "messages.h"
#include "spi.h"

/*****************************    Defines    *******************************/

/*****************************   Constants   *******************************/

/*****************************   Variables   *******************************/
extern volatile INT16S ticks;
INT16S alive_timer = MILLISEC(500); // alive timer for status led

/*****************************   Functions   *******************************/
int main(void)
/*****************************************************************************
*   Input    :
*   Output   :
*   Function : The super loop.
******************************************************************************/
{
  disable_global_int();
  init_systick();
  init_gpio();
  init_swtimers();
  init_spi();
  enable_global_int();

  // Loop forever.
  while(1)
  {

      for (int i = 0; i < 1000; i++)
      {
          //nothing 
      }

  }
}

/****************************** End Of Module *******************************/
