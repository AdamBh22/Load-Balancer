#ifndef CORE_MANAGER_H
#define CORE_MANAGER_H

#include "Core.h"
#include <vector>
#include <algorithm>
#include <iostream>

class CoreManager {
private:
    std::vector<Core> cores;

public:
    CoreManager(int numberCores);

    Core& getBestCore();
    void printCoreState() const;
    void printCoreInformation(int coreID) const;
};

#endif
