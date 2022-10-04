
/* Standard includes. */


/* Scheduler includes. */


/* Peripheral includes. */

 //-------------------------------------------------
 // Global Variables
 //-------------------------------------------------

/*-----------------------------------------------------------*/


void Recive_Door_State (void *pvParameters)
{
	
    for( ;; )
    {
       /*Writr COde here*/

    }
}

 void Recive_LightSwitch_state (void *pvParameters)
{
	
    for( ;; )
    {
		/*Write COde here*/
    }
		
}	
void Recive_Speedstate  (void *pvParameters)
{
	
    for( ;; )
    {
					/*Write COde here*/
    }
	 
}


int main( void )
{
	prvSetupHardware();

 xTaskPeriodicCreate( Recive_Door_State ,
											( const char * ) "Door_States",
											100,
											NULL,
											1,
											xButton_Task1,
											xPeriod_Task1 );
 
 xTaskPeriodicCreate( Recive_LightSwitch_state  ,
										( const char * ) "Light_Switch",
										100,
										NULL,
										1,
										xButton_Task2,
										xPeriod_Task2 );
										
xTaskPeriodicCreate( Recive_LightSwitch_state ,
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
	/*Writr COde here*/
}
/* Implement Idle Hook*/

void vApplicationIdleHook( void )
{
	/*Writr COde here*/
}

/* Function to reset timer 1 */
void timer1Reset(void)
{
	/*Writr COde here*/
}

/* Function to initialize and start timer 1 */
static void configTimer1(void)
{
	/*Writr COde here*/
}

static void prvSetupHardware( void )
{
	/*Writr COde here*/
}
/*-----------------------------------------------------------*/

