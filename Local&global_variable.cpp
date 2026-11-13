#include <iostream>
using namespace std;

int var = 10; // Global variable

int main() {
    int var = 20; // Local variable
    var = 30; // Modifying the local variable
    cout << "Global variable: " << ::var << endl;
    cout << "Local variable: " << var << endl;
    return 0;
}