#include<iostream>
#include<cmath>
using namespace std;

int countdigit(int n){

    int count=0;
    while(n){
count++;
n=n/10;
    }
      return count;
}
void arm(int n,int digit ){
int num=n;
int rem;
int ans=0;
while(n){
rem=n%10;
ans=ans+pow(rem,digit);



}
 if(ans==num)
cout<<1;
else
 cout<<0;



}
int main(){

int num;
cin>>num;
int digit=countdigit (num);
arm(num,digit);

    return 0;
}