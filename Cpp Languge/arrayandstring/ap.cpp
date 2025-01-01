#include<iostream>
using namespace std;
int main(){
    int n;
    int a;
    cin>>n>>a;
    int d;
    cin>>d;
    for(int i=1;i<=n;i++){
        cout<<a+(i-1)*d<<" ";
    }
}