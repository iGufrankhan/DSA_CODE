#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;


void merging(int arr[],int st,int mid,int end){

vector<int>temp(end-st+1);

int left=st,right=mid+1,index=0;
while(left<=mid&&right<=end){
    if(arr[left]<=arr[right]){
        temp[index++]=arr[left++];
    }else{
        temp[index++]=arr[right++];
    }
}
    while(left<=mid){
        temp[index++]=arr[left++];
    }
    while(right<=end){
        temp[index++]=arr[right++];
    }
index=0;
while(st<=end){
    arr[st++]=temp[index++];
}


}


void mergesort(int arr[],int st,int end){
    if(st==end)return;

int mid=st+(end-st)/2;
    mergesort(arr,st,mid);
    mergesort(arr,mid+1,end);
merging(arr,st,mid,end);
}



int main(){


    int arr[]={2,4,1,7,0,9,3};

    mergesort(arr,0,7);
    for(int i=0;i<7;i++){
        cout<<arr[i]<<" ";
    }

}