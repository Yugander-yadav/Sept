#include<iostream>
using namespace std;
int main(){
    int a=5;
    int b=0;
    while (b<a)
    {
        b=(b<<1)|1;
    
        
    }
    int ans=(~a&b);
    cout<<ans<<endl;
}