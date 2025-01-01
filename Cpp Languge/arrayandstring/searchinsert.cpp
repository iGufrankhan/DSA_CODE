#include<iostream>
using namespace std;
int seinser(int arr[],int n,int key){

int start=0,end=n-1,ans=n;
int mid;
while(start<=end){
mid=start+(end-start)/2;
if(arr[mid]==key){
    ans=mid;
    break;
}else if(arr[mid]<key)
start=mid+1;
else
ans=mid;
 end=mid-1;

}
return ans;
}
int main(){
int arr[100];
int n;
cin>>n;
int key;
cin>>key;
for(int i=0;i<n;i++){

    cin>>arr[i];

}
cout<<seinser(arr,n,key);
return 0;

}