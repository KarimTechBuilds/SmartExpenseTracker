//
// Created by karim on 02/10/2025.
//
#include <iostream>
#include <sstream>
#include <fstream>
#include "../Header Files/Expense.h"

#include <vector>
using namespace std;

void Expense::parseExpenseLine(const string& line) {
    istringstream stream(line);
    string part;
    vector<string> parts;
    while (getline(stream, part, '-')) {
        parts.push_back(part);
    }
    if (parts.size()!=4) {
        cerr << "Error: Invalid expense format. Try again:" << endl;
        error=true;
        return;
    }
    string string_amount;
    getline(stream, string_amount, '-');
    try {
        amount=stoi(string_amount);
    } catch (const invalid_argument& e) {
        cerr << "Error: Invalid input format. Try again:" << endl;
        error=true;
        return;
    }

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