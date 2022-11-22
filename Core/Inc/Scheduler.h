/*
 * Scheduler.h
 *
 *  Created on: 21 Nov 2022
 *      Author: admin
 */
#include "main.h"
#ifndef INC_SCHEDULER_H_
#define INC_SCHEDULER_H_
extern int current_index_task;

void SCH_Init(void);

void SCH_Add_Task ( void (*pFunction)(), uint32_t DELAY, uint32_t PERIOD);

void SCH_Update(void);

void SCH_Dispatch_Tasks(void);

typedef struct {
    // Pointer to the task (must be a 'void (void)' function)
	void ( * pTask)(void);
	// Delay (ticks) until the function will (next) be run
	uint32_t Delay;
	// Interval (ticks) between subsequent runs.
	uint32_t Period;
	// Incremented (by scheduler) when task is due to execute
	uint8_t RunMe;
	//This is a hint to solve the question below.
	uint32_t TaskID;
} sTask;

// MUST BE ADJUSTED FOR EACH NEW PROJECT
#define SCH_MAX_TASKS 			40
#define	NO_TASK_ID				0
sTask SCH_tasks_G[SCH_MAX_TASKS];

#endif /* INC_SCHEDULER_H_ */
