#include <iostream>
#include <array>
#include <initializer_list>

int main() {

    // char ticTacToeBoard[3][3]; // This came from C
    // ticTacToeBoard[1][1]= 'o';

    // std::cout << ticTacToeBoard[1][1] << std::endl;

    std::array<int, 3> arr ={ 9, 8, 7 }; // this is recommended insdead of C above
    std::cout << "Array size = " << arr.size() << std::endl;
    std::cout << "2nd element = " << arr[1] << std::endl;

    // NOTE! both type of array  have fixed size. They cannot be changed after initialization

    // Copy initializer list
    auto a ={ 11 };          // initializer_list<int>
    auto b ={ 11, 12 };      // initializer_list<int>

    // direct list initialization
    auto c{ 11 };
    auto d{ 11, 12 };

    return 0;
}