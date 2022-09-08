#include<iostream>
using namespace std;
int main(){
    int a[7]={1,1,2,2,3,3,4};
    int ans=0;
    for(int i=0;i<7;i++){
        ans=ans^a[i];
    }
    cout<<ans;
}