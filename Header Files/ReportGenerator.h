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
    void generateReport(const std::string& inputDate1, const std::string& inputDate2, ExpenseManager& manager);
    void generateReport(const std::string& category, ExpenseManager& manager);
    void exportExpenseList(const std::string& fileName, ExpenseManager& manager);
    void sortExpenseList(const std::string& sortType, ExpenseManager& manager);

};



#endif //REPORTGENERATOR_H
