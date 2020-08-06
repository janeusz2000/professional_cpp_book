#include <iostream>

// // this is nested namespace, this is only supported in C++17
// namespace MyLibraries::Networking::FTP { // 
//     void msg() {
//         std::cout << "Print message" << std::endl;
//     }
// }


// Bazel is bad :-C I dont know how to run it witch c++17 support
namespace MyLibraries {
    namespace Networking {
        namespace FTP {
            void msg() {
                std::cout << "Print message" << std::endl;
            }
        }
    }
}

// namespace alias
namespace MyFTP = MyLibraries::Networking::FTP;


int main(int argc, char* argv) {

    MyFTP::msg();
    return 0;
}