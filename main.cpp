#include <iostream>
#include <fstream>
#include "Header Files/Expense.h"
#include "Header Files/ExpenseManager.h"
#include "Header Files/ReportGenerator.h"
using namespace std;

int main() {
    cout << "\033[1;32mPlease enter the expenses in the following format:\033[1;32m" << endl<< "\033[1;32m[amount]-[category]-[date: YYYY/MM/DD]-[description]\033[1;32m"<< endl << "\033[1;32mIf you finished inserting, write 'stop'\033[1;32m" << endl;
    string line;
    cin >> line;
    Expense expenseObj;
    expenseObj.saveExpense(line);

    /*ofstream expenseFile("Expensefile.txt");
    bool stop=false;
    while (!stop) {
        string line;
        cin >> line;
        expenseFile << line << endl;
        if (line=="stop") {
            stop=true;
            cout << "\033[1;34mProgram stopped.\033[1;34m";
        }
    }*/
}