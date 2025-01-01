#include<iostream>
using namespace std;
int main(){



    string n;
    cin>>n;
    string s;
    cin>>s;
    int ans;

    for(int i=0;i<=n.size()-s.size();i++){

        int first =i,second=0;
        while(second<s.size()){

            if(n[first]==s[second]){
            first++;second++;}
            else break;
        }if(second==s.size())
        ans=first-second;
    }cout<<ans; 
}