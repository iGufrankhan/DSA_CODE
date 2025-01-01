#include<iostream>
using namespace std;
int main(){
int n; 
cin>>n;

for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){// sidha if j==1 j==i i==n
if(j==1||j==n-i||i==1)
        cout<<"*";// j print 1234
      else cout<<" ";         //         1234 n=4
        
    }cout<<endl;
}

}