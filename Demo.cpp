#include <iostream>
using namespace std;
int main(){
    int x,y,z,w;
    cin>>x>>y;
    z=((x>10)&&(y==10));
    w=!((x>10)&&(y==0));
    cout<<z<<endl;
    cout<<w<<endl; 
    cout<< ++x * ++x * x++ <<endl;
    cout<<!(x>10||y==20)<<endl;
    cout<< !0 *10<<endl ;
    cout<<!(1*10);
    return 0;  
}