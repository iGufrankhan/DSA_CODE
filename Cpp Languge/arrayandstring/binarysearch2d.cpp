#include<iostream>
using namespace std;
int main(){
int n;
cin>>n;
int m;
cin>>m;

int matrix[n][m];
for(int i=0;i<n;i++){
    for(int j=0;j<m;j++){
        cin>>matrix[i][j];
    }
}
int j=m;
int x=7;
for(int i=0;i<n;i++){
    if(matrix[i][0]<=x && x<=matrix[i][j-1]){
        int strat=0,end=j-1;
        while(strat<=end){
           int  mid=(strat+end)/2;
if(matrix[i][mid]==x){
cout<<"1"; break;
}

else if(matrix[i][mid]<x)
strat=mid+1;
else end=mid-1;

        }
    }
}
return 0;
}