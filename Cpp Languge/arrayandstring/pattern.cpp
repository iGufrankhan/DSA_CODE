
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter the value:";
    cin>>n;
    char ch='a';
    for(int i=1;i<=n;i++){
        
        for(int j=1;j<=i;j++){
         cout<<ch<<" ";
          ch++;  
        }
         cout<<endl;
    }
cout<<endl;
for(int i=1;i<=n;i++){
    for(int j=1;j<=2*i-1;j++){
        cout<<"*";

    }cout<<endl;
}




    return 0;
}