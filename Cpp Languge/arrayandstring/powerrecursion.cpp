#include<iostream>
#include<math.h>
using namespace std;




int power(int arr[],int st,int ln,int key){
if(st<=ln){
    int mid=st+ln/2;
    if(arr[mid]==key){
    return mid;}
    else if(arr[mid]<key)
    return power(arr,mid+1,ln,key);
    else power(arr,st,mid-1,key);

}
}

int main(){


int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}
int key;
cin>>key;

int st=0,ln=n-1;
cout<<power(arr,st,ln,key);





}