#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,4,5};
    int brr[5]={0,1,5,6,7};
    int a=0;
    int b=0;
    while(b<5){
        if(arr[a]< brr[b] && a<5)
        {
            cout<<arr[a];
            a++;
        }else if (arr[a]==brr[b]){
                cout<<arr[a];
                a++;
                b++;
            
        }
        else if(brr[b]<arr[a]){
                cout<<brr[b];
                b++;
        }
        else{
            cout<<brr[b];
            b++;
        }
        
        
    
    }

    }