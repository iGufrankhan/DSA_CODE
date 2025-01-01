#include<iostream>
using namespace std;


int main(){
    string s="cabcabd";
    for(int i=0;i<s.size();i++){
        for(int j=i+1;j<s.size();j++){
            if(s[i]>s[j]){
                swap(s[i],s[j]);
            }
        }
    }

    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}