#ifndef TASK_MANAGER_H
#define TASK_MANAGER_H

#include "Task.h"
#include <queue>
#include <stdexcept>

class TaskManager {
private:
    std::priority_queue<Task> tasks;

public:
    void addTask(Task& task);
    int getNumberOfTasks() const;
    Task getNextTask();
};

#endif