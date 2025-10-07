#include <iostream>
#include "Header Files/Expense.h"
#include "Header Files/ExpenseManager.h"
#include "Header Files/ReportGenerator.h"
using namespace std;

int main() {
    cout << "\033[1;32mPlease enter the expenses in the following format:\033[1;32m" << endl<< "\033[1;32m[amount]-[category]-[date: YYYY/MM/DD]-[description]\033[1;32m"<< endl << "\033[1;32mIf you finished inserting, type 'stop'\033[1;32m" << endl
    << "\033[1;34mYou can type the following commands:\033[1;34m" << endl << "\033[1;34m-load (Loads an expense of your chosen date, you can type the date after typing the command.)\033[1;34m" << endl
    << "\033[1;34m-edit (Edit an expense of your chosen date.)\033[1;34m" << endl
    << "\033[1;34m-delete (Delete an expense of your chosen date.)\033[1;34m" << endl
    << "\033[1;34m-show (Shows saved expenses from your chosen range.)\033[1;34m" << endl
    << "\033[1;34m-show all (Shows all saved expenses.)\033[1;34m"<< endl
    << "\033[1;34m-total (Calculates the total of expenses between your chosen dates, or based on Category.)\033[1;34m" << endl
    << "\033[1;34m-total all (Calculates the total for all expenses.)\033[1;34m" << endl
    << "\033[1;34m-sort (Sorts the expense list based on category or date)\033[1;34m" << endl
    << "\033[1;34m-export (Exports the list of expenses.)\033[1;34m" << endl;
    bool stop = false;
    int eterations=0;
    while (!stop) {
        string line;
        ExpenseManager manager;
        ReportGenerator reportGenerator;
        if (eterations==0) {
            cout << "Please enter your expense:" << endl;
        }
        else {
            cout << "Please enter your next expense:" << endl;
        }
        cin >> line;
        if (line == "stop" || line == "Stop") {
            cout << "Program stopped." << endl;
            break;
        }
        else if (line == "load" || line == "Load") {
            string targetDate;
            cout << "Please enter the expense date you want to load: ";
            cin >> targetDate;
            manager.loadExpense(targetDate);
        }
        else if (line == "edit" || line == "Edit") {
            string inputDate;
            string newExpenseLine;
            cout << "Enter the date you want to edit: " << endl;
            cin >> inputDate;
            cout << "Enter the new expense: " << endl;
            cin >> newExpenseLine;
            manager.editExpense(inputDate, newExpenseLine);

        }
        else if (line == "delete" || line == "Delete") {
            string inputDate;
            int expenseToDeleteNumber;
            cout << "Enter the date of the expense you want to delete: " << endl;
            cin >> inputDate;
            cout << "Which Expense would you like to delete?(Choose 1 for first, 2 for second, etc..)" << endl;
            manager.displayExpensePeriod(inputDate);
            cin >> expenseToDeleteNumber;
            manager.removeExpense(inputDate, expenseToDeleteNumber);
        }
        else if (line == "show" || line == "Show") {
            string inputDate1;
            string inputDate2;
            reportGenerator.generateReport(inputDate1,inputDate2, manager);
        }
        else if (line == "show all" || line == "Show All") {
            manager.displayAllExpenses();
        }
        else if (line == "total" || line == "Total") {
            string inputDate1;
            string inputDate2;
            reportGenerator.generateReport(inputDate1,inputDate2, manager);
        }
        else if (line == "total all" || line == "Total All") {
            cout << manager.calculateTotalExpense() << endl;
        }
        else if (line == "sort" || line == "Sort") {
            string sortType;
            cout << "Enter the sort type you want to sort: By 'Category' or 'Date'" << endl;
            cin >> sortType;
            reportGenerator.sortExpenseList(sortType, manager);
        }
        else if (line == "export" || line == "Export ") {
            string fileName;
            cout << "Please type the file name you want to export to:" << endl;
            cin >> fileName;
            reportGenerator.exportExpenseList(fileName, manager);
        }
        else {
            Expense expenseObj(line);
            manager.addExpense(expenseObj, line);
            eterations++;
        }
    }
}