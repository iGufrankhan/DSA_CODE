#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];

}int ans;
int ans1;
int target;
cin>>target;
for(int i=0;i<n-1;i++){
    int x=target-arr[i];
    int start=i+1;
    int end=n-1;
    if(arr[start]==x){
        ans=i;
        ans1=start;
        break;
    }
}  cout<<ans<<" "<<ans1;  
}