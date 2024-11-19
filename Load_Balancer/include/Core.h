#ifndef CORE_H
#define CORE_H

#include "Task.h"
#include <vector>
#include <iostream>

class Core {
private:
    int coreId;
    std::vector<Task> tasks;
    int totalWorkload;

public:
    Core(int coreId);
    int getCoreId() const;
    int getTotalWorkload() const;
    bool isAvailable() const;
    void assignTask(Task& task);
    void updateWorkload();
    void coreInformation() const;
    bool operator<(const Core& other) const;
};

#endif
