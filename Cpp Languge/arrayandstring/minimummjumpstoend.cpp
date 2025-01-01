#include<iostream>
#include<vector>
using namespace std;

int main(){
    int n;
    cin>>n;
    vector<int>arr(n);

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

    int cnt=0;
    int i=0;
    while(i<n){


        cnt=arr[i];
        while(cnt--){
            i++;
            if(i==n-1)cout<<"1"<<endl;
        }

        
    }
}