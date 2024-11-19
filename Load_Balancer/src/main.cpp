#include "TaskManager.h"
#include "CoreManager.h"
#include "LoadBalancer.h"
#include <iostream>

int main() {
    TaskManager taskManager;
    LoadBalancer loadBalancer;

    int nbTasks, nbCores;
    std::cin >> nbTasks >> nbCores;

    for (int i = 1; i <= nbTasks; ++i) {
        int arrivalTime, executionTime;
        std::string description;
        std::cin >> arrivalTime >> executionTime >> description;
        Task task(arrivalTime, executionTime, description);
        taskManager.addTask(task);
    }

    CoreManager coreManager(nbCores);
    loadBalancer.addAllTasks(taskManager, coreManager);

    for (int i = 1; i <= nbCores; ++i) {
        coreManager.printCoreInformation(i);
    }

    return 0;
}
