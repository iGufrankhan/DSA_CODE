#include<iostream>
using namespace std;

int check(int arr[],int n){


 int totalsum=0;

for(int i=0;i<n;i++){
    totalsum+=arr[i];
}int prefix=0;
for(int i=0;i<n;i++){
    prefix+=arr[i];
    if(totalsum==2*prefix)
return 1;

} return 0;
}
int main(){


    int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){

    cin>>arr[i];
}

cout<<check(arr,n);

}