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
    string parseExpenseLine(string line);
    int extractAmount(string a);
    string extractDate(string d);
    string extractCategory(string c);
    void saveExpense(string line);
};



#endif //EXPENSE_H
