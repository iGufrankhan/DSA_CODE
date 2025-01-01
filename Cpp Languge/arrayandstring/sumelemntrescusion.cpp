#include<iostream>

using namespace std;
int sum(int arr[],int index,int n){
    if(index==n)
    return 0;
    else return arr[index]+sum(arr,index+1,n);
}

int main(){
    int arr[4]={3,4,5,6};
    int n=4;
    int index=0;
    cout<<sum(arr,index,n);

}