#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    
    int k=arr[4];

    for(int i=4;i>0;i-- ){
        arr[i]=arr[i-1];
    }

    arr[0]=k;
    
    for(int i=0;i<5;i++){
        cout<<arr[i];
    }
}