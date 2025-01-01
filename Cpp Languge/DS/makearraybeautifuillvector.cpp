#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<int>ans;
    int j=0;
    ans.push_back(arr[0]);
    for(int i=1;i<n;i++){
if(ans[j]>0&&arr[i]>0){
    ans.push_back(arr[i]);
    j++;
}

else {ans.pop_back();
j--;}

    }

    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
}