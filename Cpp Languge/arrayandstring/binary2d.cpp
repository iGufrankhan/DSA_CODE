#include<iostream>
#include<vector>

using namespace std;



    int binary(int arr[][3],int n,int x){
  int start=0,end=2*n-1;
  while(start<=end){

    int mid=(start+end)/2;
    int rowindex=mid/n;
    int  columindex=mid/n;
    if(arr[rowindex][columindex]==x)
    return 1;

    else if(arr[rowindex][columindex]<x)
      start=mid+1;
      else end=mid-1;
  }  

return 0;
  
}
int main(){

   
 

int n;
cin>>n;
int arr[100][100];
    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }cout<<endl;
    }
int x=6;


//only call function;


}




