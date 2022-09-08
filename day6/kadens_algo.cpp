// finding the max of sub array when added 
#include<iostream>
#include<limits.h>
using namespace std;
int main(){
    int arr[4]={-1,1,2,-2};
    int maxEnd=INT_MIN;
    int maxSoFar=0;
    for(int i=0;i<4;i++){
        maxSoFar+=arr[i];
        cout<<maxEnd<<" ";
        if(maxSoFar>maxEnd){
            maxEnd=maxSoFar;
        }
         if(maxSoFar<0){
            maxSoFar=0;
        }
        
    }
    cout<< endl<<maxEnd;
}