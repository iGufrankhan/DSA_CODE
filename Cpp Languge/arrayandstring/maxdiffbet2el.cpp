#include<iostream>
#include<limits.h>
using namespace std;

int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
} int ans=INT_MIN;

for(int i=0;i<n;i++){
    for(int j=i+1;j<n;j++){
        ans=max(ans,arr[j]-arr[i]);
    }
}cout<<ans;
return 0;
}