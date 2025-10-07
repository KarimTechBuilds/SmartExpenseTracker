//
// Created by karim on 02/10/2025.
//

#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>
using namespace std;


class Expense{
public:
    double amount;
    bool error=false;
    string date;
    string category;
    string description;
    Expense(const string& line) {
        parseExpenseLine(line);
    }
    void parseExpenseLine(const string& line);
    void saveExpense() const;
    void displayExpense();
};



#endif //EXPENSE_H
