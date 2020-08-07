#include <iostream>

struct Employee {
    char firstInitial;
    char lastInitial;
    int employeeNumber;
    int salary;
};

int main() {

    int* myIntegerPointer = nullptr; //This is how I should always declare uninitialized pointers

    int i = 8;
    int* myIntegerPointer = &i; // Points to the variable i with the value 8;

    // Those two are required to properly destroy object and reset pointer.
    delete myIntegerPointer;
    myIntegerPointer = nullptr;


    int arraySize = 8;
    int* myVariableSizedArray = new int[arraySize];
    myVariableSizedArray[3] = 2;

    // destroy whole array manually:
    delete[] myVariableSizedArray; // brackets after delete indicate that I destroy whole array.
    myVariableSizedArray = nullptr;

    // NOTES: malloc() and free() from C should be avoided. I should use new and delete or new[] and delete[].
    // To prevent memory leaks, every call to new should be paired with a call to delete, and every call 
    // to new[] should be paired with a call to delete[]. Not calling delete or delete[], or mismatching calls, results in memory leaks.

    return 0;
}