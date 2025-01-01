#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];   
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }cout<<endl;
    }
    
for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        swap(arr[i][j],arr[j][i]);
    }
}
    for(int j=0;j<n;j++){
int l=0,end=n-1;
while(l<end){


    swap(arr[l][j],arr[end][j]);
}
}
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
}