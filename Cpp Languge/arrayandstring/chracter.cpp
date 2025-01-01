#include<iostream>
using namespace std;
int main(){


//a
//ab
//abc
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n-i;j++){
            cout<<" ";

        }
        for(char k='a';k<='a'+i-1;k++)
{
    cout<<k;
} 

cout<<endl;   }
}