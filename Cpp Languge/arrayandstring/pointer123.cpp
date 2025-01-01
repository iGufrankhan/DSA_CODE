#include<iostream>
using namespace std;



void point(int *o){
   *o=*o+1;
    
}
int main(){


    int n=9;
    int *ptr=&n;
  point(ptr);
  cout<<n;
    
}