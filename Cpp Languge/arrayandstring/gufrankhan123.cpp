
#include<iostream>
using namespace std;

int main(){

int n;
cin>>n;
int a=1;
for(int i=1;i<=n;i++){

    for(int j=1;j<=n-i;j++){
cout<<" ";}
for(int k=1;k<=a;k++){
   if(k==a||k==1) cout<<"*";
   else cout<<" ";

}a+=2;
cout<<endl;



    }for(int i=1;i<=n;i++){

    for(int j=1;j<=i;j++){
cout<<" ";}
for(int k=1;k<=2*(n-i)-1;k++){
   if(k==1||k==2*(n-i)-1) cout<<"*";
   else cout<<" ";
}cout<<endl;


    }

}