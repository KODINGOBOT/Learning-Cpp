//WAP to find ninth term of Arithmetic progression (A.P) if starting value a=120, d=5
#include<iostream>
using namespace std;
int main(){
    int a=120;
    int d=5;
    int n=9;
    cout<<"Ninth term is:"<<(a+((--n) * d));
    return 0;
}