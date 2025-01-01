#include<iostream>
using namespace std;
int main (){

int arr[8]={3,1,8,5,0,10,9,12};
for(int i=0;i<8;i++){
    for(int j=i;j>=0;j--){
        if(arr[j+1]<arr[j])
        swap(arr[j],arr[j+1]);

        else break;
   
    }

        
    }for(int i=0;i<8;i++){
            cout<<arr[i]<<" ";}
}
