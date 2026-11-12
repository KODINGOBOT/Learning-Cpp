//Write a program to calculate simple intrest if principle is 20000, rate of intrst is 12% per annum and time period is 18 months
#include<iostream>
using namespace std;
int main(){
    int principle=20000;
    float time=18.0/12;
    cout<<time<<endl;
    float rate=12;
    int SI=((principle * time * rate)/100);
    cout<<"Simple Intrest is:"<<SI<<endl;
    return 0;
}