#include<iostream>
using namespace std;
int google(int *a,int *b){
    cout<<*a;
    cout<<*b;
}
int main(){
int z=2;
int d=32;
    google(&z,&d);
    return 0;
}