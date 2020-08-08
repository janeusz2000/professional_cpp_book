#include <iostream>
#include "Employee.h"

using namespace std;
using namespace Rec;

int main(int args, char* argv)
{
    cout << "EMPLOYEE CLASS TEST" << endl;
    Employee emp;
    emp.setFirstName("John");
    emp.setLastName("Doe");
    emp.setEmployeeNumber(71);
    emp.setSalary(50000);
    emp.promote();
    emp.promote(50);
    emp.hire();
    emp.display();

    return 0;
}