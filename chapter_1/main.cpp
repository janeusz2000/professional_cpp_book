#include <iostream>
#include <stdexcept>
#include <exception>
#include "Database.h"

using namespace std;
using namespace Rec;

int displayMenu();
void doHire(Database& db);
void doFire(Database& db);
void doPromote(Database& db);
void doDemote(Database& db);


int main(int args, char* argv)
{
    Database employeeDB;
    bool done = false;
    while (!done) {
        int selection = displayMenu();
        switch (selection) {
        case 0:
            done = true;
            break;
        case 1:
            doHire(employeeDB);
            break;
        case 2:
            doFire(employeeDB);
            break;
        case 3:
            doPromote(employeeDB);
            break;
        case 4:
            employeeDB.displayAll();
            break;
        case 5:
            employeeDB.displayCurrent();
            break;
        case 6:
            employeeDB.displayFormer();
            break;
        default:
            cerr << "Unknown Command. " << endl;
            break;
        }
    }
    return 0;
}


int displayMenu() {
    int selection;
    cout << endl;
    cout << "Employee Database" << endl;
    cout << "-----------------" << endl;
    cout << "1) Hire new Employee" << endl;
    cout << "2) Fire an Employee" << endl;
    cout << "3) Promote an Employee" << endl;
    cout << "4) List all Employees" << endl;
    cout << "5) List all current Employees" << endl;
    cout << "6) List all former Employees" << endl;
    cout << "0) Quit" << endl;
    cout << endl;
    cout << "---> ";
    cin >> selection;
    return selection;
}

void doHire(Database& db) {
    string firstName;
    string lastName;
    cout << "First Name? ";
    cin >> firstName;

    cout << "Last Name?";
    cin >> lastName;

    db.addEmployee(firstName, lastName);
}

void doFire(Database& db) {
    int employeeNumber;

    cout << "Employee number?";
    cin >> employeeNumber;

    try {
        Employee& emp = db.getEmployee(employeeNumber);
        emp.fire();
        cout << "Employee " << employeeNumber << " terminated" << endl;
    }
    catch (const std::logic_error& e) {
        cerr << "Unable to terminate employee: " << e.what() << endl;
    }
}
void doPromote(Database& db) {
    int employeeNumber;
    int raiseAmount;

    cout << "Employee number? ";
    cin >> employeeNumber;

    cout << "How much of a raise? ";
    cin >> raiseAmount;

    try {
        Employee &emp = db.getEmployee(employeeNumber);
        emp.promote(raiseAmount);
    }
    catch (const std::logic_error& e) {
        cerr << "Unable to promote employee: " << e.what() << endl;
    }
}
void doDemote(Database& db) {
    int employeeNumber;
    int demoteAmount;

    cout << "Employee number? ";
    cin >> employeeNumber;

    cout << "How much of a raise? ";
    cin >> demoteAmount;

    try {
        Employee &emp = db.getEmployee(employeeNumber);
        emp.demote(demoteAmount);
    }
    catch (const std::logic_error& e) {
        cerr << "Unable to demote employee: " << e.what() << endl;
    }
}

