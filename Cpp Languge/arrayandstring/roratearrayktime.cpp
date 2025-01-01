#include<iostream>
using namespace std;
int main(){




    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){


        cin>>arr[i];
    }
    int k;
    cin>>k;
int i=0;
    while(k>0){
int temp=arr[n-1];
for(i=n-2;i>=0;i--){
    arr[i+1]=arr[i];
    arr[i]=temp;
}k--;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}