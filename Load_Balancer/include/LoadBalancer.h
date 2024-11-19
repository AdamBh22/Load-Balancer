#ifndef LOAD_BALANCER_H
#define LOAD_BALANCER_H

#include "CoreManager.h"
#include "TaskManager.h"

class LoadBalancer {
public:
    void assignTaskToCore(Task& task, CoreManager& coreManager);
    void addAllTasks(TaskManager& taskManager, CoreManager& coreManager);
};

#endif