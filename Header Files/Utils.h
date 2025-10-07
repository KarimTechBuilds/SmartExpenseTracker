//
// Created by karim on 06/10/2025.
//

#ifndef SMART__EXPENSE_TRACKER_CLI_UTILS_H
#define SMART__EXPENSE_TRACKER_CLI_UTILS_H
#include <string>
using namespace std;

class Utils {
    public:
    string day_1, month_1, year_1;
    int day;
    int month;
    int year;
    int convertStringToInt(const string& date1);
};


#endif //SMART__EXPENSE_TRACKER_CLI_UTILS_H