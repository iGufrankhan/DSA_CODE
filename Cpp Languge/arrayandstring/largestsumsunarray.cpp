#include<iostream>
#include<limits.h>
using namespace std;

int checkkar(int arr[],int n){
   int  maxi=INT_MIN;
    for(int i=0;i<n;i++){
        int prefix=0;
    
            prefix+=arr[i];
            maxi=max(maxi,prefix);
        if(prefix<0)
        prefix=0;


    } return maxi;
}int main(){

    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];
        
    }
  cout<< checkkar(arr,n);
}