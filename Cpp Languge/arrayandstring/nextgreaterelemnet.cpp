#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n-1;j++){
            if(arr[i]<arr[j]){
arr[i]=arr[j];
break;
            }else if(arr[i]>arr[j]){
                arr[i]=-1;
                break;
            }
        }
        arr[n-1]=-1;
    }for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}