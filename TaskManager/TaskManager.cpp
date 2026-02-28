#include <iostream>
#define RUN_TASK_MANAGER
#include "TaskManager.h"

void task1();
void task2();
void task3();

int main()
{
    RunTaskManager({task1, task2, task3});
}

void task1()
{
    std::cout << "Task 1";
}

void task2()
{
    std::cout << "Task 2";
}

void task3()
{
    std::cout << "Task 3";
}