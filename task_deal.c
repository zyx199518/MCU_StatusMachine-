#include <stdio.h>
#include <windows.h>
#include "task_deal.h"


//任务列表
TaskProcessFun task_list[20];
volatile int task_step_num = 0;

//任务动作
int operation_list[100][3] = {0}; 
int (*operation_ptr)[3];
volatile int operation_step_num = 0;
volatile unsigned long current_operation_time_consumption = 0;
void TaskStartProcess()
{
	printf("Start Process\n");
	Sleep(1000);
	return;
}
void ConfirmTasks()
{
	printf("Confirm Tasks\n");
	Sleep(1000);

	//if (Usart1ReceiveComplete())
	//{
	//	ProtocolParse();
	//	TaskDistribution();
	//}

	//operation_ptr = operation_list;
	//*(*(  operation_ptr) + 0)   = CAR_STEP,          *(*operation_ptr + 1) = CAR_STEP_7,         *(*operation_ptr + 2) = 0;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_1,  *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_13, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_14, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_15, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_16, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_17, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_18, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_19, *(*operation_ptr + 2) = 1;
	//*(*(++operation_ptr) + 0) = THROUGHPUT_STEP,     *(*operation_ptr + 1) = THROUGHPUT_STEP_1,  *(*operation_ptr + 2) = 0;
	//*(*(++operation_ptr) + 0) = 0;



	return;
}
void ReplyProcess()
{
	printf("Reply Process\n");
	Sleep(1000);
	return;
}

void MainTaskProcess()
{
	//static uint8_t step = 0;
	//if (GetTickCount() - Systick > 1000)
	//{
	//	Systick = GetTickCount();
	//	Flag = ~Flag;
	//}  //任务最长执行时间


	//switch (operation_list[step][0])
	//{
	//case 0:
	//	/**任务结束流程**/
	//	return;

	//case 1://对象
	//	switch (task_list[step][1])  //对象动作
	//	{
	//	case 0:
	//		return;

	//	case 1:
	//		return;

	//	default:
	//		return;
	//	}
	//	return;
	//default:
	//	return;
	//}


	printf("MainTask Process\n");
	Sleep(1000);
	return;
}


void TaskEndProcess()
{
	printf("End Process\n");
	Sleep(1000);
	return;
}
