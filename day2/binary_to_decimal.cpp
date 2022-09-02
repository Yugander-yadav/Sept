#include<iostream>
#include<math.h>
using namespace std;
int main(){
long n = 100010000110110;
int number =0;
int i=0;
while(n!=0)
{
    number+=(pow(2,i)*(n%10));
        
    n=n/10;
    i++;
}
cout<<number;


}