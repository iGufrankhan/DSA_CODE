#include<iostream>
using namespace std;
int main(){
    string n;
    getline(cin,n);
    int count=0,st=0,en=0,m=n.length();
    while(en<m){
        if(n[st]==n[en+1]){
            count++;
            st++;en++;
        }else 
        en++;
    }
    cout<<count;
}