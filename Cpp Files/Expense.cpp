//
// Created by karim on 02/10/2025.
//
#include <iostream>
#include<sstream>
#include "../Header Files/Expense.h"
using namespace std;

string Expense::parseExpenseLine(string line) {
    istringstream stream(line);
    string string_amount;
    getline(stream, string_amount, '-');
    getline(stream, category,'-');
    getline(stream, date, '-');
    return string_amount;
}


int Expense::extractAmount(string a) {
    amount=stoi(parseExpenseLine(a));
    return amount;
}

string Expense::extractCategory(string c) {
    return category;
}

string Expense::extractDate(string d) {
    return date;
}



