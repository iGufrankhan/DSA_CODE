#include<iostream>
using namespace std;

int evenno(int num,int n){


if(num==n){
    return 0;
}
if(num%2==0){
    cout<<num;
}evenno(num+1,n);



}
int main(){



    int num;
    cin>>num;
    int n;
    cin>>n;
    cout<<evenno(num,n);
}