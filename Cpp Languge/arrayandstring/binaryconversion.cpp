#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
int rem,ans=0,mmm=1;
while(num>0){

    rem=num%2;
    num=num/2;
    ans+=rem*mmm;
    mmm*=10;
}


cout<<ans;


}