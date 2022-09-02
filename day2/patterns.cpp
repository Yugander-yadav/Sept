#include<iostream>
using namespace std;
int main(){
// Square pattern 

int square_size=5;

for(int i=1;i<=square_size;i++){
    for(int j=0;j<square_size;j++){
        cout<<"*";
        cout<<" ";
    }
    cout<<endl;
}

// //////////////////////////////
int tri_1=5;
cout<<endl;
for(int i=1;i<=tri_1;i++){
    
    for(int j=0;j<i;j++){
        cout<<"*";
        cout<<" ";
    }
    cout<<endl;
}
cout<<endl;
int tri_2=5;
for(int i=1;i<=tri_2;i++){
for(int spaces=tri_2-i;spaces>0;spaces--){
    cout<<" ";
}
for(int j=0;j<i;j++){
    cout<<"*";
    
}
cout<<endl;
}

int tri_3=5;
cout<<endl;
for(int i=1;i<=tri_1;i++){
    
    for(int j=0;j<i;j++){
        if(j==0||j==i-1||i==tri_3){
            cout<<"*";
        }
        else{
            cout<<" ";
        }
        cout<<" ";
    }
    cout<<endl;
}


int tri_4=5;
for(int i=1;i<=tri_4;i++){
for(int spaces=tri_4-i;spaces>0;spaces--){
    cout<<" ";
}
for(int j=0;j<i;j++){
    cout<<"* ";
    
    
}
cout<<endl;
}





return 0;
}