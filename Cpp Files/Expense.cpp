//
// Created by karim on 02/10/2025.
//
#include <iostream>
#include <sstream>
#include <fstream>
#include "../Header Files/Expense.h"
using namespace std;

void Expense::parseExpenseLine(const string& line) {
    istringstream stream(line);
    string string_amount;
    getline(stream, string_amount, '-');
    amount=stoi(string_amount);
    getline(stream, category,'-');
    getline(stream, date, '-');
    getline(stream, description, '-');
}

void Expense::saveExpense() const {
    ofstream expenseFile("Expense.txt", ios::app);
    expenseFile << amount << "-"<< category << "-" << date << "-" << description << endl;
    cout << "Expense saved." << endl;
}

void Expense::displayExpense() {
    cout << "Date: " << date << "-"<< "Category: "<< category << "-"<<"Expense: " << amount << "-" << "Description: " << description << endl;
}