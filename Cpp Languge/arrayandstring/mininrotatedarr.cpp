#include<iostream>
using namespace std;
int sea(int arr[],int n){
    int start=0,end=n-1,mid,ans=arr[0];

    while(start<=end){


        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        start=mid+1;
        else 
        ans=arr[mid];
        end=mid-1;
    }

return ans;




}
int main(){


    int n=7;
    int arr[7]={4,5,6,7,8,1,2};
    cout<<sea(arr,7);
}