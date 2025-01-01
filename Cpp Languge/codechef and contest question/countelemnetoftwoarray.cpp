#include <iostream>
#include<vector>
using namespace std;
int main()
{
   
int a;
int n;
cin>>a>>n;
int arr1[a],arr2[n];


for(int i=0;i<a;i++){
    cin>>arr1[i];
    
}for(int i=0;i<n;i++){
    cin>>arr2[i];
}
int cnt=0;
vector<int>ans;
for(int i=0;i<a;i++){
    cnt=0;
    for(int j=0;j<n;j++)
    {
        if(arr1[i]>=arr2[j])
        {
            cnt++;
        }
        if(j==n-1){
            ans.push_back(cnt);
        }
    }
}
for(int i=0;i<ans.size();i++){
    cout<<ans[i]<<" ";
}
}