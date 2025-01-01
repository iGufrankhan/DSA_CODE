#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int  pointe(int arr[],int n,int key){

    int start=0,end=n-1,ans,ans1;

    while(start<end){

        if(arr[start]+arr[end]==key){
    return 1;
    
        }
        else if(arr[start]+arr[end]<key)
            start++;
        else end--;}
return 0;
}
 
int main(){

    int n; cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int key;
    cin>>key;
    
   cout<< pointe(arr,n,key);
}