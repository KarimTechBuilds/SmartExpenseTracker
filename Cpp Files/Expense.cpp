//
// Created by karim on 02/10/2025.
//
#include <iostream>
#include <sstream>
#include <fstream>
#include "../Header Files/Expense.h"
using namespace std;

void Expense::parseExpenseLine(string line) {
    istringstream stream(line);
    string string_amount;
    getline(stream, string_amount, '-');
    amount=stoi(string_amount);
    getline(stream, category,'-');
    getline(stream, date, '-');
    getline(stream, description, '-');
}

void Expense::saveExpense(string line) {
    ofstream expenseFile("Expense.txt", ios::app);
    expenseFile << line;
    cout << "Expense saved." << endl;
}

void Expense::displayExpense() {
    cout << "Date: " << date << "\n"
    << "Category: "<< category <<"\n"
    <<"Expense: " << amount <<"\n"
    << "Description: " << description << endl;
}