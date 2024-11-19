#include "Task.h"

Task::Task(int arrivalTime, int executionTime, const std::string& description)
    : arrivalTime(arrivalTime), executionTime(executionTime), remainingTime(executionTime),
      description(description), isAssigned(false) {}

int Task::getArrivalTime() const { return arrivalTime; }
int Task::getExecutionTime() const { return executionTime; }
int Task::getRemainingTime() const { return remainingTime; }
std::string Task::getDescription() const { return description; }

void Task::assignTask() { isAssigned = true; }

void Task::reduceTime(int time) {
    if (remainingTime > time) 
        remainingTime -= time;
}

void Task::printTaskInformation() const {
    std::cout << description << " has arrived at " << arrivalTime << " with execution time equal to " << executionTime << std::endl;
}

bool Task::operator<(const Task& other) const {
    if (arrivalTime == other.arrivalTime) {
        return executionTime < other.executionTime;
    }
    return arrivalTime > other.arrivalTime;
}
