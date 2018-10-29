#ifndef _TASK_DEAL_H_
#define _TASK_DEAL_H_


typedef void(*TaskProcessFun)(void);    //任务处理函数指针类型定义
extern TaskProcessFun task_list[20];    //并行任务列表
extern volatile int task_step_num;      //当前任务位置



extern int operation_list[100][3];      //顺序动作列表
extern int (*operation_ptr)[3];         //动作列表指针
extern volatile int operation_step_num; //当前动作位置
extern volatile unsigned long current_operation_time_consumption;//当前动作损耗时间


void ConfirmTasks();
void ReplyProcess();

void TaskStartProcess();
void TaskEndProcess();

void MainTaskProcess();

#endif



