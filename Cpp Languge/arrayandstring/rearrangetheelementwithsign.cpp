#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }vector<int>ans;

vector<int>ans1;

    for(int i=0;i<n;i++){
        if(arr[i]<0){
            ans.push_back(arr[i]);
        
        }else ans1.push_back(arr[i]);

    }for(int i=0;i<ans.size();i++){
        cout<<ans1[i]<<" "<<ans[i]<<" ";///gooog 
        
    }
}