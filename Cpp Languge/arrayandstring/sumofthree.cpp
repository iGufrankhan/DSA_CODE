#include<iostream>

using namespace std;
int main(){

       int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}
        int x;
        cin>>x;

for(int i=0;i<n-2;i++){
    for(int j=i+1;i<n-1;i++){
        for(int k=j+1;k<n;k++){
            if(arr[i]+arr[j]+arr[k]==x)
            cout<<"khan";
        }
    }
}





}