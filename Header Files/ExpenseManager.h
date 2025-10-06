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
    vector<Expense> expenses;
    int calculateTotalExpense();
    void loadExpense(const string& targetDate);
    void editExpense(const string& targetDate, const string& newExpenseLine);
    void removeExpense(const string& targetDate);
    void addExpense(const Expense& expense, const string& line);
    void displayAllExpenses();
};



#endif //EXPENSEMANAGER_H
