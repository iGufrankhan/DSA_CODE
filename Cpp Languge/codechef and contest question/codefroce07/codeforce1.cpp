#include<iostream>
using namespace std;



int main(){

int t;
cin>>t;
int num;
while(t--){

cin>>num;
int sum=0;
while(num>0){
   int rem=num%10;
   sum+=rem;
    num/=10;
}
cout<<sum<<endl;




}
}