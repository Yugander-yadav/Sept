#include<iostream>
using namespace std;
int main(){
    int a = 251;
    int count=0;
    while(a!=0){
        
        
        if((a&1)==1){
            count++;
        }
        a=a>>1;
    }
if(count==1){
    cout<<"2 power number";
}else {
    cout<<"not 2 power number";
}
int d=4&3;
cout<<"///////////////////"<<d;
}

