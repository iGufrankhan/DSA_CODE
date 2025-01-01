#include<iostream>
#include<string.h>
using namespace std;
int main(){

    string s;
    getline(cin,s);
    //we hav egetline();
   
int l=0,e=s.size()-1;
while(l<=e){
    swap(s[l],s[e]);
    l++,e--;
}
  cout<< s;
    
}