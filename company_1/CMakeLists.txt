cmake_minimum_required(VERSION 3.27)
project(company_1)

set(CMAKE_CXX_STANDARD 17)

add_executable(company_1 main.cpp
        employee_1.h
        employee_1.cpp
        company.h
        company.cpp)
