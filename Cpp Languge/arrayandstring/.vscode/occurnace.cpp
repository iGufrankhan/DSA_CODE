#include<iostream>
using namespace std;
int main(){



    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }  for(int i=0;i<n;i++){
        arr[i]--;

    }
    int count[n];
      for(int i=0;i<n;i++){
        count[i]=0;

    }
 for(int i=0;i<n;i++){
      count[arr[i]]++;}

     for(int i=0;i<n;i++){
        cout<<count[i]<<" ";

    }
}