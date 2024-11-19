#include "LoadBalancer.h"

void LoadBalancer::assignTaskToCore(Task& task, CoreManager& coreManager) {
    Core& bestCore = coreManager.getBestCore();
    bestCore.assignTask(task);
}

void LoadBalancer::addAllTasks(TaskManager& taskManager, CoreManager& coreManager) {
    int numberOfTasks = taskManager.getNumberOfTasks();
    for (int i = 0; i < numberOfTasks; ++i) {
        Task nextTask = taskManager.getNextTask();
        assignTaskToCore(nextTask, coreManager);
    }
}
