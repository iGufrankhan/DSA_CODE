#include<iostream>
using namespace std;
int main(){
int num;
cin>>num;
int rem,ans=0,mmm=1;
while(num>0){

    rem=num%10;
    num=num/10;
    ans=rem*mmm+ans;
    mmm=mmm*2;
}


cout<<ans;


}