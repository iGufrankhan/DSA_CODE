#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
vector<int>ans(n,0);

for(int i=0;i<n;i++){
    ans[arr[i]-1]++;

}




for(int i=0;i<ans.size();i++){
    if(ans[i]==ans[i+1]){
        cout<<"false ";
        break;
    }
    else {
        cout<<"true"; break;
    }
}



}