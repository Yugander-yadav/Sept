#include<iostream>
using namespace std;
int main(){
    int n=100;
    int i=0;
    int j=1;
    while(i<=n){
        
        cout<<i<<" ";
        int k=j;
        j=i+j;
        i=k;

    }

}

