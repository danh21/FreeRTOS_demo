/*
	Description: 
		- TASK_2 runs first because its priority is greater than priority of TASK_1
		- TASK_2 and TASK_1 run one by one
*/



/* Libraries*/
#include <stdio.h>  
#include <conio.h>
#include "FreeRTOS.h"
#include "FreeRTOSConfig.h"
#include "task.h"
#include "timers.h"
#include "queue.h"



/* Prototypes */
void func_1(void*);
void func_2(void*);



/* Variables */
TaskHandle_t tsk1; // biến quản lý task
TaskHandle_t tsk2;



/* Main */
int main(void) {
	// param list: func to execute ; task name ; size of stack to store temp data of task ; additional arguments ; priority ; point to TaskHandle_t
	xTaskCreate(func_1, "TASK_1", configMINIMAL_STACK_SIZE, NULL, 2, &tsk1);
	xTaskCreate(func_2, "TASK_2", configMINIMAL_STACK_SIZE, NULL, 3, &tsk2); // 3>2
	vTaskStartScheduler();
	for (;;);
}



/* Sub functions */
void func_1(void* arg) {
	while (1) {
		printf("%s IS RUNNING----------------\n", pcTaskGetName(tsk1));
		int tickpermili = pdMS_TO_TICKS(10);			 // pdMS_TO_TICKS converts ms to ticks unit
		printf("10ms = %d TICK\n", tickpermili);
		vTaskDelay(pdMS_TO_TICKS(2000));				 // vTaskDelay set task state to sleep/blocked  

	}
}

void func_2(void* arg) {
	while (1) {
		printf("\n%s IS RUNNING----------------\n", pcTaskGetName(tsk2));
		vTaskDelay(pdMS_TO_TICKS(1500));
	}
}