/*****************************************************************************
* University of Southern Denmark
* Embedded C Programming (ECP)
*
* MODULENAME.: tmodel.h
*
* PROJECT....: ECP
*
* DESCRIPTION: Defines the elements of the task model..
*
* Change Log:
******************************************************************************
* Date    Id    Change
* YYMMDD
* --------------------
* 101004  MoH   Module created.
*
*****************************************************************************/

#ifndef _TMODEL_H_
#define _TMODEL_H_

// Tasks.
// ------
#define TASK_SW_TIMERS 11
#define TASK_MENU_MODE 12
#define TASK_BUTTON 13
#define TASK_RTC 14
#define TASK_RTC_ADJUST 14
#define TASK_RTC_DISPLAY 15
#define TASK_LCD 16

// Interrupt Service Routines.
// ---------------------------
#define ISR_TIMER 21

// Shared State Memory.
// --------------------
#define SSM_MENU_MODE 31
#define SSM_TIME_SEC 32
#define SSM_TIME_MIN 33
#define SSM_TIME_HOURS 34

// Shared Event Buffers.
// ---------------------
#define SEB_BUTTON_EVENT_MENU_MODE 41
#define SEB_BUTTON_EVENT_RTC_ADJUST 42
#define SEB_TO_BUTTON 43 // Time Out
#define SEB_TO_RTC 44 // Time Out
#define SEB_TO_DISPLAY 45 // Time Out

// QUEUEs.
// -------
#define Q_OUTPUT 1

// Menu Modes.
// --------------------
#define MM_ADJUST   1
#define MM_AUTO     2

// Software Timers.
// ----------------
#define ST_BUTTON   1
#define ST_RTC      2
#define ST_DISPLAY  3

#endif /* _TMODEL_H_ */
