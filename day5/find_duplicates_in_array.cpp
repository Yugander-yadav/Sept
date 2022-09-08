// using brute force approach 

#include<iostream>
using namespace std;
int main(){
    int arr[5]={1,2,3,1,3};
    int b=0;
    bool dup=false;
    while(b<4){
        for(int i=(b+1);i<5;i++){
            if(arr[b]==arr[i]){
                  cout<<arr[b];
                  dup=true;
                    break;
                    
            }
        
        }
        cout<<endl;
        if(dup){
            break;
        }
        b++;
    }
}