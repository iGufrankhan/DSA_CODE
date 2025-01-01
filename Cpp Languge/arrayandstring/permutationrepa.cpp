#include<iostream>
#include<vector>
using namespace std;
void permut(vector<int>&arr,vector<vector<int>>&ans,int index){
    if(index==4){
        ans.push_back(arr);
        return ;

    }
    vector<bool>use(21,0);
    for(int i=0;i<4;i++){
        if(use[arr[i]+10]==0){
            swap(arr[index],arr[i]);
            permut(arr,ans,index+1);
            swap(arr[index],arr[i]);
            use[arr[i]+10]=1;
        }
    }

}
int main(){
   vector<int>arr;
   for(int i=0;i<4;i++){
    cin>>arr[i];
   }
    vector<vector<int>>ans;
    int index=0;
    permut(arr,ans,index);
    for(int i=0;i<ans.size();i++){
        for(int j=0;j<ans[i].size();j++){
            cout<<ans[i][j]<<" ";
        }cout<<endl;
    }
}