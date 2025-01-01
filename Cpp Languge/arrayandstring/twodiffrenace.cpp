#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int target;
    int n; 
    cin>>n;
    
    for(int i=0;i<n;i++){
        cin>>n;
    }
    
cin>>target;
   
    //first sorted array in 80 50 5 3 2
    for(int i=1;i<n;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]-arr[j]==target){
//arre[0]=i+1;
//arre[1]=j+1;
      cout<<0;    break;  }

        }
    }
    
    
}