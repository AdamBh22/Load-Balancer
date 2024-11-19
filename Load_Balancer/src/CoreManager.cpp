#include "CoreManager.h"

CoreManager::CoreManager(int numberCores) {
    for (int i = 1; i <= numberCores; ++i) {
        cores.push_back(Core(i));
    }
}

Core& CoreManager::getBestCore() {
    return *std::min_element(cores.begin(), cores.end());
}

void CoreManager::printCoreState() const {
    for (const auto& core : cores) {
        std::cout << "Core ID: " << core.getCoreId()
                  << " | Workload: " << core.getTotalWorkload() << std::endl;
    }
}

void CoreManager::printCoreInformation(int coreID) const {
    const Core& core = cores[coreID - 1];
    core.coreInformation();
}
