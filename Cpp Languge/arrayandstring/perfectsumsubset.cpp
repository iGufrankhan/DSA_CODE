#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void subsequence(int arr[],int index,int n,vector<int>&temp,vector<vector<int> >&ans,int res,vector<int>&sum){
    if(index==n){
        ans.push_back(temp);
        sum.push_back(res);
        return;
    }
    subsequence(arr,index+1,n,temp,ans,res,sum);
    temp.push_back(arr[index]);
    subsequence(arr,index+1,n,temp,ans,res+arr[index],sum);
    temp.pop_back();
}


int main(){
int n;
cin>>n;
int arr[]={1,2,3};
vector<vector<int>>ans;
vector<int>temp;
vector<int>sum;
int res=0;
subsequence(arr,0,3,temp,ans,res,sum);

for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }




}
cout<<endl;
for(int i=0;i<sum.size();i++){
    cout<<sum[i]<<" ";
}



}