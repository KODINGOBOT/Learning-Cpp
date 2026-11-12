#include<iostream>

using namespace std ;
int main(){
    // int datatype takes the size of 4 bytes 
    // char datatype takes the space of 1 byte 
    // bool datatype takes the space of 1 byte
   

//     Rules for Valid Variable Names
// Can contain letters (a–z, A–Z), digits (0–9), and underscore (_).

// Must start with a letter or underscore (not a digit).

// Cannot contain special characters like . , ; ! @ # $ % ^ & *.

// Cannot be a reserved keyword (e.g., int, return, while, class).

// Are case-sensitive (Age and age are different variables).

    int phoneno ;//This is declaration of variables.
    int age = 18;//This is definition of variables.
    cout<<"My age is "<<age<<endl;
    phoneno = 48;

    cout<<phoneno;
    // If the variable is not given any value then any random value(Garbage value) is stored in it. 

    return 0;
}

/*Build in datatypes:-
int------> 0,1,-2,6,3,......
float------>1.34,23.56,4,87....(Decimals of low precision)
char------->'c','a','p','g','k'....
double------>3.45576,2.6974456,53.3844384,8.2874924,.........(Decimals of high precision)
bool------>true,false
*/

/*User defined Datatype:-
Struct
Union
Enum
*/

/*Derived datatypes:-
Array
Function
Pointer
*/