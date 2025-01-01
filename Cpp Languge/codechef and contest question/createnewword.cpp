#include<iostream>
#include<string>
using namespace std;

int main(){



    int t;
    cin>>t;
    while(t--){
    int n=3;
    string s;
    string p;
    cin>>s>>p;


    swap(s[0],p[0]);

    cout<<s<<" "<<p<<endl;}
}