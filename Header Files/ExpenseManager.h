//
// Created by karim on 02/10/2025.
//

#ifndef EXPENSEMANAGER_H
#define EXPENSEMANAGER_H
#include "Expense.h"
#include <vector>



class ExpenseManager {
public:
    int totalExpense;
    int repeatNumber;
    ExpenseManager();
    std::vector<Expense> expenses;
    int calculateTotalExpense();
    void loadExpense(const std::string& targetDate);
    void editExpense(const std::string& targetDate, const std::string& newExpenseLine);
    void removeExpense(const std::string& targetDate, const int& expenseNumber);
    void addExpense(const Expense& expense, const std::string& line);
    void displayAllExpenses();
    void displayExpensePeriod(const std::string& date);
};



#endif //EXPENSEMANAGER_H
