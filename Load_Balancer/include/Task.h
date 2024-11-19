#ifndef TASK_H
#define TASK_H

#include <string>
#include <iostream>

class Task {
private:
    int arrivalTime;
    int executionTime;
    int remainingTime;
    std::string description;
    bool isAssigned;

public:
    Task(int arrivalTime, int executionTime, const std::string& description);
    int getArrivalTime() const;
    int getExecutionTime() const;
    int getRemainingTime() const;
    std::string getDescription() const;
    void assignTask();
    void reduceTime(int time);
    void printTaskInformation() const;
    bool operator<(const Task& other) const;
};

#endif