#include<iostream>
using namespace std;
int main(){
string s;
cin>>s;
int  n[100];
for(int i=0;i<s.size()+2;i++){
    n[i]=0;
}
int fir=0,se=0,len=0;
while(se<s.size()){
    while(s[se]){

        n[s[fir]]=0;
        fir++;
    }
    n[s[se]]=1;
    len=max(len,fir-se+1);
    se++;
}cout<<len;




}