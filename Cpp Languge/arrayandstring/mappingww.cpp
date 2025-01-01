#include<iostream>
#include<unordered_map>
using namespace std;


int main(){
    int n;
    cin>>n;
int arr[n];
for(int i=0;i<n;i++)
{
    cin>>arr[i];
}unordered_map<int,int>mp;

for(int i=0;i<n;i++){
    mp[arr[i]]++;
}
for(auto &m:arr){
    if(mp.find(m*2)!=mp.end()){
        cout<<m<<" "<<m*2<<" "; 
    }
}
}