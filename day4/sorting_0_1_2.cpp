#include<iostream>
using namespace std;
int main(){
 int l=0;
 int m=0;
 int h=2;
 int arr[3]={2,0,1};

//  The Algorithm use is DNF Sorting algorithim 
while(m<=h){
    if(arr[m]==0){
        int k=arr[m];
        arr[m]=arr[l];
        arr[l]=k;
    }else if(arr[m]==1){
        m++;
    }
    else {
        int k=arr[h];
        arr[h]=arr[m];
        arr[m]=k;
     h--;   
    }
}
for(int i=0;i<=2;i++){
    cout<<arr[i];
}

}

