//
// Created by karim on 06/10/2025.
//

#include "../Header Files/Utils.h"
#include <sstream>
#include <iostream>


int Utils::convertStringToInt(const string& date) {
    istringstream stream(date);
    try {
        getline(stream, day_1, '-');
        day= stoi(day_1);
        getline(stream, month_1, '-');
        month= stoi(month_1);
        getline(stream, year_1, '-');
        year= stoi(year_1);
        string stringDate= day_1+month_1+year_1;
        int intDate= stoi(stringDate);
        return intDate;
    } catch (const invalid_argument& e) {
        cerr << "Error: Invalid input format. Try again:" << endl;
        return 0;
    }
}
