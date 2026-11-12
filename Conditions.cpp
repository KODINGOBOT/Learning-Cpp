#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout<<"Enter the three numbers: ";
    cin>>a>>b>>c;
    
    int largest=(a>=b && a>=c) ? a : (b>=c) ? b : c;
    cout<<"The largest number is: "<<largest<<endl;
    return 0;
}