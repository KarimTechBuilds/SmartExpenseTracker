//
// Created by karim on 02/10/2025.
//

#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H
#include "Expense.h"
#include <vector>
using namespace std;


class ExpenseManager {
public:
    int totalExpense;
    int repeatNumber;
    ExpenseManager();
    vector<Expense> expenses;
    int calculateTotalExpense();
    void loadExpense(const string& targetDate);
    void editExpense(const string& targetDate, const string& newExpenseLine);
    void removeExpense(const string& targetDate, const int& expenseNumber);
    void addExpense(const Expense& expense, const string& line);
    void displayAllExpenses();
    void displayExpensePeriod(const string& date);
};



#endif //EXPENSEMANAGER_H
