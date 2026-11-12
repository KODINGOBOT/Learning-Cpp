#include<iostream>
#include<cmath>
using namespace std;

// int main(){
//     int a;
//     cout<<"Enter a number: ";
//     cin>>a;
//     int b= sqrt(a);
//     (b*b==a) ? cout<<"The number is a perfect square." : cout<<"The number is not a perfect square.";
//     return 0;
// }

int main(){
    int a;
    cout<<"Enter a number: ";
    cin>>a;
    //Implicit conversion:-
    char implicitchar= a;
    cout<<"int to char: "<<implicitchar<<endl;
    float implicitfloat= a;  
    cout<<"int to float: "<<implicitfloat<<endl;
    double implicitdouble= a; 
    cout<<"int to double: "<<implicitdouble<<endl;

    
    //Explicit conversion:-
    char explicitChar= static_cast<char>(a);
    cout<<"int to char: "<<explicitChar<<endl;
    float explicitFloat= static_cast<float>(a);
    cout<<"int to float: "<<explicitFloat<<endl;
    double explicitDouble= static_cast<double>(a);
    cout<<"int to double: "<<explicitDouble<<endl;

    return 0;
}

