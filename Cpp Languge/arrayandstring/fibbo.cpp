#include<iostream>
using namespace std;
int fact(int n){
    if(n==1)
    return 0;
  else if(n==0)
    return 1;
    else return  fact(n-1)+fact(n-2);

}
int main(){
    int n=8;
    int h=fact(n);
    cout<<h;
}