#include<iostream>
using namespace std;
int main(){
    int n=7;
int arr[7]={ 2,4,5,6,7,1,9};
int last =arr[n-1];
for(int i=n-2;i>=0;i--){
arr[i+1]=arr[i];
arr[i]=last;
} for (int i=0;i<7;i++){



    cout<<arr[i]<<" ";
}







    return 0;
}