#include<iostream>
#include<bits/stdc++.h>
using namespace std;
int main(){


    int arr[]={2,3,4,5};
    map<int,int>m;
    for(int i=0;i<4;i++){
        m[arr[i]]++;
       
    }
    for(auto &pr:m){
        cout<<pr.second<<" ";
    }
}