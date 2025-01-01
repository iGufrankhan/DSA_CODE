#include<iostream>
using namespace std;
int main(){


//a
//ab
//abc
    int n;
    cin>>n;
    for(int i=n;i>=1;i--){
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(int k=1;k<=2*i-1;k++)
{
    cout<<"b";
} 

cout<<endl;   }
}