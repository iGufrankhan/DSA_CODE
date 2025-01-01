#include<iostream>
using namespace std;

int sumsquare(int n){

int sum=0;
for(int i=1;i<=n;i++){
sum+=(i*i);


}
return sum ;

}
int main(){

int a; 
cout<<"enter the value of a=";
cin>>a;

int result=sumsquare(a);
cout<<"the result of the following code is=" << result <<endl;
return 0;


}