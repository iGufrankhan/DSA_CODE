#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={2,14,11,7};
    int tar=13;
    vector<int>ans;
    for(int i=0;i<4;i++){
        int rem=tar-arr[i];
        for(int j=i+1;j<4;j++){
            if(arr[j]==rem){
                ans.push_back(i);
                ans.push_back(j);

                
            }
            
        }
    }
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    
}