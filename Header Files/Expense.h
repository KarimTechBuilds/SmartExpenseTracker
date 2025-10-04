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
    Expense(string line) {
        parseExpenseLine(line);
    }
    void parseExpenseLine(string line);
    void saveExpense(string line);
    void displayExpense();
};



#endif //EXPENSE_H
