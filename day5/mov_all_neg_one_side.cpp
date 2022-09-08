#include<iostream>
using namespace std;
int main(){
    int arr[10]={-1,1,-1,-1,0,1,2,-1,-2,3};
    int low=0;
    int high=9;
    while(low<=high){
        if(arr[low]>=0 && arr[high]>=0){
            low ++; 
            high--;

        }else if(arr[low]<0 && arr[high]<0){
            low++;

        }   else if(arr[low]>=0 && arr[high]<0){
            int k=arr[high];
            arr[high]=arr[low];
            arr[low]=k;
            low++;
            high--;
        }   
        else{
            low++;
            high--;
        }
        cout<<low<<high<<endl;
    }
    cout<<endl;
for(int i=0;i<=9;i++){
    cout<<arr[i]<<" ";
}
}