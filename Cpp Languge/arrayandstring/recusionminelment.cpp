#include<iostream>
using namespace std;

int print(int arr[],int index ,int n){
    ;
    if(index==n-1)
return arr[index];
return  min(arr[index],print(arr,index+1,n));
}
int main(){

    int arr[4]={2,3,4,9};
    int n=4;
    int index=0;
    cout<<print(arr,index,n);
}
