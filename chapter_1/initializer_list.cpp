#include <initializer_list>
#include <iostream>

using namespace std;

int makeSum(initializer_list<int> lst) {
    int total = 0;
    for (int value: lst) {
        total += value;
    }
    return total;
}

int main() {
    cout <<  "sum is eq to: " <<makeSum({ 1, 2, 3, 4, 5, 6, 7, 8, 9 }) << endl;
    return 0;
}