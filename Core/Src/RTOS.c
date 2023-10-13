#include "../Inc/RTOS.h"

/*Creating an array of OS tasks (from TaskTCB sruct)*/
TaskTCB Tasks[NUM_OF_TASKS];

/*Tick counts that will be incrementing every 1 ms*/
volatile uint16 tickCnt = 0;

void RTOS_Init(void)
{




}

void RTOS_CreateTask(uint8 priority, uint16 periodicity, void (*ptrToFunc)(void))
{
	/*Priorities corresponds to the array index in the OS tasks array*/
	Tasks[priority].Periodicity = periodicity;
	/*Assigning periodicity in the array of the given priority task*/
	Tasks[priority].ptrToFunc = ptrToFunc;
	/*Assigning pointers to Task subroutine*/
}

void RTOS_Scheduler(void)
{
	uint8 Taskscounter;
	/*Counter to loop over all tasks*/

	/*For loop to check if periodicity of the highest priority task corresponds to ticks count*/
	for(Taskscounter = 0; Taskscounter < NUM_OF_TASKS; Taskscounter++)
	{
		if((tickCnt % Tasks[Taskscounter].Periodicity) == 0)
			/*Periodicity of the highest priority task corresponds to tickCnt ie. multiples of tickCnt */
		{
			Tasks[Taskscounter].ptrToFunc();
			/*Calling the corresponding task*/
		}

		else
		{
			/*Do nothing*/
		}
	}

	/*Incrementing the tickCnt*/
}


