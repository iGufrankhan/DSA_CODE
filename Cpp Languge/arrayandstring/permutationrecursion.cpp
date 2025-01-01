#include<iostream>
#include<vector>
using namespace std;




void permut(int arr[],vector<vector<int> > &ans,vector<bool>&visit,vector<int>&temp){


    if(visit.size()==temp.size()){
    ans.push_back(temp);
    return ;}

for(int i=0;i<visit.size();i++){
    if(visit[i]==0){
        visit[i]=1;
    temp.push_back(arr[i]);
    permut(arr,ans,visit,temp);
    visit[i]=0;
    temp.pop_back();}
}



}

int main(){

    int arr[]={1,1,2,2};
    vector<vector<int>>ans;
    vector<int>temp;
vector<bool>visit(4,0);
permut(arr,ans,visit,temp);
for(int i=0;i<ans.size();i++){
    for(int j=0;j<ans[i].size();j++){
        cout<<ans[i][j]<<" ";
    }cout<<endl;
}
}