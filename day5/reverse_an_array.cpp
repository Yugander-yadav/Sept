#include<iostream>
using namespace std;
int main(){
    int arr[9]={1,2,3,4,5,6,7,8,9};
    int n=8;
    for(int i=0;i<=(8/2);i++){
        int a=arr[i];
        arr[i]=arr[n];
        arr[n]=a;
        n--;
    }
    for(int i=0;i<=8;i++){
        cout<<arr[i];
    }
    return 0;
}