#include<iostream>
using namespace std;
int call(int a ,int n){
    if(n==0||a==0)
    return 0;
    else
    return (a+call(a,n-1));
}




int main(){

int a;
cin>>a;
int n;
cin>>n;
cout<<call(a,n);

}