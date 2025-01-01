#include<iostream>
using namespace std;
int main(){
int arr[4]={3,6,9,8};
int max=arr[0];
int smax=0;
int semax=-1;
for(int i=0;i<4;i++){ 



    if(arr[i]>max){
    
max=arr[i];
    }
   
    }    for(int i=0;i<4;i++){
        if(arr[i]>smax&&arr[i]!=max)
smax=arr[i];


 
}

     cout<<semax<<endl;
    cout<<smax;

    
} 

    






