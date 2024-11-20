Load-Balancer
This project is a Load Balancer simulation implemented in C++, focusing on efficient task distribution and resource management. By leveraging object-oriented programming principles, the application simulates a robust load-balancing mechanism using key classes that model tasks, cores, and management components. It ensures reliability through rigorous unit testing using GoogleTest.

Key Features
Task Management:
The Task class encapsulates individual tasks with attributes like arrivalTime, Description, and execution time. The TaskManager class oversees the creation and queuing of all tasks in the system.

Core Management:
The Core class represents individual processing units capable of handling assigned tasks. The CoreManager class is responsible for maintaining and monitoring the pool of available cores.

Load Balancing:
The LoadBalancer class efficiently assigns tasks to cores, ensuring an even distribution of workload and preventing individual cores from overloading.

Unit Testing with GoogleTest:
The project integrates comprehensive unit tests to validate task scheduling, load balancing logic, and core management, ensuring robustness and maintainability.

Class Design
1. Task
Represents an individual computational task with properties like:

arrival Time
Execution time
RemainingTime
Description
2. Core
Represents a single processing unit with attributes such as:

Core ID
Workload
Task queue
3. TaskManager
Manages all tasks in the system, with functionalities to:

Add tasks.
fetch the next task
4. CoreManager
Handles the pool of processing cores, with capabilities to:

Assign the coming Task to the Core having the least Workload
5. LoadBalancer
Distributes tasks among cores using efficient algorithms, ensuring:

Equal workload distribution.
Handling of task overflow.
How It Works
The TaskManager generates and queues tasks.
The CoreManager initializes a pool of cores, each capable of processing tasks.
The LoadBalancer assigns tasks to cores ensuring optimal performance and preventing overloads.
The system continuously monitors tasks and core statuses.

Technology Stack
Language: C++
Build System: CMake for project configuration and build automation.
Testing Framework: GoogleTest for unit testing.

Setup and Execution

Clone the repository:
bash
Copy code
git clone https://github.com/AdamBh22/Load-Balancer.git
cd load-balancer

Build the project using your preferred C++ compiler (e.g., g++ or clang++):
bash
Copy code
g++ -o load_balancer main.cpp Task.cpp Core.cpp TaskManager.cpp CoreManager.cpp LoadBalancer.cpp -lgtest -lpthread
Run the simulation:
bash
Copy code
./load_balancer
Run the tests:
bash
Copy code
./run_tests


