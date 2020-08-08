#pragma once
#include <string>

namespace Rec {
    const int kDefaultStartingSalary = 30000;

    class Employee {
    public:
        Employee() = default;

        Employee(const std::string& firstName, const std::string& lastName);

        void promote(int raiseAmount = 1000);
        void demote(int demeritAmount = 1000);
        void hire();            // Hires or Rehires an employee
        void fire();            // Dismiss an employee
        void display() const;   // display info in the console

        // Getters and Setters
        void setFirstName(const std::string& firstName);
        const std::string& getFirstName() const;

        void setLastName(const std::string& LastName);
        const std::string& getLastName() const;

        void setEmployeeNumber(int employeeNumber);
        const int getEmployeeNumber() const;

        void setSalary(int newSalary);
        int getSalary() const;

        bool isHired() const;

    private:
        std::string mFirstName;
        std::string mLastName;
        int mEmployeeNumber = -1;
        int mSalary = kDefaultStartingSalary;
        bool mHired = false;
    };

};