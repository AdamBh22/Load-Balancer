#include "TaskManager.h"

void TaskManager::addTask(Task& task) {
    tasks.push(task);
}

int TaskManager::getNumberOfTasks() const {
    return tasks.size();
}

Task TaskManager::getNextTask() {
    if (!tasks.empty()) {
        Task nextTask = tasks.top();
        tasks.pop();
        return nextTask;
    }
    throw std::out_of_range("No tasks available");
}
