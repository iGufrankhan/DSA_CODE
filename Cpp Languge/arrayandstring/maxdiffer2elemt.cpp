#include<iostream>
#include<limits.h>
#include<math.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
int ans=INT_MIN;
int res=INT_MIN;

    for(int i=n-1;i>=0;i--){
        ans=max(ans,arr[i]);
    }
    for(int i=0;i<n;i++){
        res=max(res,ans-arr[i]);
    }
    cout<<res;

}