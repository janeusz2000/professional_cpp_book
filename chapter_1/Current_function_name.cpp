#include <iostream>

int main() {
    // This shoule print function name
    std::cout << "Entering function: " << __func__ << std::endl;
    // works!
    return 0;
}