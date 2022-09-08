#include<iostream>
using namespace std;
void google(int arr[10],int one,int two){
arr[one]+=arr[two];
arr[two]=arr[one]-arr[two];
arr[one]=arr[two]-arr[1];
}
int main(){
    int arr[10]={0,2,1,0,0,1,2,0,0,2};
    int l=0;
    int m=0;
    int h=9;
    
while(m<=h){
if(arr[m]==0){
    google( arr,l,m);
    m++;
    l++;
}else if(arr[m]==1){
    m++;
}
else if(arr[h]==2){
    google(arr,m,h);
    
    h--;
}



}


for(int i=0;i<10;i++){
    cout<<arr[i];
}

}