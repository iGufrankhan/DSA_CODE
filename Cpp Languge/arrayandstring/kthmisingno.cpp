#include<iostream>
using namespace std;
int mising(int arr[],int n,int target){
    int start=0,end=n-1,ans,mid;
    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]-mid-1>=target){
        ans=mid;
        end=mid-1;}
        else start=mid+1;
    }return ans+target;
}int main(){

    int n; cin>>n;
    int target;
    cin>>target;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    cout<<mising(arr,n,target);
}