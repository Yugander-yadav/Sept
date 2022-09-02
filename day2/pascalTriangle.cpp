#include<iostream>
using namespace std;
int main(){
    int n=5;
    for(int i=1;i<=n;i++){
        int cof=1;
        for(int spaces=(n-i);spaces>0;spaces--){
            cout<<" ";
        }

        for(int j=1;j<=i;j++){
            cout<<cof<<" ";
            cof=cof*(i-j)/j;
        }
cout<<endl;

    }
}