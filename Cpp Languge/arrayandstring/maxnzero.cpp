#include<iostream>
using namespace std;
int factzero(int n){
    int count=0;
    while(n>=5){


        count+=n/5;
        n=n/5;
    } return count;}

int main(){
    int n; cin>>n;
int p=factzero(n);
cout<<p;






    return 0;
}