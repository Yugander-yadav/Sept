#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int n=17462;
    int i=0;
    long number=0;
    while(n!=0){
        
        number+=pow(10,i)*(n%2);
        
        n=n/2;
        i++;
    }
cout<<number<<endl;
}