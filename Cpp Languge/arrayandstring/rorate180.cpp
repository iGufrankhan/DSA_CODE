#include<iostream>
using namespace std;
int main(){



    int n;
    cin>>n;
    int arr[n][n];

    
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];

        }cout<<endl;
    }
    for(int i=0;i<n;i++){
        int l=0,e=n-1;
        while(l<e){

            swap(arr[i][l],arr[i][e]);

l++,e--;
        }
    }for(int j=0;j<n;j++){

        int l=0,e=n-1;
        while(l<e){


            swap(arr[l][j],arr[e][j]);
            l++,e--;

        }
    }

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";

        }cout<<endl;
    }
}