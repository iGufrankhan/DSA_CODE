#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }int key;cin>>key;

    for(int i=0;i<n;i++){
        for(int j=0;j<n-i-1;j++){
            if(arr[j]>arr[j+1]&&arr[i+1]!=key)
            swap(arr[j],arr[j+1]);
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}