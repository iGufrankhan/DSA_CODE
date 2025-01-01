#include<iostream>
#include<unordered_map>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n];
unordered_map<int,int>as;
for(int i=0;i<n;i++){
    cin>>arr[i];
}
    for(int i=0;i<n;i++){
      
        as[arr[i]]++;
    }int ans=0;
    for(auto it:as){
  if(it.second%2!=0)
  ans=it.first;}


cout<<ans;

}