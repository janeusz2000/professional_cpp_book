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


    return 0;
}