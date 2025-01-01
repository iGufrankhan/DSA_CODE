#include<iostream>
using namespace std;
int main(){

int arr[6]={3,4,1,78,0,7};
int min;
int i;
for( i=0;i<6;i++){
 min=i;
for(int j=i+1;j<6;j++)
{
if(arr[j]<arr[min])       //auxiary space 0(1)
min=j;}
if(min!=i){
swap(arr[min],arr[i]);}
}

for(int i=0;i<6;i++){
    cout<<arr[i]<<" ";
}
    return 0;
}