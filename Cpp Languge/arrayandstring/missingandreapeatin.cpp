#include<iostream>
#include<vector>

using namespace std;

int search(int arr[],int x){


    int l=0,e=5;
    int ans=arr[0];
    while(l<=e){

int mid=(l+e)/2;

        if(arr[mid]-mid-1>=x){
            ans=mid;
            e=mid-1;
        }    
        else {
        l=mid+1;}

}return ans+x;
}


int main(){
    int arr[6]={2,5,6,7,8,9};
   int x=3;
int res=search(arr,x);
cout<<res;
        
        }

    