#include <string>
#include <iostream>
#include <cstring>
#include <string_view>

using namespace std;

std::string_view extractExtension(std::string_view fileName);

char* copyString(const char* str) {
    char* result = new char[strlen(str) + 1];
    strcpy(result, str);
    return result;
}

int main() {

    // // char* ptr = "Hello"; // Compiler will allow me to to this because of backwards compability;
    // // ptr[1] = 'a'; // Undefined Behaviour

    // // // this should be:
    // // const char* ptr = "Hello"; 
    // // ptr[1] = 'a'; // This wont compile so we avoid Undefined Behaviour

    // char arr[] = "Hello"; // COmpiler takes care of allocating enough memory for this data
    // arr[1] = 'a'; // because its array, now its possible;

    // cout << arr << endl;

    // /* RAW STRINGS */
    // const char* str = "Hello \"World\"!";

    // // This is equal to:
    // const char* str2 = R"(Hello "World"!)";

    // cout << str << endl;
    // cout << "Is the same as: \n";
    // cout << str2 << endl;

    // // To be able to write 2 lines at one string I need to use \n :

    // const char* str3 = "This string has 2 \nLines";

    // cout << str3 << endl;

    // // With raw string it can be executed:

    // const char* str4 = R"(This string has
    // also two lines)";

    // cout << str4 << endl; // this is weird, but it works ;-)

    // // Now we are talking ... std::string
    // // std::string takes care of allocating memory for string for me, so I dont need to be worry about.

    // std::string A("12");
    // std::string B("34");

    // std::string C;

    // C = A + B; // operator + is overloaded so it concatenate string
    // cout << C << endl;

    // C += A; // operator += is overloaded too ;-)
    // cout << C << endl;

    // auto string1 = "Hello world"; // this is a const char*
    // auto string2 = "Hello world"s; // this is an instance of std::string

    // Standard library also allow to use few very usefull methods like:

    // std::string to_string(int val);
    // std::string to_string(long val);
    // std::string to_string(double val);

    // which can be very useful when we want to convert any numeric data into text data. Also it takes care of allocating all of memory for you.

    // string_view - is replacement for const std::string&. It doesn produce overhead when copying co it works faster;

    string fileName = R"(c:\temp\my_file.ext)";
    cout << "C++ string: " << extractExtension(fileName) << endl;
    return 0;

}

std::string_view extractExtension(std::string_view fileName) {
    return fileName.substr(fileName.rfind('.')); // substr creates copy of the string
}