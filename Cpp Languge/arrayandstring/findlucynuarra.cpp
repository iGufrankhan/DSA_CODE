#include<iostream>
#include<math.h>
using namespace std;
int main(){
    bool flag=0;
    int ans=0;
    int n;cin>>n;
    int arr[n];
for(int i=0;i<n;i++){
    cin>>arr[i];

}
int count[n];
for(int i=0;i<n;i++){
    count[i]=0;
}for(int i=0;i<n;i++){
    count[arr[i]-1]++;

}for(int i=0;i<n;i++){
    if(arr[i+1]=count[i]){
    ans=max(ans,arr[i+1]);
   flag=1;}
   
   
}if(flag=1)
cout<<ans;
else cout<<"vgyj";
}
