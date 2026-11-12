#include <iostream>
using namespace std;
int main() {
    int a = 6; //00000110 in binary
    int b = 12;//00001100 in binary
    int c = 0; //00000000 in binary

    c= a & b; // Bitwise AND 00000100 in binary
    cout << "Bitwise AND of " << a << " and " << b << " is: " << c << endl;
    c= a | b; // Bitwise OR 00001110 in binary
    cout << "Bitwise OR of " << a << " and " << b << " is: " << c << endl;
    c= a ^ b; // Bitwise XOR 00001010 in binary
    cout << "Bitwise XOR of " << a << " and " << b << " is: " << c << endl;
    c= ~a; // Bitwise NOT 11111001 in binary
    cout << "Bitwise NOT of " << a << " is: " << c << endl;
    c= a << 1; // Left shift 00001100 in binary
    cout << "Left shift of " << a << " by 1 is: " << c << endl;
    c= a >> 1; // Right shift 00000011 in binary
    cout << "Right shift of " << a << " by 1 is: " << c << endl;

    return 0;
}