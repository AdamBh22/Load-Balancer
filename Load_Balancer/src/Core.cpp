#include "Core.h"

Core::Core(int coreId) : coreId(coreId), totalWorkload(0) {}

int Core::getCoreId() const { return coreId; }
int Core::getTotalWorkload() const { return totalWorkload; }
bool Core::isAvailable() const { return tasks.empty(); }

void Core::assignTask(Task& task) {
    tasks.push_back(task);
    totalWorkload += task.getExecutionTime();
    task.assignTask();
}

void Core::updateWorkload() {
    totalWorkload = 0;
    for (const auto& task : tasks) {
        totalWorkload += task.getRemainingTime();
    }
}

void Core::coreInformation() const {
    std::cout << "The Core number " << coreId << " has " << tasks.size() << " tasks and a total Workload equal to " <<totalWorkload<< std::endl;
    for (const auto& task : tasks) {
        task.printTaskInformation();
    }
}

bool Core::operator<(const Core& other) const {
    if (totalWorkload == other.totalWorkload) 
        return coreId < other.coreId;
    return totalWorkload < other.totalWorkload;
}
