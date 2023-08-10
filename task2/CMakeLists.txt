cmake_minimum_required(VERSION 3.24)
project(task2)

set(CMAKE_CXX_STANDARD 17)

add_executable(task2 Menu.h Menu.cpp Set.h Set.cpp  Main.cpp MyQueue.h MyQueue.cpp "../task 1/working/CashRegister.cpp")
