#include<iostream>
using namespace std;
namespace google{
    int sample=1;  // creating a custom namespace if we have to use the namespace variable => namespace::variable_name
}
int main(){
int n=19;
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



    return 0;
}