#include<iostream>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i]
;
    }
    int maxi=0;
    for(int i=0;i<n;i++){
        int prefi=0;
        for(int j=i;j<n;j++){
            prefi+=arr[j];
            maxi=max(maxi,prefi);
        }
    }
    cout<<maxi;
}