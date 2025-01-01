#include<iostream>
#include<math.h>
using namespace std;


//hcf finding

int power(int a,int n){
if(a==0)return n;
else if(n==0)return a;
else power(n,a%n);

}

int main(){

int a;
cin>>a;
int n;
cin>>n;
cout<<power(a,n);





}