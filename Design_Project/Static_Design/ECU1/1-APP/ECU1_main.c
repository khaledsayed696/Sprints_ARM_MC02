
/* Standard includes. */

/* Scheduler includes. */

/* Peripheral includes. */


 //-------------------------------------------------
 // Global Variables
 //-------------------------------------------------

 
/*-----------------------------------------------------------*/



void Door_State (void *pvParameters)
{
	
    for( ;; )
    {
       /*Writr COde here*/

    }
}

 void LightSwitch_State (void *pvParameters)
{
	
    for( ;; )
    {
		/*Write COde here*/
    }
		
}	
void Speed_state  (void *pvParameters)
{
	
    for( ;; )
    {
					/*Write COde here*/
    }
	 
}


int main( void )
{
	prvSetupHardware();

 xTaskPeriodicCreate( Door_State,
											( const char * ) "Door_State",
											100,
											NULL,
											1,
											xButton_Task1,
											xPeriod_Task1 );
 
 xTaskPeriodicCreate( LightSwitch_State,
										( const char * ) "LightSwitch_State",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task2 );
										
xTaskPeriodicCreate( Speed_state,
										( const char * ) "Speed_state",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task3 );

 vTaskStartScheduler();


	/* Should never reach here!  If you do then there was not enough heap
	available for the idle task to be created. */
	for( ;; );
}
/*-----------------------------------------------------------*/

/* Implement Tick Hook*/
void vApplicationTickHook( void )
{
	/*Write COde here*/
}
/* Implement Idle Hook*/

void vApplicationIdleHook( void ){

}

/* Function to reset timer 1 */
void timer1Reset(void)
{
	/*Write COde here*/
}

/* Function to initialize and start timer 1 */
static void configTimer1(void)
{
	/*Write COde here*/
}

static void prvSetupHardware( void )
{
	/*Write COde here*/
}
/*-----------------------------------------------------------*/

