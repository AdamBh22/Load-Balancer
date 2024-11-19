#include "TaskManager.h"
#include <gtest/gtest.h>

TEST(TaskManagerTest, AddTaskIncreasesSize) {
    TaskManager taskManager;
    Task task1(1, 10, "Task 1");
    taskManager.addTask(task1);
    EXPECT_EQ(taskManager.getNumberOfTasks(), 1);
}

TEST(TaskManagerTest, GetNextTask) {
    TaskManager taskManager;
    Task task1(1, 10, "Task 1");
    Task task2(2, 5, "Task 2");
    taskManager.addTask(task1);
    taskManager.addTask(task2);
    Task nextTask = taskManager.getNextTask();
    EXPECT_EQ(nextTask.getDescription(), "Task 1");
    EXPECT_EQ(taskManager.getNumberOfTasks(), 1);
}
