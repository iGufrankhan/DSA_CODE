#include<iostream>
using namespace std;
int main(){
int sum=0;
int n;
cin>>n;
int arr[100];
for(int i=0;i<n;i++){
    cin>>arr[i];
}for(int i=0;i<n;i++){
    for(int j=i;j<n;j++){
        for(int k=i;k<=j;k++){
          // sum+=arr[k];
            cout<<arr[k]<<" ";
            
        }cout<<endl;
    }
}

return 0;

}