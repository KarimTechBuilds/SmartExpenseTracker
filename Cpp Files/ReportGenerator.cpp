//
// Created by karim on 02/10/2025.
//

#include "../Header Files/ReportGenerator.h"



#include "../Header Files/Utils.h"
#include "../Header Files/ExpenseManager.h"
#include "../Header Files/Expense.h"
#include <algorithm>
#include <fstream>
#include <iostream>
using namespace std;

ReportGenerator::ReportGenerator() {}


void ReportGenerator::generateReport( const string& inputDate1, const string& inputDate2, ExpenseManager& manager) {
    periodExpense=0;
    Utils util;
    int start = util.convertStringToInt(inputDate1);
    int finish= util.convertStringToInt(inputDate2);
    if (start>finish) {
        cout << "Error: First date must be smaller than the second date." << endl;
        return;
    }
    cout << "Expense overview for the period betweeen " << inputDate1 << " and " << inputDate2 << endl;
    for (auto& expense: manager.expenses) {
        int currentDate= util.convertStringToInt(expense.date);
        if (start<=currentDate && currentDate<=finish) {
            expense.displayExpense();
            periodExpense+= expense.amount;
        }
    }
    cout << "Summary of expenses: " << periodExpense << endl;
}

void ReportGenerator::generateReport(const string& category, ExpenseManager& manager) {
    int times=0;
    periodExpense=0;
    for (auto& expense: manager.expenses) {
        if (category==expense.category) {
            expense.displayExpense();
            periodExpense+= expense.amount;
            times++;
        }
    }
    if (times==0) {
        cout << "No expense found." << endl;
    }
}

void ReportGenerator::sortExpenseList(const string& sortType, ExpenseManager& manager) {
    Utils util;
    if (sortType=="Category" || sortType=="category") {
        sort(manager.expenses.begin(), manager.expenses.end(),[](const Expense& a, const Expense& b) {
            return a.category < b.category;
        });
    }
    if (sortType=="Date" || sortType=="date") {
        sort(manager.expenses.begin(), manager.expenses.end(),[&](const Expense& a, const Expense& b) {
           return util.convertStringToInt(a.date)< util.convertStringToInt(b.date);
        });
    }
}

void ReportGenerator::exportExpenseList(const string& fileName, ExpenseManager& manager) {
    ofstream writerFile (fileName);
    string line;
    if  (!writerFile.is_open()) {
        cout << "Error opening file " << fileName << endl;
        return;
    }
    writerFile << "Amount/Category/Date/Description" << endl;
    for (const auto& expense: manager.expenses) {
        string safeDescription= expense.description;
        replace(safeDescription.begin(), safeDescription.end(), '/' , '|');
        writerFile << expense.amount << "/" << expense.category << "/"  << expense.date << "/" << safeDescription << endl;
    }
    writerFile << "Total: " << manager.totalExpense << endl;
    writerFile.close();
    cout << "Expenses saved to " << fileName << endl;
}