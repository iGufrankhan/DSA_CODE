#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];}


int key;
cin>>key;
for(int i=n-2;i>=0;i--){
    for(int j=0;j<=i;j++){
        if(arr[j]<arr[j+1])
        swap(arr[j],arr[j+1]);
       
    }
}
for(int i=0;i<n-2;i++){
    int ans=key-arr[i];
    int start=i+1,end=n-1;
    while(start<end){
        if(arr[start]+arr[end]==ans)
       cout<<"khan";
       
        else if(arr[start]+arr[end]>ans)
        end--;
        else start++;
    }

}







}