#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int suff[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
     suff[n-1]=arr[n-1];
for(int i=n-2;i>=0;i--){

    suff[i]=suff[i+1]+arr[i];

}
for(int i=0;i<n;i++){
    cout<<suff[i]<<" ";
}
    
}