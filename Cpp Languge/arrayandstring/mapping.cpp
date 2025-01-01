
#include<bits/stdc++.h>
#include<iostream>
#include<vector>
using namespace std;
int main(){
    map<int,int>m;
    m[1]=1;
    m[2]=8;
    map<int,int>::iterator it;

for(it=m.begin();it!=m.end();it++){
    cout<<(*it).first<<" "<<endl<<(*it).second<<" "<<endl;
}

for(auto &pr:m){
   
    cout<<pr.first<<" ";
}
}