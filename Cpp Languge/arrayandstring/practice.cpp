#include<iostream>
#include<vector>
using namespace std;


int dig(int a){
  if(a==0)
  return 0;
  else if(a==0)
  return 1;
  else return dig(a-2)+dig(a-1);

}
int main(){
    int a=5,b=9;
    cout<<dig(a);
}