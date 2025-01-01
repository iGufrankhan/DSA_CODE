#include<iostream>
using namespace std;
int binary(int arr[],int n,int key);
int main(){

int arr[100];
int n;
cout<<"enter size ";
cin>>n;
cout<<"enter the array"<<" ";
for(int i=0;i<n;i++){


    cin>>arr[i];
}int key;
cout<<"enter the key";
cin>>key;
cout<<binary(arr,n,key)<<endl;

return 0;
}


int binary(int arr[],int n,int key){
int start =0;
int end=n-1;
int mid;
while(start<=end){

 mid=(start+end)/2;
if(arr[mid]==key)
return mid;

else if(arr[mid]<key)
start=mid+1;
else end=mid-1;

}
return -1;


}