#include <iostream>

int main() {
    // This shoule print function name
    std::cout << "Entering function: " << __func__ << std::endl;
    // works!


    int myArray[4] ={ 2 };

    unsigned int arraySize = std::size(myArray);

    std::cout << "array size is: " << arraySize << std::endl;
    return 0;
}