#include<iostream>
using namespace std;
int main(){
int n=1000;
int count =2;
bool prime = true;
cout<<2<<" "<<3<<" ";
for(int i=4;i<=n;i++){
for(int j=2;j<(i-1);j++){
    if(i%j==0){
        prime=false;
        continue;
    }
}
if(prime){
    cout<<i<<" ";
    count ++;
}

prime=true;

}

cout<<endl<<"total prime numbers count:"<<count;
}