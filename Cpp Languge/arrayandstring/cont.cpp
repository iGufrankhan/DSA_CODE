#include<iostream>
using namespace std;

int fun(int n){
   static int count =0;
    while(n>0){
      int rem=n%10;
      count+=count+rem;
        fun(n/10);
    }
    return count;
}
int main(){

int n=123;
cout<<fun(n);


}