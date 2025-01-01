#include<iostream>
#include<math.h>
using namespace std;
int main(){

       int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];}


        int leftmax[n];
        int rightmax[n];
        int ans=0; 
        for(int i=0;i<n;i++)
{

    ans=max(ans,arr[i]);
    leftmax[i+1]=ans;

}leftmax[0]=0;
for(int i=0;i<n;i++){
    cout<<leftmax[i]<<" ";
}cout<<endl;
int ans1=0;
        for(int i=n-1;i>=0;i--)
{

    ans1=max(ans1,arr[i]);
    rightmax[i-1]=ans1;

}rightmax[n-1]=0;
for(int i=0;i<n;i++){
    cout<<rightmax[i]<<" ";
}
int minheight;
int answer=0;
for(int i=0;i<n;i++){
    minheight=min(leftmax[i],rightmax[i]);
    if(minheight>arr[i])
    answer+=minheight-arr[i];
    if(minheight-arr[i]<0)
    answer+=0;
}cout<<endl;
cout<<answer;







}