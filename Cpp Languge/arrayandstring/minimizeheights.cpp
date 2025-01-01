#include<iostream>
using namespace std;


int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
int k;
cin>>k;
    for(int i=0;i<n;i++){
        if(arr[i]<k){
            arr[i]+=k;
        }else arr[i]-=k;
    }

    cout<<arr[n-1]-arr[0];
}