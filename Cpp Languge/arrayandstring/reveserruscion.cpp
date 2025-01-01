#include<iostream>
using namespace std;
void rever(string &str,int st,int end){
    if(st>=end)
    return ;

    char c=str[st];
    str[st]=str[end];
    str[end]=c;
    rever(str,st+1,end-1);
}int main(){
    string str;
    cin>>str;
    int st=0;
    int end=str.size();
    rever(str,st,end);
    cout<<str<<" ";
}