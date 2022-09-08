#include<iostream>
using namespace std;
int main(){
    int arr[10]={1,2,3,4,5,6,7,8,9};
    cout<<"enter the number you want to serach:";
    int num;
    int found=1;
    cin>>num;
    for(int i=0;i<10;i++){
        if(arr[i]==num){
        cout<<"number found at index "<<i<<endl;
        found=0;
        break;
        }
    }
    if(found==1){
        cout<<"number not found";
    }
}