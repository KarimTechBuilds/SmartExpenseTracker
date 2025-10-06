//
// Created by karim on 02/10/2025.
//

#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>
using namespace std;


class Expense{
public:
    int amount;
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
