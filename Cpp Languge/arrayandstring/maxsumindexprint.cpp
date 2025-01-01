#include<iostream>
#include<climits>
using namespace std;
int main(){
int n;

cin>>n;
int arr[n][n];
int sum=INT_MIN,index=-1;

for(int i=0;i<n;i++){
    for(int j=0;j<n;j++){
        cin>>arr[i][j];
    }   }
    for(int i=0;i<n;i++){
        int total=0;
        for(int j=0;j<n;j++){
            total+=arr[i][j];
            if(sum<total)
            sum=total;
            index=i;
        }
    }cout<<index;
    return 0;
}
