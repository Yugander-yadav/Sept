#include<iostream>

using namespace std;
int main(){
    int value=0;
    int a=8;
    while(a!=0){
        int bit=a&1;
        a=a>>1;
        
        value=value+(10*bit);
    }
    cout<<value;
}