cmake_minimum_required(VERSION 3.16)
project(MyQueueCoverage)

find_package(GTest REQUIRED)
include(GoogleTest)

option(ENABLE_COVERAGE "Enable coverage reporting" OFF)

add_library(MyQueue src/MyQueue.cpp)
target_include_directories(MyQueue PUBLIC src)

add_executable(MyQueueTests tests/TestMyQueue.cpp)
target_link_libraries(MyQueueTests MyQueue GTest::gtest_main)

enable_testing()
gtest_discover_tests(MyQueueTests)

if (ENABLE_COVERAGE AND CMAKE_CXX_COMPILER_ID MATCHES "GNU|Clang")
    target_compile_options(MyQueue PRIVATE --coverage -O0 -g)
    target_link_options(MyQueue PRIVATE --coverage)
    target_compile_options(MyQueueTests PRIVATE --coverage -O0 -g)
    target_link_options(MyQueueTests PRIVATE --coverage)
endif()
