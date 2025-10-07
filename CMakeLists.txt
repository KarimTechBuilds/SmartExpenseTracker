cmake_minimum_required(VERSION 3.31)
project(Smart__Expense_Tracker_CLI)

set(CMAKE_CXX_STANDARD 20)

add_executable(Smart__Expense_Tracker_CLI main.cpp
        "Cpp Files/Expense.cpp"
        "Header Files/Expense.h"
        "Cpp Files/ExpenseManager.cpp"
        "Header Files/ExpenseManager.h"
        "Cpp Files/ReportGenerator.cpp"
        "Header Files/ReportGenerator.h"
        "Cpp Files/Utils.cpp"
        "Header Files/Utils.h")
