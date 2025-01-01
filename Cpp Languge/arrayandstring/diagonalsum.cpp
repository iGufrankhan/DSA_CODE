#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }

    int sum=0;
    int sum2=0;
    int i=0;
    while(i<n){

        sum+=arr[i][i];
        i++;

    }
    i=0;
    int j=n-1;
    while(j>=0){
        sum2+=arr[i][j];
        i++;
        j--;

    }cout<<sum<<" "<<sum2;
    return 0; 
}