#include<iostream>
using namespace std;


int sum(int n){
if(n<=1)
return n;
else  return n+sum(n-1);



}
int main(){
int n ;
cout<<"enter the value";
cin>>n;

int p=sum(n);
cout<<"the sum of << n >> to 1=  "<< p <<endl;


return 0;


}