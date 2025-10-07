//
// Created by karim on 06/10/2025.
//

#include "../Header Files/Utils.h"
#include <sstream>
#include <iostream>


int Utils::convertStringToInt(const string& date1) {
    istringstream stream(date1);
    getline(stream, day_1, '-');
    day= stoi(day_1);
    getline(stream, month_1, '-');
    month= stoi(month_1);
    getline(stream, year_1, '-');
    year= stoi(year_1);
    string stringDate1= day_1+month_1+year_1;
    int intDate= stoi(stringDate1);

    return intDate;
}
