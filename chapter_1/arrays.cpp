#include <iostream>
#include <array>

int main() {

    // char ticTacToeBoard[3][3]; // This came from C
    // ticTacToeBoard[1][1]= 'o';

    // std::cout << ticTacToeBoard[1][1] << std::endl;

    std::array<int, 3> arr ={ 9, 8, 7 }; // this is recommended insdead of C above
    std::cout << "Array size = " << arr.size() << std::endl;
    std::cout << "2nd element = " << arr[1] << std::endl;

    // NOTE! both type of array  have fixed size. They cannot be changed after initialization
    return 0;
}