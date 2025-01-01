#include<iostream>
using namespace std;

int fibb(int n){

    if(n==0)
    return 1;
    else if(n==1)
    return 0;
   else  return fibb(n-1)+fibb(n-2);
}
int main(){

    int n;
    cin>>n;
   int b= fibb(n);
cout<<b;

}