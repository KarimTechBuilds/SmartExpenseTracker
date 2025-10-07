//
// Created by karim on 02/10/2025.
//

#ifndef REPORTGENERATOR_H
#define REPORTGENERATOR_H
#include "Expense.h"
#include "ExpenseManager.h"


class ReportGenerator {
public:
    ReportGenerator();
    int periodExpense=0;
    void generateReport(const string& inputDate1, const string& inputDate2, ExpenseManager& manager);
    void generateReport(const string& category, ExpenseManager& manager);
    void exportExpenseList(const string& fileName, ExpenseManager& manager);
    void sortExpenseList(const string& sortType, ExpenseManager& manager);

};



#endif //REPORTGENERATOR_H
