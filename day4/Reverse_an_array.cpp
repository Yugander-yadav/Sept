#include<iostream>
using namespace std;
int main(){
    int arr[10]={0,1,2,3,4,5,6,7,8,9};
    int brr[10]={};
    int b_size=9;
    for(int i=0;i<10;i++){
       brr[b_size]=arr[i];
       b_size--;
    }
    b_size=9;
    for(int i=0;i<10;i++){
   cout<<brr[i];
    }
    cout<<endl;
    for(int i=0;i<10;i++){
   cout<<arr[i];
    }
}