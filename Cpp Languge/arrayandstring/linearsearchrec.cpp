#include<iostream>
using namespace std;
bool linear(int arr[],int tar,int index,int n){
    if(index==n)
    return 0;
    if(arr[index]==tar)
    return 1;
   return  linear (arr,tar,index+1,n);

}int main(){

    int arr[100];
    int n;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>arr[i];

    }
    int tar;cin>>tar;
    int index=0;
    cout<<linear(arr,tar,index,n);
}