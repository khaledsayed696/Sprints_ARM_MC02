/*
 * FreeRTOS Kernel V10.2.0
 * Copyright (C) 2019 Amazon.com, Inc. or its affiliates.  All Rights Reserved.
 *
 * Permission is hereby granted, free of charge, to any person obtaining a copy of
 * this software and associated documentation files (the "Software"), to deal in
 * the Software without restriction, including without limitation the rights to
 * use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of
 * the Software, and to permit persons to whom the Software is furnished to do so,
 * subject to the following conditions:
 *
 * The above copyright notice and this permission notice shall be included in all
 * copies or substantial portions of the Software.
 *
 * THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 * IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS
 * FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR
 * COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER
 * IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN
 * CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.
 *
 * http://www.FreeRTOS.org
 * http://aws.amazon.com/freertos
 *
 * 1 tab == 4 spaces!
 */

/* 
	NOTE : Tasks run in system mode and the scheduler runs in Supervisor mode.
	The processor MUST be in supervisor mode when vTaskStartScheduler is 
	called.  The demo applications included in the FreeRTOS.org download switch
	to supervisor mode prior to main being called.  If you are not using one of
	these demo application projects then ensure Supervisor mode is used.
*/


/*
 * Creates all the demo application tasks, then starts the scheduler.  The WEB
 * documentation provides more details of the demo application tasks.
 * 
 * Main.c also creates a task called "Check".  This only executes every three 
 * seconds but has the highest priority so is guaranteed to get processor time.  
 * Its main function is to check that all the other tasks are still operational.
 * Each task (other than the "flash" tasks) maintains a unique count that is 
 * incremented each time the task successfully completes its function.  Should 
 * any error occur within such a task the count is permanently halted.  The 
 * check task inspects the count of each task to ensure it has changed since
 * the last time the check task executed.  If all the count variables have 
 * changed all the tasks are still executing error free, and the check task
 * toggles the onboard LED.  Should any task contain an error at any time 
 * the LED toggle rate will change from 3 seconds to 500ms.
 *
 */

/* Standard includes. */
#include <stdlib.h>
#include <stdio.h>

/* Scheduler includes. */
#include "FreeRTOS.h"
#include "task.h"
#include "lpc21xx.h"

/* Peripheral includes. */
#include "serial.h"
#include "GPIO.h"
#include "semphr.h"


 //-------------------------------------------------
 // Global Variables
 //-------------------------------------------------

 #define CAPACITY 3 //cpu time in tick
 #define A_PERIOD 11 //task A period
 #define B_PERIOD 15 //task B period
/*-----------------------------------------------------------*/

/* Constants to setup I/O and processor. */
#define mainBUS_CLK_FULL	( ( unsigned char ) 0x01 )

/* Constants for the ComTest demo application tasks. */
#define mainCOM_TEST_BAUD_RATE	( ( unsigned long ) 115200 )


/*
 * Configure the processor for use with the Keil demo board.  This is very
 * minimal as most of the setup is managed by the settings in the project
 * file.
 */
static void prvSetupHardware( void );
/*-----------------------------------------------------------*/
TaskHandle_t xToggle_Task = NULL;
TaskHandle_t xToggle_Task1 = NULL;
TaskHandle_t xToggle_Task2 = NULL;

BaseType_t xReturned_Toggle;

pinState_t curr_buttonState ; 
pinState_t prev_buttonState = PIN_IS_LOW ;

TaskHandle_t xButton_Task1 = NULL;
TaskHandle_t xButton_Task2 = NULL;
TaskHandle_t xPeriodic_Task = NULL;
TaskHandle_t xUart_Task = NULL;
TaskHandle_t xLoadSimu_Task1 = NULL;
TaskHandle_t xLoadSimu_Task2 = NULL;
BaseType_t xReturned_Button;
BaseType_t xReturned_Button1;
BaseType_t xReturned_Button2;
SemaphoreHandle_t xSemaphor;
//extern TickType_t xLastWakeTime;
const TickType_t xFrequency1 = 50;
const TickType_t xFrequency2 = 50;
const TickType_t xFrequency3 = 110;

volatile int MissTime=0 , StartTime=0, EndTime =0;

extern int task_1_in_time=0  , task_1_out_time=0  , task_1_total_time=0;
extern int task_2_in_time=0  , task_2_out_time=0  , task_2_total_time=0;
extern int task_3_in_time=0  , task_3_out_time=0  , task_3_total_time=0;
extern int task_4_in_time=0  , task_4_out_time=0  , task_4_total_time=0;
extern int task_5_in_time=0  , task_5_out_time=0  , task_5_total_time=0;
extern int task_6_in_time=0  , task_6_out_time=0  , task_6_total_time=0;
extern int system_time=0  , cpu_load=0;
char runTimeStatsBuff[190];
/* Task to be created. */

signed char Button1_Monitor = 0;
signed char Button2_Monitor = 0;
char Pc_String[30];
/*EDF Scedular */
const extern TickType_t	xPeriod_Task1 = 50;
const extern TickType_t	xPeriod_Task2 = 50;
const extern TickType_t	xPeriod_Task3 = 100;
const extern TickType_t	xPeriod_Task4 = 20;
const extern TickType_t	xPeriod_Task5 = 10;
const extern TickType_t	xPeriod_Task6 = 100;

QueueHandle_t xQueue1 = NULL;
QueueHandle_t xQueue2 = NULL;
QueueHandle_t xQueue3 = NULL;

void Button_1_Monitor (void *pvParameters)
{
	/* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. 
    configASSERT( ( ( uint32_t ) pvParameters ) == 1 );
		*/
	int i;
	pinState_t prev_buttonState = PIN_IS_LOW;
		TickType_t xLastWakeTime = xTaskGetTickCount();
		

     // Initialise the xLastWakeTime variable with the current time.
	 vTaskSetApplicationTaskTag( NULL, ( void * ) 1 );
    for( ;; )
    {
        /* Task code goes here. */			
		curr_buttonState = GPIO_read(PORT_0,PIN0 );
			//GPIO_write(PORT_0, PIN1, PIN_IS_LOW);
			if(curr_buttonState != prev_buttonState)
			{
					Button1_Monitor = 'R';
			//	GPIO_write(PORT_0, PIN3, PIN_IS_HIGH);
			}
			else
			{
					Button1_Monitor = 'F';
				//	GPIO_write(PORT_0, PIN3, PIN_IS_LOW);
			}
			prev_buttonState = curr_buttonState;
			xQueueOverwrite( xQueue1 , &Button1_Monitor );
			//GPIO_write(PORT_0, PIN1, PIN_IS_HIGH);
			vTaskDelayUntil( &xLastWakeTime, 50  );
							//vTaskDelay(50);

    }
}
 void Button_2_Monitor (void *pvParameters)
{
	/* The parameter value is expected to be 1 as 1 is passed in the
    pvParameters value in the call to xTaskCreate() below. 
    configASSERT( ( ( uint32_t ) pvParameters ) == 1 );
		*/
	int i;
		pinState_t prev_buttonState = PIN_IS_LOW;
		TickType_t xLastWakeTime = xTaskGetTickCount();
	

     // Initialise the xLastWakeTime variable with the current time.
	 vTaskSetApplicationTaskTag( NULL, ( void * ) 2 );
	//GPIO_write(PORT_0, PIN2, PIN_IS_LOW);
    for( ;; )
    {
        /* Task code goes here. */
			curr_buttonState = GPIO_read(PORT_0,PIN0 );
			if(curr_buttonState != prev_buttonState)
			{
					Button2_Monitor = 'R';
			}
			else
			{
					Button2_Monitor = 'F';
			}
			prev_buttonState = curr_buttonState;
			xQueueOverwrite( xQueue2 , &Button2_Monitor );
			//GPIO_write(PORT_0, PIN2, PIN_IS_HIGH);
		vTaskDelayUntil( &xLastWakeTime, 50  );
						

    }
		
	}	
void Periodic_Transmitter (void *pvParameters)
{
	int i;
	//	xLastWakeTime = xTaskGetTickCount();
		TickType_t xLastWakeTime = xTaskGetTickCount();
	 vTaskSetApplicationTaskTag( NULL, ( void * ) 3 );
	
    for( ;; )
    {
					vSerialPutString("String",20);
					xSerialPutChar('\n');
			vTaskDelayUntil( &xLastWakeTime, 100  );
    }
	 
}

void UART_Recive(void *pvParameters)
{
		TickType_t xLastWakeTime = xTaskGetTickCount();
		signed char Button1;
		signed char Button2;
		char Rx_String[30];
	
		vTaskSetApplicationTaskTag( NULL, ( void * ) 4 );

    for( ;; )
    {
				if( xQueueReceive( xQueue1,&( Button1 ),( TickType_t ) 10 ) == pdPASS )
				{
						if(Button1=='R')
				{
								vSerialPutString("Rising1",30);
								xSerialPutChar('\n');
				}
				else
				{
								vSerialPutString("Faling1",30);
								xSerialPutChar('\n');
				}
				
			if( xQueueReceive( xQueue2,&( Button2 ),( TickType_t ) 0 ) == pdPASS )
			{
					if(Button1=='R')
					{
									vSerialPutString("Rising2",30);
									xSerialPutChar('\n');
					}
				else
				{
								vSerialPutString("Faling2",30);
								xSerialPutChar('\n');
				}
					
			}
					
				
					vTaskDelayUntil( &xLastWakeTime,20);
						//vTaskDelay(100);

    }
	 
}
		}

void Load_1_Simulation (void *pvParameters)
{
	int i;
	//	xLastWakeTime = xTaskGetTickCount();
		TickType_t xLastWakeTime = xTaskGetTickCount();
	 vTaskSetApplicationTaskTag( NULL, ( void * ) 5 );
	
    for( ;; )
    {
					for( i=0 ; i<34000 ; i++)
			{
					i=i;
			}
			vTaskDelayUntil( &xLastWakeTime,10);
    }
			
	 
}
void Load_2_Simulation (void *pvParameters)
{
	int i;
	//	xLastWakeTime = xTaskGetTickCount();
		TickType_t xLastWakeTime = xTaskGetTickCount();
	 vTaskSetApplicationTaskTag( NULL, ( void * ) 6 );
	
    for( ;; )
    {
					
					for( i=0 ; i<80000 ; i++)
					{
						i=i;
					}
				vTaskDelayUntil( &xLastWakeTime,100);
    }
	 
}

/*
 * Application entry point:
 * Starts all the other tasks, then starts the scheduler. 
 */
int main( void )
{
	/* Setup the hardware for use with the Keil demo board. */
	prvSetupHardware();
//	prvInitialiseTaskLists();
	//xSemaphor=xSemaphoreCreateBinary();
	//xSemaphoreGive(xSemaphor);

/********************************************************************************************/
//SystemInit();
xQueue1 = xQueueCreate( 1, sizeof(char) );
xQueue2 = xQueueCreate( 1, sizeof(char) );
xQueue3 = xQueueCreate( 30, sizeof(char) );
 xTaskPeriodicCreate( Button_1_Monitor,
											( const char * ) "Button_1_Monitor",
											100,
											NULL,
											1,
											xButton_Task1,
											xPeriod_Task1 );
 
 xTaskPeriodicCreate( Button_2_Monitor,
										( const char * ) "Button_2_Monitor",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task2 );
										
xTaskPeriodicCreate( Periodic_Transmitter,
										( const char * ) "Button_2_Monitor",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task3 );
xTaskPeriodicCreate( UART_Recive,
										( const char * ) "Button_2_Monitor",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task4 );
					
xTaskPeriodicCreate( Load_1_Simulation,
										( const char * ) "Load_1_Simulation",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task5 );

										
xTaskPeriodicCreate( Load_2_Simulation,
										( const char * ) "Load_2_Simulation",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task6 );

							


 // FreeRTOS Scheduler starten
 vTaskStartScheduler();


	/* Should never reach here!  If you do then there was not enough heap
	available for the idle task to be created. */
	for( ;; );
}
/*-----------------------------------------------------------*/

/* Implement Tick Hook*/
void vApplicationTickHook( void )
{
GPIO_write(PORT_0, PIN7, PIN_IS_HIGH); 
	GPIO_write(PORT_0, PIN7, PIN_IS_LOW);
}
/* Implement Idle Hook*/

void vApplicationIdleHook( void ){

}

/* Function to reset timer 1 */
void timer1Reset(void)
{
	T1TCR |= 0x2;
	T1TCR &= ~0x2;
}

/* Function to initialize and start timer 1 */
static void configTimer1(void)
{
	T1PR = 1000;
	T1TCR |= 0x1;
}

static void prvSetupHardware( void )
{
	/* Perform the hardware setup required.  This is minimal as most of the
	setup is managed by the settings in the project file. */

	/* Configure UART */
	xSerialPortInitMinimal(mainCOM_TEST_BAUD_RATE);

	/* Configure GPIO */
	GPIO_init();
	
	/* Config trace timer 1 and read T1TC to get current tick */
	configTimer1();

	/* Setup the peripheral bus to be the same as the PLL output. */
	VPBDIV = mainBUS_CLK_FULL;
}
/*-----------------------------------------------------------*/

