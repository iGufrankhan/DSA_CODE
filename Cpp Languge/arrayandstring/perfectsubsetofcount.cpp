#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
bool subsequence(int arr[],int index,int n,int res){
static int cnt=0;
if(res==0){
return 1;
}

    if(index==n||res<0){return 0;
    
    }
   if( subsequence(arr,index+1,n,res)|| subsequence(arr,index+1,n,res-arr[index])){
    cnt++;
   }


  
}


int main(){


int arr[]={5,2,3,6,10,8};
int res=10;
int n=sizeof(arr);
subsequence(arr,0,n,res);






}

