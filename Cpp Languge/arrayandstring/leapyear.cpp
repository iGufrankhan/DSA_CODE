#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
if(n%400==0)
return 1;
else if(n%4 && n%100!=0)
return 1;

else return 0;






}