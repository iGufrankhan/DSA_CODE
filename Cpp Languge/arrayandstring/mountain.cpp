#include<iostream>
using namespace std;
int moutarr(int arr[],int n){

int start =0,end=n-1,mid;
while(start<=end){


    mid=start+(end-start)/2;
    if(arr[mid]>arr[mid-1]&&arr[mid]>arr[mid+1])
    return mid;
    else if (arr[mid]>arr[mid-1])
    start=mid+1;
    else end=mid-1;
}
return -1;
} int main(){



    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){


        cin>>arr[i];}
        cout<<moutarr(arr,n);
        return 0;
    }
