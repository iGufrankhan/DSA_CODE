#include<iostream>
using namespace std;
void binary(int nums[],int n,int target){
 int start=0,end=n-1,first=-1,last=-1;
        while(start<=end){

            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                first=mid;
                end=mid-1;

            }else if(nums[mid]<target)
              start=mid+1;
              else end=mid-1;
        }
        start=0,end=n-1;
        while(start<=end){
            int mid=start+(end-start)/2;
            if(nums[mid]==target){
                last=mid;
                start=mid+1;

            }else if (nums[mid]<target)
              start=mid+1;
              else end=mid-1;
        }
        cout<<first<<" "<<last;
        
    }
    int main(){

        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int target;
        cin>>target;
        binary(arr,n,target);
    }