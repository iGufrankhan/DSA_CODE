#include<iostream>
using namespace std;
int array(int arr[],int n){
int sum =0;
for(int i=0;i<n;i++){
sum+=arr[i];



} return sum;


}int main(){
int n;
cin>>n;
int arr[n];
for(int i=0;i<n;i++){
    cout<<"enter the elment of array"<<i<<endl;
    cin>>arr[i];
int p=array(arr,n);
cout<<p;
}
    




}