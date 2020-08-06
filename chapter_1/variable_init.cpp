#include <iostream>

int main() {
    int uninitialized; // Bazel is setting up 0;
    int initialized = 7;

    std::cout << uninitialized << std::endl;
    std::cout << initialized << std::endl;
    return 0;
}