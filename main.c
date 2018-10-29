#include <stdio.h>
#include "main.h"

int main()
{
	task_list[0] = TaskStartProcess;
	task_list[1] = ConfirmTasks;
	task_list[2] = MainTaskProcess;
	task_list[3] = ReplyProcess;
	task_list[4] = TaskEndProcess;

	TaskProcessFun(*task_list_ptr);

	//printf("%d",sizeof(long long));
	while (1)
	{
		//task_step_num = 0;
		//while (task_list[task_step_num] != TaskEndProcess)
		//{
		//	(*task_list[task_step_num++])();
		//}

		task_list_ptr = task_list;
		while ((*task_list_ptr) != TaskEndProcess)
		{
			(*(task_list_ptr++))();
		}

		(*task_list_ptr)();
	}
	system("pause");
}
