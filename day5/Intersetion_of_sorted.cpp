#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={2,3,4,5,6};
    int b=0;
    int a=0;
    while(b<4){
        
        if(arr[a]<brr[b]){
            a++;

        }
        else if(brr[b]==arr[a]){
            cout<<brr[b]<<" ";
            a++;
            b++;
        }
        
    }
}