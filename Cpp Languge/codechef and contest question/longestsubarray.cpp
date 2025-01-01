#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int k;
    cin>>k;
    int arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }

   
int pre=0,cnt=0;
int ans=0;
    for(int i=0;i<n;i++){
         pre+=arr[i];
         cnt+=1;
         if(pre==k){
            ans=max(ans,cnt);
            pre=0;
            cnt=0;

         }
    }
cout<<ans;

}