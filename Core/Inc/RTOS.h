#ifndef	RTOS_H_
#define RTOS_H_
#include "Macros.h"
#include "std_types.h"

#define NUM_OF_TASKS 3
#define PRIORITY_0 	 0
#define PRIORITY_1	 1
#define PRIORITY_2	 2

typedef struct Tasks
{
	uint16 Periodicity;
	uint16 Delay;
	void (*ptrToFunc)(void);

}TaskTCB;


void RTOS_Scheduler(void);
void RTOS_CreateTask(uint8 priority, uint16 periodicity, void (*ptrToFunc)(void));


#endif
