#include<iostream>
using namespace std;
int main(){
int arr[6]={ 2,7,9,1,5,8};
int brr[6];


    for(int j=6-1;j>=0;j--){

        cout<< arr[j];
    }cout<<endl;
    for(int  i=0;i<6;i++){
        brr[i]=arr[6-i-1];
    } 

    for(int i=0;i<6;i++){
        cout<< brr[i];
    }cout<<endl;
    int i=0;
    int j=5;
    while(i<j){


        swap(arr[j],arr[i]);
        i++;
        j--;
    } for(int i=0;i<6;i++){
        cout<<arr[i];
    }
    
    
}





