#include<iostream>
// iostream is used to add functionalities that supports input or output interpretations
// iostream is a header file and it contains the functionalities related to inputs and outputs.
using namespace std ;// This here basically means that we are declaring a standard for this code so that compiler could use it just like a dictionary
//  for the idetifiers.



/*Build in datatypes:-
int------> 0,1,-2,6,3,......
float------>1.34,23.56,4,87....(Decimals of low precision)
char------->'c','a','p','g','k'....
double------>3.45576,2.6974456,53.3844384,8.2874924,.........(Decimals of high precision)
bool------>true,false
*/




int main() {
    // int datatype takes the size of 4 bytes 
    // char datatype takes the space of 1 byte 
    // bool datatype takes the space of 1 byte

    cout << "This is my hello to the people of this world." << endl;
 //cout is an identifier which is used for output or printing.
//  Sentence written in "" is a string. 
// endl means printing new line.

    int age = 20; // Here we are declaring a variable named age and assigning it a value of 20.
    int a;
    

//     Rules for Valid Variable Names
// Can contain letters (a–z, A–Z), digits (0–9), and underscore (_).

// Must start with a letter or underscore (not a digit).

// Cannot contain special characters like . , ; ! @ # $ % ^ & *.

// Cannot be a reserved keyword (e.g., int, return, while, class).

// Are case-sensitive (Age and age are different variables).
cout << "Age: " << age << endl;

// If the variable is not given any value then any random value(Garbage value) is stored in it.
cout << "Value of a: " << a << endl;

 
 return 0; // This represents that the code has been executed successfully. Any non zero no. represents unsuccessfull execution of code.
}