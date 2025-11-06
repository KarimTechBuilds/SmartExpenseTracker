🧾 Smart Expense Tracker CLI

A command-line expense tracker built in C++ that helps you record, manage, and report your personal expenses with ease. Designed for clarity, resilience, and real-world usability.

🚀 Features

-Add expenses in the format: amount-category-date-description
-Load, edit, and delete expenses by date
-Show expenses within a date range or view all
-Calculate totals by date range or category
-Sort expenses by category or date
-Export expenses to a file for backup or reporting
-Robust input validation to prevent crashes and guide users
-Color-coded CLI prompts for better readability

📦 Getting Started

Requirements
-C++ compiler (e.g., g++)
-Standard C++ libraries (<iostream>, <fstream>, <sstream>, etc.)

Build & Run:

g++ -std=c++17 -o ExpenseTracker main.cpp Expense.cpp ExpenseManager.cpp ReportGenerator.cpp Utils.cpp
./ExpenseTracker


📘 Usage

When you run the program, you'll be prompted to enter expenses like:

[amount]-[category]-[date: YYYY/MM/DD]-[description]

Example:
50-Food-2025/10/07-Coffee and croissant

Then you can use commands like:

-load 2025/10/07
-edit
-delete
-show
-show all
-total
-total all
-sort
-export
-Type stop to exit the program.

🛡️ Error Handling

-Invalid formats are caught and explained
-Malformed lines are skipped without crashing
-Input is validated before parsing
-Future-proof design for adding more checks (e.g., date format, amount positivity)

📁 File Structure

├── main.cpp
├── Header Files/
│   ├── Expense.h
│   ├── ExpenseManager.h
│   └── ReportGenerator.h
├── Expense.cpp
├── ExpenseManager.cpp
├── ReportGenerator.cpp
├── Utils.cpp
