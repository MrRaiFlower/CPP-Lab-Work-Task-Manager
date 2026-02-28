#pragma once

#include <iostream>
#include <vector>
#include <functional>
#include <cstdlib>

void RunTaskManager(const std::vector<std::function<void()>>& tasks);

#if defined(RUN_TASK_MANAGER)

void RunTaskManager(const std::vector<std::function<void()>>& tasks)
{
    int n;

    chooseTask:

    std::cout << "Enter task number:\n> ";
    std::cin >> n;

    if (n < 1 || n > tasks.size())
    {
        std::system("cls");
        std::cout << "Invalid task number.\n";
        goto chooseTask;
    }

    std::system("cls");
    tasks[n - 1]();

    std::cout << "\n\nContinue? (1/0)\n> ";
    std::cin >> n;

    if (n == 1)
    {
        std::system("cls");
        goto chooseTask;
    }

    std::system("cls");
}

#endif // defined(RUN_TASK_MANAGER)
