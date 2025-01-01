#include<iostream>
using namespace std;
int check(int a,int b,int c,int d){
if(a==b&&c==d||a==c&&b==d||a==d&&b==c)
cout<<"rectangle";
else cout<<"no";



}int main(){

int a,b,c,d;
cin>>a>>b>>c>>d;
check(a,b,c,d);



}