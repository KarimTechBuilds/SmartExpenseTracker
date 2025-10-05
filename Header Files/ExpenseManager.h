//
// Created by karim on 02/10/2025.
//
#include "Expense.h"
#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H




class ExpenseManager {
public:
    int totalExpense;
    void calculateTotalExpense(Expense amount);
    void loadExpense(const string& targetDate);
    void editExpense(const string& targetDate, const string& newExpenseLine);
    void removeExpense(const string& targetDate);
    void addExpense();
};



#endif //EXPENSEMANAGER_H
