#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a =5;
    int number=0,count=0;
    while(a!=0){
       
       int bit=a&1;
       number=number+(pow(10,count)*bit);
       a=a>>1;
        count++;
        
    }
cout<<number<<endl;
}