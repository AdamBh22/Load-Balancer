cmake_minimum_required(VERSION 3.10)
project(Load_Balancer)

# Set the C++ standard to C++14
set(CMAKE_CXX_STANDARD 14)
set(CMAKE_CXX_STANDARD_REQUIRED True)

# Include the source directory for header files
include_directories(include)

# Add the main executable
add_executable(Load_Balancer
    src/Core.cpp
    src/CoreManager.cpp
    src/LoadBalancer.cpp
    src/main.cpp
    src/Task.cpp
    src/TaskManager.cpp
)

# Enable testing
enable_testing()

# Add the test executable and include the source files required for tests
add_executable(runTests
    tests/test_TaskManager.cpp
    tests/test_CoreManager.cpp
    tests/test_LoadBalancer.cpp
    # Add the source files that implement the functionality
    src/Core.cpp
    src/CoreManager.cpp
    src/LoadBalancer.cpp
    src/Task.cpp
    src/TaskManager.cpp
)

# Find and link GoogleTest (assuming it's installed globally via apt-get)
find_package(GTest REQUIRED)

# Link GoogleTest to the test executable
target_link_libraries(runTests GTest::GTest GTest::Main)

# Add tests to CTest
add_test(NAME TaskManagerTest COMMAND runTests)
