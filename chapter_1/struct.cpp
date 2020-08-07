#include <iostream>

struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};


int main(int args, char* argv) {

    // create and populate an employee
    Employee anEmployee;
    anEmployee.firstInitial = 'M';
    anEmployee.lastInitial = 'G';
    anEmployee.employeeNumber = 42;
    anEmployee.salary = 80000;


    return 0;
}