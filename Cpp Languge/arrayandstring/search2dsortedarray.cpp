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
int x;cin>>x;

int i=0,j=m-1;
        while(i<n&&j>=0){

           
if(matrix[i][j]==x){
cout<<"1"; break;
}

else if(matrix[i][j]<x){
i++;}
else{ j--;}

        }
    

return 0;
}