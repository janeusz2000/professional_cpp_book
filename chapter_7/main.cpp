#include <iostream>

using namespace std;

class Simple {

public:
    Simple() {
        cout << "Constructor is called" << endl;
    }
    ~Simple() {
        cout << "Destructor is called" << endl;
    }

};


int main() {

    Simple* mySimpleArray = new Simple[4];
    delete[] mySimpleArray;
    mySimpleArray = nullptr;

    // ! THIS WILL NOT COMPILE
    // char** board = new char[2][3]; 

    // pointer always takes the same amount of memory so the are somewhat weakly typed.
    // static cast offers a bit more safety:

    // Document* documentPtr = getDocument(); // new document();

    // ! This wont compile
    // char* myCharptr = static_cast<char*> documentPtr; 

    // THIS IS GONNA BE WEIRD
    // array are the same as pointers and it is possible to access array through the pointer:
    
    int myIntArray[10] = {};
    int* myIntPtr = myIntArray;
    // Access the array through the pointer
    myIntPtr[4] = 5; // ! Mindblow

    return 0;
}