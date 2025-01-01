#include<iostream>
using namespace std;

int main(){
    int n; cin>>n;
    int arr[100];
     int count =0;
       int count1=0;
       int two=0;
       int two1=0;
    for(int i=0;i<n;i++){ 
cin>>arr[i];
    }
      
      
       for(int i=0;i<n;i++){
        if(arr[i]==0)
        count ++
;
else count1++;
       } 


       for(int i=0;i<count;i++){
        arr[i]==0;

        for(int i=count;i<n;i++){
arr[i]==1;
        }


       }
       cout<<count<<" "<<count1;
    
}