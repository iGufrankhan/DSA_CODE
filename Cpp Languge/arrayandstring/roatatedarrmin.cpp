#include<iostream>
using namespace std;
int arracheck(int arr[],int n){
    int ans=arr[0],start=0,end=n-1,mid;
    while(start<=end){



        mid=start+(end-start)/2;
        if(arr[mid]>=arr[0])
        start=mid+1;
        else  ans=arr[mid];
        end=mid-1;
    } return ans;

}int main(){

    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){

        cin>>arr[i];
    }
    cout<<arracheck(arr,n);
    return 0;
}