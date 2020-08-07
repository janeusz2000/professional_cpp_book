#include <iostream>

int main() {

    int i = 0;
    while (i < 5) { // condition is checked at first
        std::cout << "this is really silly" << std::endl;
        i++;
    }
    do {

        std::cout << "***this is really silly**" << std::endl;
        i++;
    } while (i < 5); // COndition is checked at the end;

    for (int i = 0; i < 5; ++i) {
        std::cout << "This is silly." << std::endl;
    }



    return 0;
}