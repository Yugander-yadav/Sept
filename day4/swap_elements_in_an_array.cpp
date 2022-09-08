#include<iostream>
using namespace std;
int main(){
    int n=9;
    int arr[9]={0,1,2,3,4,5,6,7,8};

    for (int i=0;i<(n-1);i+=2){
    int c=arr[i];
    arr[i]=arr[i+1];
    arr[i+1]=c;
        
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    
}