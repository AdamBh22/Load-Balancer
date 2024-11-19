# CMake generated Testfile for 
# Source directory: C:/WORK_DIR/Load_Balancer
# Build directory: C:/WORK_DIR/Load_Balancer/cmake-build-debug
# 
# This file includes the relevant testing commands required for 
# testing this directory and lists subdirectories to be tested as well.
add_test([=[TaskManagerTest]=] "C:/WORK_DIR/Load_Balancer/cmake-build-debug/runTests.exe")
set_tests_properties([=[TaskManagerTest]=] PROPERTIES  _BACKTRACE_TRIPLES "C:/WORK_DIR/Load_Balancer/CMakeLists.txt;49;add_test;C:/WORK_DIR/Load_Balancer/CMakeLists.txt;0;")
subdirs("_deps/googletest-build")
