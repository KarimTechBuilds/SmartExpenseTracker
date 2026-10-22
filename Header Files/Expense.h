//
// Created by karim on 02/10/2025.
//

#ifndef EXPENSE_H
#define EXPENSE_H
#include <string>



class Expense{
public:
    double amount;
    bool error=false;
    std::string date;
    std::string category;
    std::string description;
    Expense(const std::string& line) {
        parseExpenseLine(line);
    }
    void parseExpenseLine(const std::string& line);
    void saveExpense() const;
    void displayExpense();
};



#endif //EXPENSE_H
