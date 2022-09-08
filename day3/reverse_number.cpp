#include<iostream>
using namespace std;
int main(){
    
    long int  num=-1532434242333;
    int b=0;
    while(num!=0){
        int digit=num%10;
        if(b>INT_MAX/10 || b<INT_MIN/10){
            return 0;
        }
        num=num/10;
       

        b=(b*10)+digit;
    }

 cout<<b;   

}

