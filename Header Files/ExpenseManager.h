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
    void loadExpense(string targetDate);
    void editExpense();
    void removeExpense(string targetDate);
    void addExpense();
};



#endif //EXPENSEMANAGER_H
