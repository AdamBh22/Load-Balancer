cmake_minimum_required(VERSION 3.29)
project(Load_Balancer)

set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -std=c++14")
include_directories(include)

add_executable(Load_Balancer
    include/Core.h
    include/CoreManager.h
    include/LoadBalancer.h
    include/Task.h
    include/TaskManager.h
    src/Core.cpp
    src/CoreManager.cpp
    src/LoadBalancer.cpp
    src/main.cpp
    src/Task.cpp
    src/TaskManager.cpp
        tests/test_TaskManager.cpp
        tests/test_CoreManager.cpp
        tests/test_LoadBalancer.cpp)

# Include the GoogleTest headers directory
include_directories("C:/MinGW/googletest/googletest/include")

# Link to the directory containing the compiled gtest library
link_directories("C:/WORK_DIR/Load_Balancer/lib")

# Enable testing
enable_testing()

# Define the test executable
add_executable(runTests
        tests/test_TaskManager.cpp
        tests/test_CoreManager.cpp
        tests/test_LoadBalancer.cpp
)

# Link GoogleTest to your test executable
target_link_libraries(runTests gtest gtest_main)

# Add tests to CTest
add_test(NAME TaskManagerTest COMMAND runTests)


