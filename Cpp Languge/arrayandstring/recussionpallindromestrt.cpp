#include<iostream>
using namespace std;
bool pallin(string str,int st,int end){
    if(st>=end)
        return 1;
    
    if(str[st]!=str[end])
        return 0;
        else 
    return pallin(str,st+1,end-1);
}
int main(){


    string str;
    cin>>str;
    int st=0;
    int end=str.size()-1;
    cout<<pallin(str,st,end);
}