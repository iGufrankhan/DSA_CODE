#include<iostream>
using namespace std;
int main(){


    int n;
    cin>>n;
    int arr[100];
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
for(int i=0;i<n;i++){
    for(int j=1;j<n;j++){
        if(arr[j]>arr[j-1])
        swap(arr[j],arr[j-1]);
    }
}

    int cnt=1;
    int ans=0;
    for(int i=1;i<n;i++){
        if(arr[i]==arr[i-1])
        cnt++;
        else{
            if(arr[i-1]==cnt)
            ans=cnt;
            cnt=1;
        }
    }
    if(arr[n-1]==cnt)
    cout<<ans;
    else cout<<-1;
}