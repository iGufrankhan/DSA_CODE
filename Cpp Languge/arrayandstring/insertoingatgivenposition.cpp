#include<iostream>
using namespace std;
int main(){

    int n;int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int item,k;
    cin>>k>>item;
    int j=n-1;
    while(j>=k){
        arr[j+1]=arr[j];
        j--;

    }
    arr[k]=item;
    n++;



    for(int i=0;i<=n;i++){
        cout<<arr[i];
    }
}