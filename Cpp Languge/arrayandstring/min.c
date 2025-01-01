#include<stdio.h>
#include<limits.h>
int main(){



int arr[5]={9,3,7,5,8};
int min=INT_MAX;
int smin=INT_MAX;
for(int i=0;i<5;i++){
    if(arr[i]<min)
    min=arr[i];
}
for(int i=0;i<5;i++){
    if(arr[i]<smin&&arr[i]!=min)
    smin=arr[i];
}
printf("%d %d",smin,min);
}