#include<iostream>
using namespace std;
int main(){

    int n; 
    cout<<"enter the value :";
    cin>>n;
    int a=1;
    for(int i=1;i<=n;i++){

        for(int j=1;j<=i;j++){

        cout<<" ";        }
        for(int k=1;k<=2*(n-i)-1;k++){
cout<<"*";
          
        }//a+=2; 
        cout<<endl;
    }
    return 0;
}