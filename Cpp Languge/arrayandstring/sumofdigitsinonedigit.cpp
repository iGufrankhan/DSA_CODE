#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;

while(n>9){
    int rem,ans=0;
while(n!=0){
rem=n%10;
n/=10;
ans=ans+rem;
} 
n=ans;
}

cout<<n;

}