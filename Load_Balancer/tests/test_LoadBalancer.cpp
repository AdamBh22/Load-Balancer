#include "LoadBalancer.h"
#include <gtest/gtest.h>

TEST(LoadBalancerTest, AssignTaskToCore) {
    CoreManager coreManager(2);
    Task task1(1, 10, "Task 1");
    LoadBalancer loadBalancer;
    EXPECT_NO_THROW(loadBalancer.assignTaskToCore(task1, coreManager));
}

TEST(LoadBalancerTest, AddAllTasks) {
    CoreManager coreManager(2);
    TaskManager taskManager;

    Task task1(1, 10, "Task 1");
    Task task2(2, 5, "Task 2");
    taskManager.addTask(task1);
    taskManager.addTask(task2);

    LoadBalancer loadBalancer;
    EXPECT_NO_THROW(loadBalancer.addAllTasks(taskManager, coreManager));
}
