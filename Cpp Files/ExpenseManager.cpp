//
// Created by karim on 02/10/2025.
//


#include <fstream>
#include "../Header Files/ExpenseManager.h"

#include <iostream>


void ExpenseManager::calculateTotalExpense(Expense expense) {
    totalExpense+= expense.amount;
}

void ExpenseManager::loadExpense(const string& targetDate) {
    bool found=false;
    string expenseLine;
    ifstream expenseFile("Expense.txt");
    expenseFile.is_open();
    while (getline(expenseFile, expenseLine)) {
        if (expenseLine.find(targetDate) != string::npos) {
            found=true;
            cout << "Expense corresponding to: "<< targetDate << "-->" << expenseLine << endl;
        }
    }
    if (!found) {
        cout << "Expense not found." << endl;
    }
    expenseFile.close();
}

void ExpenseManager::removeExpense(const string& targetDate) {
    ifstream readFile("Expense.txt");
    ofstream writeFile("Temp.txt");
    string expenseLine;
    if (!readFile || !writeFile) {
        cout << "Error opening file." << endl;
        return;
    }
    bool deleted=false;
    while (getline(readFile, expenseLine)) {
        if (expenseLine.find(targetDate) == string::npos) {
            writeFile << expenseLine << endl;
        }
        else {
            deleted=true;
        }
    }
    readFile.close();
    writeFile.close();
    remove("Expense.txt");
    rename("Temp.txt", "Expense.txt");

    if (deleted) {
        cout << "Expense on date: " << targetDate << " deleted." << endl;
    }
    else {
        cout << "Expense not found." << endl;
    }
}

void ExpenseManager::editExpense(const string& targetDate, const string& newExpenseLine) {
    ifstream readFile("Expense.txt");
    ofstream writeFile("Temp.txt");
    string expenseLine;
    bool edited=false;
    while (getline(readFile, expenseLine )) {
        if (expenseLine.find(targetDate) == string::npos) {
            writeFile << expenseLine << endl;
        }
        else {
            writeFile << newExpenseLine << endl;
            edited=true;
        }
    }
    readFile.close();
    writeFile.close();
    remove("Expense.txt");
    rename("Temp.txt", "Expense.txt");
    if (edited) {
        cout << "Expense at date:"  << targetDate << " edited to: " << newExpenseLine << endl;
    }
}

void addExpense() {

}