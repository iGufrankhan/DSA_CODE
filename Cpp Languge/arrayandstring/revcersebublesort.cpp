#include<iostream>
using namespace std;
int main(){

int arr[5]={4,1,5,2,0};
for(int i=4;i>0;i--){
    for(int j=3;j>=0;j--){

        if(arr[j]>arr[j+1])
        swap(arr[j],arr[j+1]);
    }
}for(int i=0;i<5;i++){
    cout<<arr[i]<<" ";
}


    return 0;
}