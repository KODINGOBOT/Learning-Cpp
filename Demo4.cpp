//WAP to find both roots of a quadratic equation, given coefficient a=4,b=-4,c=1

#include<iostream>
#include<cmath>
using namespace std;

int main(){
    int a = 4;
    int b = -4;
    int c = 1;
    double b2 = pow(b, 2);
    float root = sqrt(b2-(4*a*c));
    cout<<"Its roots are: "<<(root-b)/(2*a)<<" and "<<(-root-b)/(2*a)<<endl;
    return 0;
}