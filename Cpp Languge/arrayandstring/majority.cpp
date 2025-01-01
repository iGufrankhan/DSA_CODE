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
int maxp=INT16_MIN;
int map=0;
for(int i=0;i<n;i++){
   if(maxp<ans[i]){
   maxp=ans[i];
   map=i;
   }
}
cout<<map+1;


}