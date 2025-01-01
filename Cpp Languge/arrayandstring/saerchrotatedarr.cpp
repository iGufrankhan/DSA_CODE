#include<iostream>
using namespace std;
int search(int arr[],int n,int key){


    int ans=-1,start=0,end=n-1,mid,index=0;
    while(start<=end){

        mid=start+(end-start)/2;
        if(arr[mid]==key)
        index= mid;
        else if(arr[mid]>arr[0]){

            if(arr[start]<=key&& arr[mid]>=key)
            end=mid-1;
            else start =mid+1;
        }else if( arr[mid]<=key&&arr[end]>=key)
        start=mid+1;
        else end =mid-1;
    }
return index;

}

int main(){



    int arr[100];
    
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }int key;
    cin>>key;

    cout<<search(arr,n,key);
    return 0;
}