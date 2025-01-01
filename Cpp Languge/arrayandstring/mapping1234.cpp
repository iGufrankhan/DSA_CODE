#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    int arr[9]={10,20,20,10,10,30,50,10,20};
    map<int,int>m;
    int th=0;
    
    for(int &pr:arr){
      m[pr]++;
      if(!(m[pr]%2)){
        th++;
      }
    }
    cout<<th;
    
}