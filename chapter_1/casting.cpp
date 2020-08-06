#include <iostream>

int main() {
    float myFloat = 3.14f;
    int i1 = (int)myFloat; // this is from C
    int i2 = int(myFloat); // this is from python
    int i3 = static_cast<int>(myFloat); // This is the cleanest one - use this :-)

    std::cout << i1 << "this is from C" << std::endl;
    std::cout << i2 << "this is from python" << std::endl;
    std::cout << i3 << "this is the cleanest one - use this :-)" << std::endl;
}