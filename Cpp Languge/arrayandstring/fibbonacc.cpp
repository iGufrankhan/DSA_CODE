#include<iostream>
using namespace std;
int main(){
int n;
cout<<"enter the value:";
cin>>n;
int a=0;
int b=1;
cout<< a <<" "<<b <<" ";

for(int i=1;i<n;i++){
int c=a+b;
cout<<c<<" " ;

a=b;
b=c;


}  







    return 0;
}