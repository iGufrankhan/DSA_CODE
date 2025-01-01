#include<iostream>
using namespace std;
int main(){

int arr[5]={8,1,4,5,2};
for(int i=4;i>=0;i--){
    bool swaped=0;
    for(int j=0;j<=i;j++){
    if(arr[j]>arr[j+1]){
    swaped =1;
    swap(arr[j],arr[j+1]);}
}if(swaped==0)
break;
}

for(int i=0;i<5;i++){

    cout<<arr[i]<<" ";
}

    return 0;
}